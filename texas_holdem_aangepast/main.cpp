#include <iostream>
#include <string.h>
#define DEBUG_PRINT
#include "texasholdem.h"

enum spelerIDs
{
    IK,
    JIJ,
    HIJ,
    ZIJ
};

int willYouRaise( struct Game * game, struct Player * player, unsigned int totalBet )
{
    switch( player->ID )
    {
    case IK:
    {

        if (  table[0] == nullptr  )
        {
            PokerRank mijnHandRank = getMyHandRank(player->hand);
            //PokerRank tafelRank = getMyHandRank( nullptr );

            if (  mijnHandRank.category >= ONE_PAIR )
            {
                return( 0 );
            }
            if (player->hand->cards[0]->suit == player->hand->cards[1]->suit)
            {
                int diffBetweenOrderedCards = mijnHandRank.hand[0]->rank - mijnHandRank.hand[1]->rank;
                if( diffBetweenOrderedCards == 1 || diffBetweenOrderedCards == 13 )
                {
                    return(  20  );
                }
                if( diffBetweenOrderedCards == 2 || diffBetweenOrderedCards == 12 )
                {
                    return(  15  );
                }
            }
        }
        if (  table[2] != nullptr  )
        {
            PokerRank mijnHandRank = getMyHandRank(player->hand);
            PokerRank tafelRank = getMyHandRank( nullptr );

            if (  mijnHandRank.category == STRAIGHT_FLUSH && mijnHandRank.category > tafelRank.category )
            {
                return( player->chips );
            }
            else
            if (  mijnHandRank.category == FOUR_OF_A_KIND && mijnHandRank.category > tafelRank.category )
            {
                return( (player->chips * 2) / 3 );
            }
            else
            if (  mijnHandRank.category == FULL_HOUSE && mijnHandRank.category > tafelRank.category )
            {
                return( player->chips / 2 );
            }
            else
            if (  mijnHandRank.category <= TWO_PAIR && mijnHandRank.category > tafelRank.category )
            {
                return( 5 );
            }
            else
            if (  mijnHandRank.category >= THREE_OF_A_KIND && mijnHandRank.category > tafelRank.category )
            {
                return( 10 );
            }
            else
            if (  mijnHandRank.category >= STRAIGHT && mijnHandRank.category > tafelRank.category )
            {
                return( 35 );
            }
            return(-1);
        }
        if (  table[3] != nullptr  )
        {
            if (player->chips< game->blind * 5 )
            {
                return (-1);
            }
        }
        if (  table[4] != nullptr  )
        {}

        break;
    }
    case JIJ:
        return( 100000 );
        break;
    case HIJ:
        return (100000);
        break;
    case ZIJ:
        return( 100000 );
        break;
    }
    return( 0 );
}

int main( void )
{
	Game game;
	makeNewDeck( &game );

    Player ik;
    strcpy( ik.name, "Ikke de beste" );
    ik.ID = IK;

    Player jij;
    strcpy( jij.name, "Gijse zot" );
    jij.ID = JIJ;

    Player hij;
    strcpy( hij.name, "Hij weet niet beter" );
    hij.ID = HIJ;

    Player zij;
    strcpy( zij.name, "Zij speelt vals" );
    zij.ID = ZIJ;

    addPlayerToGame( &game, &ik );
    addPlayerToGame( &game, &jij );
    addPlayerToGame( &game, &hij );
    addPlayerToGame( &game, &zij );

	playGame( &game, 1 );
	printf( "The winner is %s with %d chips !", game.players[0]->name, game.players[0]->chips );
	return 0;
}

