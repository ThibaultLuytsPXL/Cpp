#include "character.h"

Character::Character(std::string name)
{
    std::cout << "Create Character" << name << std::endl;
}

Character::~Character()
{
    std::cout << "destruct Character" << name << std::endl;
}

int Character::getHP()
{
    return HP;
}

int Character::getATK()
{
    return ATK;
}

std::string &Character::getName()
{
    return name;
}

int Character::setHP(int newHP)
{
    HP = newHP;
    return HP;
}

int Character::setATK(int newATK)
{
    ATK = newATK;
    return ATK;
}

std::string Character::setName(const std::string &newName)
{
    return(newName);
}



