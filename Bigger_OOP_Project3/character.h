#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include<iostream>



class Character
{
public:

    Character(std::string name);
    //destructor
    virtual~Character();

    virtual int Attack() = 0;
    virtual int Rest() = 0;


    virtual int getHP();
    virtual int getATK();
    virtual std::string &getName();

    virtual int setHP(int newHP);
    virtual int setATK(int newATK);
    virtual std::string setName(const std::string &newName);

protected:

    int HP;
    int ATK;

    std::string name;
};

#endif // CHARACTER_H
