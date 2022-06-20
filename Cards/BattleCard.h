//
// Created by User on 6/14/2022.
//

#ifndef EX4_BATTLECARD_H
#define EX4_BATTLECARD_H

#include "Card.h"

class BattleCard: public Card{
public:
    BattleCard(CardType type, std::string name, int force, int damage, int loot);
    void applyEncounter (Player&player) const override;

protected:
    int m_force;
    int m_damage;
    int m_loot;
};

#endif //EX4_BATTLECARD_H
