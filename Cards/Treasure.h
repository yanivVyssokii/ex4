//
// Created by User on 6/14/2022.
//

#ifndef EX4_TREASURE_H
#define EX4_TREASURE_H

#include "Card.h"

class Treasure:public Card{
public:
    Treasure();

private:
    int m_loot;
};
#endif //EX4_TREASURE_H
