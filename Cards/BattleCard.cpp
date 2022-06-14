//
// Created by User on 6/14/2022.
//

#include "BattleCard.h"

BattleCard::BattleCard(CardType type, int force, int damage, int loot):
        Card(type),
        m_force(force),
        m_damage(damage),
        m_loot(loot)
{}
