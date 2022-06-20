//
// Created by idanh on 6/13/2022.
//

#ifndef EX4_WIZARD_H
#define EX4_WIZARD_H
#include "Player.h"
class Wizard:public Player{
public:
    explicit Wizard(std::string name);
    void heal(int extraHP) override;
};

#endif //EX4_WIZARD_H
