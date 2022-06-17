//
// Created by User on 6/13/2022.
//

#ifndef EX4_CARD_H
#define EX4_CARD_H
#include <string>
#include "../Players/Player.h"
#include "../utilities.h"

/*
 *  CardType:
 *  Each card has a type:
 *  BATTLE - Battle against a monster.
 *  BUFF - Increase your player's force by 'm_force' points of CardStats.
 *  HEAL - Increase your player's HP by 'm_heal' points  of CardStats (no more than maxHP points).
 *  TREASURE - Get 'm_profit' coins of CardStats.
*/
enum class CardType {Battle, Merchant, Pitfall, Treasure, Barfight, Fairy}; // The type of the Card

class Card {
public:
    Card(CardType type);
    Card(const Card&) = default;
    ~Card() = default;
    virtual void applyEncounter(Player& player) const = 0;

    friend std::ostream& operator<<(std::ostream& os, const Card& c);
    Card& operator=(const Card& other) = default;

protected:
    CardType m_type;
    std::string m_name;

};


#endif //EX4_CARD_H
