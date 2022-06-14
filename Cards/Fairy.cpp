//
// Created by User on 6/14/2022.
//

#include "Fairy.h"

Fairy::Fairy(): Card(CardType::Fairy),m_bonusHP(10)
{}

void Fairy::applyEncounter(Player &player) const {
    if (player.getJob()==std::string("Wizard")){
        player.heal(m_bonusHP);
    }
    printFairyMessage(player.getJob()==std::string("Wizard"));
}
