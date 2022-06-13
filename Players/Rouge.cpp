//
// Created by idanh on 6/13/2022.
//

#include "Rouge.h"

Rouge::Rouge(std::string name, int maxHP, int force):Player(name, maxHP, force){

}

void Rouge::addCoins(int extraCoins) {
    m_coins+=2*extraCoins;
}