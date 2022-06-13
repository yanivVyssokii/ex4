//
// Created by User on 6/13/2022.
//

#include "Player.h"
#define MAX_LEVEL 10

Player::Player(std::string name, int maxHP, int force):
        m_level(1),
        m_coins(0),
        m_force(force),
        m_HP(maxHP),
        m_maxHP(maxHP)
{
    m_name.assign(name);
}

Player::Player(const Player &player)
{
    m_maxHP=player.m_maxHP;
    m_HP=player.m_HP;
    m_force=player.m_force;
    m_level=player.m_level;
    m_coins=player.m_coins;
    m_name.assign(player.m_name);
}

Player &Player::operator=(const Player &player){
    if (this==&player){
        return *this;
    }
    m_name.assign(player.m_name);
    m_HP=player.m_HP;
    m_maxHP=player.m_maxHP;
    m_level=player.m_level;
    m_coins=player.m_coins;
    m_force=player.m_force;
    return *this;
}


Player::~Player()
{
    //delete m_name;
}

void Player::printInfo() const
{
    char* name=new char[m_name.length()+1];
    strcpy(name,m_name.c_str());
    printPlayerInfo(name,m_level,m_force,m_HP,m_coins);
    delete[] name;
}

void Player::levelUp()
{
    if(m_level<MAX_LEVEL) {
        m_level++;
    }
}

int Player::getLevel() const
{
    return m_level;
}

void Player::buff(int extraForce)
{
    m_force+=extraForce;
}

void Player::heal(int extraHP)
{
    m_HP+=extraHP;
    if (m_HP>m_maxHP){
        m_HP=m_maxHP;
    }
}

void Player::damage(int damagedHP)
{
    m_HP-=damagedHP;
    if (m_HP<0){
        m_HP=0;
    }
}

bool Player::isKnockedOut() const
{
    if(m_HP==0) {
        return true;
    }
    return false;
}

void Player::addCoins(int extraCoins)
{
    m_coins+=extraCoins;
}

bool Player::pay(int payment)
{
    if (m_coins-payment<0) {
        return false;
    }
    m_coins-=payment;
    return true;
}



int Player::getAttackStrength() const
{
    return m_level+m_force;
}
