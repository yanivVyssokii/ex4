//
// Created by idanh on 6/14/2022.
//

#ifndef EX4_MERCHANT_H
#define EX4_MERCHANT_H

#include "Card.h"
class Merchant:public Card{
public:
    Merchant();
    void applyEncounter(Player& player) const override;

private:
    int m_HpPrice;
    int m_ForcePrice;
};
#endif //EX4_MERCHANT_H
