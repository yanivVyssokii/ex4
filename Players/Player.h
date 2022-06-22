//
// Created by User on 6/13/2022.
//

#ifndef EX4_PLAYER_H
#define EX4_PLAYER_H
#include <cstring>
#include <string>


class Player{
public:
    Player(const Player& player);
    Player& operator=(const Player& player);
    friend std::ostream& operator<<(std::ostream& os, const Player& p);
    ~Player();
    void levelUp();
    void setLevel(int newLevel);
    std::string getJob() const;
    int getLevel() const;
    int getCoins() const;
    int getForce() const;
    int getHP() const;
    std::string getName() const;
    void buff(int extraForce);
    virtual void heal(int extraHP);
    void damage(int damagedHP);
    bool isKnockedOut() const;
    virtual void addCoins(int extraCoins);
    bool pay(int payment);
    virtual int getAttackStrength() const;

protected:
    explicit Player(std::string name, std::string job);
    std::string m_name;
    std::string m_job;
    int m_level;
    int m_coins;
    int m_force;
    int m_HP;
    int m_maxHP;
};

#endif //EX4_PLAYER_H
