//
// Created by User on 6/13/2022.
//

#include "Card.h"
#include "../utilities.h"

Card::Card(CardType type):
        m_type(type)
{}

std::ostream &operator<<(std::ostream &os, const Card &c) {
    printCardDetails(os,c.m_name);
    if (c.m_type==CardType::Battle){
        if (c.m_name=="Dragon"){
            printMonsterDetails(os,25,std::numeric_limits<int>::max(),1000, true);
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


