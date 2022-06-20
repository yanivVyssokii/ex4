//
// Created by idanh on 6/13/2022.
//

#include "Fighter.h"
Fighter::Fighter(std::string name):Player(name,"Fighter")
{}
int Fighter::getAttackStrength() const {
    return m_level+2*m_force;
}