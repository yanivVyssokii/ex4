//
// Created by User on 6/14/2022.
//

#ifndef EX4_FAIRY_H
#define EX4_FAIRY_H

#include "Card.h"

class Fairy:public Card{
public:
    Fairy();
    void applyEncounter(Player& player) const override;
private:
    int m_bonusHP;

};
#endif //EX4_FAIRY_H
