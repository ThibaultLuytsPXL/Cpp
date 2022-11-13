#include <iostream>
#include <time.h>
#include "character.h"
#include "human.h"
#include "potion.h"
#include "healthpotion.h"
#include "strengthpotion.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    srand(time (NULL));

    Character* a;
    Character* b;
    Potion* h;
    Potion* s;

    h = new HealthPotion("red");
    s = new StrengthPotion("Orange");
    a = new Human("Antony");
    b = new Human("Bart");
    b->setHP(10);
    b->setATK(3);
    a->getName();
    int newHP;
    std::cin >> newHP;
    a->setHP(newHP);
    int HP = a->getHP();
    std::cout << "new HP is " << HP << std::endl;
    std::cout << "B attacks A"<<std::endl;
    a->setHP(a->getHP() - b->Attack());
    std::cout << "A HP is " << a->getHP() << std::endl;
    std::cout << "A rests" << std::endl;
    a->Rest();
    std::cout << "A HP is " << a->getHP() << std::endl;
    std::cout << "A drinks potion " << a->setHP(a->getHP() + h->Heal(a->getHP())) << std::endl;
    std::cout << "A HP is " << a->getHP() << std::endl;


    delete a;
    delete b;
    delete h;
    delete s;

    return 0;
}
