//
// Created by idanh on 6/13/2022.
//

#include "Fighter.h"
Figther::Figther(std::string name, int maxHP, int force):Player(name, maxHP, force){

}
int Figther::getAttackStrength() const {
    return m_level+2*m_force;
}