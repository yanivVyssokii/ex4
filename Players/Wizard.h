//
// Created by idanh on 6/13/2022.
//

#ifndef EX4_WIZARD_H
#define EX4_WIZARD_H
#include "Player.h"
class Wizard:public Player{
    explicit Wizard(std::string name, int maxHP=100, int force=5);
    void heal(int extraHP) override;
};

#endif //EX4_WIZARD_H