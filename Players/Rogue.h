//
// Created by idanh on 6/13/2022.
//

#ifndef EX4_ROGUE_H
#define EX4_ROGUE_H
#include "Player.h"

class Rogue:public Player
{
public:
    explicit Rogue(std::string name);
    void addCoins(int extraCoins) override;
};
#endif //EX4_ROGUE_H
