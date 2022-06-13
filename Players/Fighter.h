//
// Created by idanh on 6/13/2022.
//

#ifndef EX4_FIGHTER_H
#define EX4_FIGHTER_H
#include "Player.h"
class Figther:public Player{
    explicit Figther(std::string name, int maxHP=100, int force=5);
    int getAttackStrength() const override;
};
#endif //EX4_FIGHTER_H
