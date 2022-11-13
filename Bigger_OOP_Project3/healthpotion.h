#ifndef HEALTHPOTION_H
#define HEALTHPOTION_H

#include <potion.h>

class HealthPotion : public Potion
{
public:
    HealthPotion(std::string color);
    ~HealthPotion();

    int Heal(int HP);
    int Empower(int ATK);
private:
    std::string color;
};

#endif // HEALTHPOTION_H
