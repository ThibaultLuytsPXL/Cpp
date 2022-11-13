#include "strengthpotion.h"

StrengthPotion::StrengthPotion(std::string color) : Potion(color)
{
    std::cout << "Create a " << color << "Strength potion" << std::endl;
}

StrengthPotion::~StrengthPotion()
{
    std::cout << "Destruct a " << color << "Strength potion" << std::endl;
}

int StrengthPotion::Heal(int HP)
{

}

int StrengthPotion::Empower(int ATK)
{
    srand( time (NULL));
    ATK += (rand() % 5);
    return ATK;
}

