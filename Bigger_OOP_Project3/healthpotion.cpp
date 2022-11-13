#include "healthpotion.h"

HealthPotion::HealthPotion(std::string color) : Potion(color)
{
    std::cout << "Create a " << color << "Health potion" << std::endl;
}

HealthPotion::~HealthPotion()
{
    std::cout << "Destruct a " << color << "Health potion" << std::endl;
}

int HealthPotion::Heal(int HP)
{
    srand( time (NULL));
    HP += (rand() % 15);
    return HP;
}

int HealthPotion::Empower(int ATK)
{

}
