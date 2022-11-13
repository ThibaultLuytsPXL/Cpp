#ifndef HUMAN_H
#define HUMAN_H

#include <character.h>

class Human : public Character
{
public:
    Human(std::string name);
    virtual~Human();


    int Attack();
    int Rest();
private:

    int HP;
    int ATK;

    std::string name;
};

#endif // HUMAN_H
