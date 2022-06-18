//
// Created by idanh on 6/13/2022.
//

#ifndef EX4_ROGUE_H
#define EX4_ROGUE_H
#include "Player.h"

class Rogue:public Player
{
public:
    explicit Rogue(std::string name, std::string job, int maxHP=100, int force=5);
    void addCoins(int extraCoins) override;
};
#endif //EX4_ROGUE_H
