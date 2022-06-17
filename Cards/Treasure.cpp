//
// Created by User on 6/14/2022.
//

#include "Treasure.h"

Treasure::Treasure():Card(CardType::Treasure),m_loot(10)
{
    m_name.assign("Treasure");
}

void Treasure::applyEncounter (Player&player) const {
    player.addCoins(m_loot);
    printTreasureMessage();
}