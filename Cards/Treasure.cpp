//
// Created by User on 6/14/2022.
//

#include "Treasure.h"

Treasure::Treasure():Card(CardType::Treasure,"Treasure"),m_loot(10)
{}

void Treasure::applyEncounter (Player&player) const {
    player.addCoins(m_loot);
    printTreasureMessage();
}