//
// Created by User on 6/13/2022.
//

#include "Card.h"
#include "Card.h"

Card::Card(CardType type, const CardStats &stats):
        m_effect(type),
        m_stats(stats)
{}

void Card::applyEncounter(Player &player) const
{
    if (m_effect==CardType::Battle){
        bool isWin=m_stats.force<=player.getAttackStrength();
        printBattleResult(isWin);
        if (isWin){
            player.levelUp();
            player.addCoins(m_stats.loot);
            return;
        }
        player.damage(m_stats.hpLossOnDefeat);
        return;
    }
    if(m_effect==CardType::Treasure){
        player.addCoins(m_stats.loot);
        return;
    }
    if (player.pay(m_stats.cost)){
        if (m_effect==CardType::Buff){
            player.buff(m_stats.buff);
            return;
        }
        player.heal(m_stats.heal);
    }
}

void Card::printInfo() const
{
    if (m_effect==CardType::Battle){
        printBattleCardInfo(m_stats);
    }
    if (m_effect==CardType::Buff){
        printBuffCardInfo(m_stats);
    }
    if (m_effect==CardType::Treasure){
        printTreasureCardInfo(m_stats);
    }
    if (m_effect==CardType::Heal){
        printHealCardInfo(m_stats);
    }
}
