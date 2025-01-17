//
// Created by User on 6/22/2022.
//

#ifndef EX4_GANG_H
#define EX4_GANG_H
#include "BattleCard.h"
#include <memory>
#include <deque>

using namespace std;

class Gang: public Card{
public:
    explicit Gang();
    Gang(const Gang& gang);
    Gang& operator=(const Gang& gang);
    ~Gang() override;
    void addMember(const string& battleCardName) override;
    void applyEncounter (Player&player) const override;
private:
    deque<unique_ptr<BattleCard>> m_gangMembers;
};

#endif //EX4_GANG_H
