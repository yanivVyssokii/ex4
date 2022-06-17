//
// Created by idanh on 6/14/2022.
//

#include "Dragon.h"
Dragon::Dragon() : BattleCard(CardType::Battle, 25, std::numeric_limits<int>::max(), 1000)
{
    m_name.assign("Dragon");
}
//