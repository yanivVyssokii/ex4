//
// Created by User on 6/13/2022.
//

#ifndef EX4_PLAYER_H
#define EX4_PLAYER_H
#include <cstring>
#include <string>


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
    virtual void heal(int extraHP);
    void damage(int damagedHP);
    bool isKnockedOut() const;
    virtual void addCoins(int extraCoins);
    bool pay(int payment);
    virtual int getAttackStrength() const;
private:
    std::string m_name;
    int m_level;
    int m_coins;
    int m_force;
    int m_HP;
    int m_maxHP;
};

#endif //EX4_PLAYER_H
