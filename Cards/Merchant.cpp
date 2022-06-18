//
// Created by idanh on 6/14/2022.
//

#include "Merchant.h"
Merchant::Merchant(): Card(CardType::Merchant), m_HpPrice(5),m_ForcePrice(10)
{
    m_name.assign("Merchant");
}

void Merchant::applyEncounter(Player &player) const {
    printMerchantInitialMessageForInteractiveEncounter(std::cout,player.getName(),player.getCoins());
    std::string action; int actionNum; bool success;
    try {
        std::getline(std::cin, action);
        actionNum = std::stoi(action);
        success=true;
    } catch (...){
        success=false;
    }
    while(!success||actionNum<0||actionNum>2) {
        printInvalidInput();
        try {
            std::getline(std::cin, action);
            actionNum = std::stoi(action);
            success=true;
        } catch (...){
            success=false;
        }
    }
    int price=(actionNum==1)?5:(actionNum==2)?10:0;
    if (player.getCoins()<price){
        printMerchantInsufficientCoins(std::cout);
        return;
    }
    else if (actionNum==1){
        player.heal(1);
    }
    else if(actionNum==2){
        player.buff(1);
    }
    player.pay(price);
    printMerchantSummary(std::cout,player.getName(),actionNum,price);
}
