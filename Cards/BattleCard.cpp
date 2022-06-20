//
// Created by User on 6/14/2022.
//

#include "BattleCard.h"
#include "../utilities.h"

BattleCard::BattleCard(CardType type, std::string name, int force, int damage, int loot):
        Card(type,name),
        m_force(force),
        m_damage(damage),
        m_loot(loot)
{}

void BattleCard::applyEncounter (Player& player) const {
    if(player.getAttackStrength()>=m_force)
    {
        player.levelUp();
        player.addCoins(m_loot);
        printWinBattle(player.getName(),m_name);
    }
    else{
        player.damage(m_damage);
        printLossBattle(player.getName(),m_name);
    }
}
