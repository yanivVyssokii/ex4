#include <iostream>
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
    Vampire v;
    Goblin g;
    Dragon d;
    std::cout<<d<<std::endl;
    std::cout<<g<<std::endl;
    std::cout<<v<<std::endl;

    Merchant m;
    Rogue r("r","Rogue");
    r.addCoins(100);
    std::cout<<m<<std::endl;
    std::cout<<r<<std::endl;
    m.applyEncounter(r);
    std::cout<<r<<std::endl;
    return 0;
}
