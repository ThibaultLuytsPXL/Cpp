#ifndef POTION_H
#define POTION_H

#include <string>
#include <iostream>
#include <time.h>

class Potion
{
public:
    Potion(std::string color);
    virtual~Potion();

    virtual int Heal(int HP) = 0;
    virtual int Empower(int ATK) = 0;

    virtual std::string &getColor();

protected:
   std::string color;
};

#endif // POTION_H
