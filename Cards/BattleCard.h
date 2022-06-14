//
// Created by User on 6/14/2022.
//

#ifndef EX4_BATTLECARD_H
#define EX4_BATTLECARD_H

#include "Card.h"

class BattleCard: public Card{
    BattleCard(CardType type, int force, int damage, int loot);

private:
    int force;
    int damage;
    int loot;
};

#endif //EX4_BATTLECARD_H
