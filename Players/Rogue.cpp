//
// Created by idanh on 6/13/2022.
//

#include "Rogue.h"

Rogue::Rogue(std::string name):Player(name, "Rogue"){

}

void Rogue::addCoins(int extraCoins) {
    m_coins+=2*extraCoins;
}