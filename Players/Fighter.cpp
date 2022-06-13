//
// Created by idanh on 6/13/2022.
//

#include "Fighter.h"
Fighter::Fighter(std::string name, int maxHP, int force):Player(name, maxHP, force){

}
int Fighter::getAttackStrength() const {
    return m_level+2*m_force;
}