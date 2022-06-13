//
// Created by User on 5/7/2022.
//

#ifndef EX2MTM_PLAYER_H
#define EX2MTM_PLAYER_H

#include <cstring>
#include <string>
#include "utilities.h"


class Player{
public:
    explicit Player(std::string name, int maxHP=100, int force=5);
    Player(const Player& player);
    Player& operator=(const Player& player);
    ~Player();
    void printInfo() const;
    void levelUp();
    int getLevel() const;
    void buff(int extraForce);
    void heal(int extraHP);
    void damage(int damagedHP);
    bool isKnockedOut() const;
    void addCoins(int extraCoins);
    bool pay(int payment);
    int getAttackStrength() const;
private:
    std::string m_name;
    int m_level;
    int m_coins;
    int m_force;
    int m_HP;
    int m_maxHP;
};

#endif //EX2MTM_PLAYER_H
