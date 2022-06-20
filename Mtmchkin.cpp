//
// Created by User on 6/17/2022.
//

#include "Mtmchkin.h"
#include "Players/Rogue.h"
#include "Players/Wizard.h"
#include "Players/Fighter.h"
#include <string>
#include <vector>
#include "utilities.h"
#include <map>
#include <regex>
#include "fstream"
#include "Exception.h"
//Cards includes//
#include "Cards/Vampire.h"
#include "Cards/Barfight.h"
#include "Cards/Dragon.h"
#include "Cards/Fairy.h"
#include "Cards/Goblin.h"
#include "Cards/Merchant.h"
#include "Cards/Pitfall.h"
#include "Cards/Treasure.h"
#include "Players/Rogue.h"
#include "Players/Wizard.h"
#include "Players/Fighter.h"

bool containsOnlyLetters(std::string const &str) {
    return std::regex_match(str, std::regex("^[A-Za-z]+$"));
}

Player* RogueFactory(std::string name){
    return new Rogue(name);
}

Player* WizardFactory(std::string name){
    return new Wizard(name);
}

Player* FighterFactory(std::string name){
    return new Fighter(name);
}

void insertNumberOfPlayers(int& numOfPlayers){
    printEnterTeamSizeMessage();
    std::string input;
    bool success = false;
    while(!success) {
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
}

void insertPlayers(int numOfPlayers, std::deque<std::unique_ptr<Player>>& players){
    typedef Player* (*constructorFunction)(std::string);
    std::map<std::string, constructorFunction> constructorsMap;
    constructorsMap["Rogue"]=&RogueFactory;
    constructorsMap["Wizard"]=&WizardFactory;
    constructorsMap["Fighter"]=&FighterFactory;

    bool success = true;
    for (int i=0;i<numOfPlayers;i++){
        if (success) {
            printInsertPlayerMessage();
        }
        std::string line, name, job;
        std::getline(std::cin,line);
        std::istringstream lineToSplit(line);
        std::vector<std::string> results(std::istream_iterator<std::string>{lineToSplit},std::istream_iterator<std::string>());
        name=results[0];
        job=results[1];
        if (!containsOnlyLetters(name)){
            printInvalidName();
            success= false;
            i--;
        }
        else if (job!="Rogue"&&job!="Wizard"&&job!="Fighter"){
            printInvalidClass();
            success= false;
            i--;
        }
        else {
            players.push_back(std::unique_ptr<Player>(constructorsMap[job](name)));
            success=true;
        }



    }
}

void insertCards(std::deque<std::unique_ptr<Card>>& card, const std::string fileName){
    std::ifstream source(fileName);
    if (!source) {
        throw(DeckFileNotFound());
    }
    std::string line,cardName;
    int currentLine=1;
    while (std::getline(source, line)) {
        if(line == "Merchant"){
            card.push_back(std::unique_ptr<Card>(new Merchant()));
        }
        else if(line == "Dragon"){
            card.push_back(std::unique_ptr<Card>(new Dragon()));
        }
        else if(line == "Fairy"){
            card.push_back(std::unique_ptr<Card>(new Fairy()));
        }
        else if(line == "Goblin"){
            card.push_back(std::unique_ptr<Card>(new Goblin()));
        }
        else if(line == "Pitfall"){
            card.push_back(std::unique_ptr<Card>(new Pitfall()));
        }
        else if(line == "Treasure"){
            card.push_back(std::unique_ptr<Card>(new Treasure()));
        }
        else if(line == "Vampire"){
            card.push_back(std::unique_ptr<Card>(new Vampire()));
        }
        else if(line == "Barfight"){
            card.push_back(std::unique_ptr<Card>(new Barfight()));
        }
        else{
            throw(DeckFileFormatError(currentLine));
        }
        currentLine++;
    }
    if(currentLine<5){
        throw(DeckFileInvalidSize());
    }


}

Mtmchkin::Mtmchkin(const std::string fileName): m_roundNumber(0) {
    printStartGameMessage();
    insertNumberOfPlayers(m_amountOfPlayers);
    insertPlayers(m_amountOfPlayers,m_players);
    insertCards(m_cards, fileName);


}

void Mtmchkin::playRound() {
    printRoundStartMessage(m_roundNumber+1);

    int size=m_amountOfPlayers;
    for (int i=0; i<size; i++) {
        printTurnStartMessage(m_players.front()->getName());
        std::unique_ptr<Card> currentCard= std::move(m_cards.front());
        m_cards.pop_front();
        std::unique_ptr<Player> currentPlayer= std::move(m_players.front());
        m_players.pop_front();
        //make the move
        currentCard->applyEncounter(*currentPlayer);
//
        //push back the card:
        m_cards.push_back(std::move(currentCard));

        //check if the player is dead and if so delete him from the player deque and add to the losers
        if (currentPlayer->isKnockedOut()){
            m_lostPlayers.push_front(std::move(currentPlayer));
            m_amountOfPlayers--;
        }

        //check if the player won and if so delete him from the player deque and add to the winners
        else if (currentPlayer->getLevel()==10){
            m_wonPlayers.push_back(std::move(currentPlayer));
            m_amountOfPlayers--;
        }

        //if the player is still alive and hasn't won move to the next player
        else {
            m_players.push_back(std::move(currentPlayer));
        }
    }

    if (isGameOver()){
        printGameEndMessage();
    }

    m_roundNumber++;
}

void Mtmchkin::printLeaderBoard() const {
    int rank=1;
    printLeaderBoardStartMessage();
    for (const std::unique_ptr<Player>& player:m_wonPlayers) {
        printPlayerLeaderBoard(rank,*player);
        rank++;
    }
    for (const std::unique_ptr<Player>& player:m_players) {
        printPlayerLeaderBoard(rank,*player);
        rank++;
    }
    for (const std::unique_ptr<Player>& player:m_lostPlayers) {
        printPlayerLeaderBoard(rank,*player);
        rank++;
    }
}

bool Mtmchkin::isGameOver() const {
    return m_players.empty();
}

int Mtmchkin::getNumberOfRounds() const {
    return m_roundNumber;
}

