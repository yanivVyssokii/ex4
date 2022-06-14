//
// Created by idanh on 6/14/2022.
//

#ifndef EX4_PITFALL_H
#define EX4_PITFALL_H

#include "Card.h"
class Pitfall:public Card{
public:
    Pitfall();
    void applyEncounter(Player& player) const override;

private:
    int m_damage;
};

#endif //EX4_PITFALL_H
