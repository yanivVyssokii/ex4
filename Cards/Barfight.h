//
// Created by User on 6/14/2022.
//

#ifndef EX4_BARFIGHT_H
#define EX4_BARFIGHT_H

#include "Card.h"

class Barfight:public Card{
public:
    Barfight();
    void applyEncounter(Player& player) const override;

private:
    int m_damage;
};
#endif //EX4_BARFIGHT_H
