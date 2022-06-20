//
// Created by User on 6/13/2022.
//

#include "Card.h"
#include "../utilities.h"
#define VERYBIG 99999999

Card::Card(CardType type, std::string name):
        m_type(type),
        m_name(name)
{}

std::ostream &operator<<(std::ostream &os, const Card &c) {
    printCardDetails(os,c.m_name);
    if (c.m_type==CardType::Battle){
        if (c.m_name=="Dragon"){
            printMonsterDetails(os,25,VERYBIG,1000, true);
        }
        if (c.m_name=="Vampire"){
            printMonsterDetails(os,10,10,2);
        }
        if (c.m_name=="Goblin"){
            printMonsterDetails(os,6,10,2);
        }
    }
    printEndOfCardDetails(os);
    return os;
}


