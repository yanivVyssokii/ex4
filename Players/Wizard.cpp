//
// Created by idanh on 6/13/2022.
//

#include "Wizard.h"
Wizard::Wizard(std::string name, std::string job, int maxHP, int force):Player(name, job, maxHP, force){

}
void Wizard::heal(int extraHP) {
    m_HP+=2*extraHP;
    if (m_HP>m_maxHP){
        m_HP=m_maxHP;
    }
}