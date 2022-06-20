//
// Created by idanh on 6/14/2022.
//

#include "Pitfall.h"
Pitfall::Pitfall(): Card(CardType::Pitfall,"Pitfall"),m_damage(10)
{}

void Pitfall::applyEncounter(Player &player) const {
    bool isRouge = player.getJob()==std::string("Rogue");
    if (!isRouge){
        player.damage(m_damage);
    }
    printPitfallMessage(isRouge);
}