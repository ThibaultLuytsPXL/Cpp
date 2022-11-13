#include "defencepotion.h"

Defencepotion::Defencepotion(std::string color) : Potion(color)
{
    std::cout << "Create a " << color << "Defence potion" << std::endl;
}

Defencepotion::~Defencepotion()
{
    std::cout << "Destruct a " << color << "Defence potion" << std::endl;
}

int Defencepotion::Defence(int DEF)
{
    srand( time (NULL));
    DEF += (rand() % 3);
    return DEF;
}
