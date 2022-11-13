#ifndef STRENGTHPOTION_H
#define STRENGTHPOTION_H

#include <potion.h>

class StrengthPotion : public Potion
{
public:
    StrengthPotion(std::string color);
    virtual~StrengthPotion();

    int Heal(int HP);
    int Empower(int ATK);
private:
    std::string color;
};

#endif // STRENGTHPOTION_H
