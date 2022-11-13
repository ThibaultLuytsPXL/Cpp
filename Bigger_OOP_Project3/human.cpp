#include "human.h"

Human::Human(std::string name) : Character(name)
{
    std::cout << "Create a Human named " << name << std::endl;
}

Human::~Human()
{
    std::cout << "destruct a Human named " << name << std::endl;
}

int Human::Attack()
{
    ATK = getATK();
    return ATK;
}

int Human::Rest()
{
    HP = setHP(getHP() + 5);
    return HP;
}

