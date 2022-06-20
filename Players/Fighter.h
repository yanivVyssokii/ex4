//
// Created by idanh on 6/13/2022.
//

#ifndef EX4_FIGHTER_H
#define EX4_FIGHTER_H
#include "Player.h"
class Fighter:public Player{
public:
    explicit Fighter(std::string name);
    int getAttackStrength() const override;
};
#endif //EX4_FIGHTER_H
