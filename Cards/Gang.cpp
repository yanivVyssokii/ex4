//
// Created by User on 6/22/2022.
//

#include "Gang.h"
#include "Goblin.h"
#include "Dragon.h"
#include "Vampire.h"
#include <map>

BattleCard* GoblinFactory(){
    return new Goblin();
}

BattleCard* DragonFactory(){
    return new Dragon();
}

BattleCard* VampireFactory(){
    return new Vampire();
}

Gang::Gang(): Card(CardType::Gang,"Gang")
{}

void Gang::applyEncounter(Player &player) const {
    bool lost = false;
    int initialLevel = player.getLevel();
    for (const unique_ptr<BattleCard>& battleCard: m_gangMembers){
        if (!lost) {
            int hp = player.getHP();
            battleCard->applyEncounterWithoutPrints(player);
            if (hp > player.getHP()) {
                printLossBattle(player.getName(),battleCard->m_name);//lost
                lost = true;
            }
        }
        else{ //lost already
            player.damage(battleCard->m_damage);
            printLossBattle(player.getName(),battleCard->m_name);
            if (battleCard->m_name=="Vampire"){
                player.buff(-1);
            }
        }
    }
    if (!lost){
        printWinBattle(player.getName(),"Gang");
        player.setLevel(initialLevel+1);
    }
    if (lost){
        player.setLevel(initialLevel);
    }
}

void Gang::addMember(const string& battleCardName) {
    typedef BattleCard* (*constructorFunction)();
    map<string, constructorFunction> constructorsMap;
    constructorsMap["Goblin"]=&GoblinFactory;
    constructorsMap["Dragon"]=&DragonFactory;
    constructorsMap["Vampire"]=&VampireFactory;
    m_gangMembers.push_back(unique_ptr<BattleCard>(constructorsMap[battleCardName]()));
}

Gang::~Gang() {}

Gang::Gang(const Gang &gang): Card(CardType::Gang,"Gang") {
    for (const unique_ptr<BattleCard>& battleCard: gang.m_gangMembers){
        this->addMember(battleCard->m_name);
    }
}

Gang &Gang::operator=(const Gang &gang) {
    if (this == &gang){
        return *this;
    }
    m_gangMembers.erase(m_gangMembers.begin(),m_gangMembers.end());
    for (const unique_ptr<BattleCard>& battleCard: gang.m_gangMembers){
        this->addMember(battleCard->m_name);
    }
    return *this;
}
