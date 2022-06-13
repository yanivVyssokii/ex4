//
// Created by idanh on 6/13/2022.
//

#ifndef EX4_ROUGE_H
#define EX4_ROUGE_H
#include "Player.h"

class Rouge:public Player
{
    explicit Rouge(std::string name, int maxHP=100, int force=5);
    void addCoins(int extraCoins) override;
};
#endif //EX4_ROUGE_H
