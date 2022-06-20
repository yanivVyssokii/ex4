//
// Created by User on 6/14/2022.
//

#include "Barfight.h"

Barfight::Barfight(): Card(CardType::Barfight,"Barfight"),m_damage(10)
{}

void Barfight::applyEncounter(Player &player) const {
    if (player.getJob()!=std::string("Fighter")){
        player.damage(this->m_damage);
    }
    printBarfightMessage(player.getJob()==std::string("Fighter"));
}
