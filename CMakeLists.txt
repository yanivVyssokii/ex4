cmake_minimum_required(VERSION 3.20)
project(ex4)

set(CMAKE_CXX_STANDARD 14)
add_executable(ex4 tool/main.cpp Players/Player.cpp Players/Player.h Cards/Card.cpp Cards/Card.h Players/Rogue.cpp Players/Rogue.h Players/Wizard.cpp
        Players/Wizard.h Players/Fighter.cpp Players/Fighter.h Cards/BattleCard.cpp Cards/BattleCard.h Cards/Vampire.cpp Cards/Vampire.h
        Cards/Dragon.cpp Cards/Dragon.h Cards/Pitfall.cpp Cards/Pitfall.h Cards/Fairy.cpp Cards/Fairy.h Cards/Treasure.cpp Cards/Treasure.h Cards/Barfight.cpp
        Cards/Barfight.h Cards/Goblin.h Cards/Goblin.cpp Cards/Merchant.cpp Cards/Merchant.h Exception.h utilities.h utilities.cpp
        Mtmchkin.cpp Mtmchkin.h test.cpp  Cards/Gang.cpp Cards/Gang.h)
