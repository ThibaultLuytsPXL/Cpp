#ifndef DEFENCEPOTION_H
#define DEFENCEPOTION_H

#include "potion.h"

class Defencepotion : public Potion
{
public:
    Defencepotion(std::string color);
    ~Defencepotion();

    int Defence(int DEF);
private:
    std::string color;
};

#endif // DEFENCEPOTION_H
