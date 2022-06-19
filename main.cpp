#include <iostream>
#include <vector>
#include "utilities.h"
#include "Players/Player.h"
#include "Players/Rogue.h"
#include "Players/Wizard.h"
#include "Players/Fighter.h"
#include "Cards/Card.h"
#include "Cards/Pitfall.h"
#include "Cards/Goblin.h"
#include "Cards/Dragon.h"
#include "Cards/Vampire.h"
#include "Cards/Fairy.h"
#include "Cards/Barfight.h"
#include "Cards/Treasure.h"
#include "Cards/Merchant.h"


int main() {
    printEnterTeamSizeMessage();
    int numOfPlayers=0;
    std::string input;
    bool success = false;
    while(!success||numOfPlayers<2||numOfPlayers>6) {
        try {
            std::getline(std::cin,input);
            numOfPlayers= std::stoi(input);
            if (numOfPlayers<2||numOfPlayers>6){
                printInvalidTeamSize();
                continue;
            }
            success = true;
        } catch (...) {
            printInvalidTeamSize();
        }
    }
    return 0;
}
