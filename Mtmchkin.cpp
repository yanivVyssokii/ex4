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

using std::unique_ptr;
using namespace std;


bool containsOnlyLetters(string const &str) {
    return regex_match(str, regex("^[A-Za-z]+$"));
}

Player* RogueFactory(string name){
    return new Rogue(name);
}

Player* WizardFactory(string name){
    return new Wizard(name);
}

Player* FighterFactory(string name){
    return new Fighter(name);
}

void insertNumberOfPlayers(int& numOfPlayers){
    printEnterTeamSizeMessage();
    string input;
    numOfPlayers=0;
    bool success = false;
    while(!success) {
        try {
            getline(cin,input);
            numOfPlayers= stoi(input);
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

void insertPlayers(int numOfPlayers, deque<unique_ptr<Player>>& players){
    typedef Player* (*constructorFunction)(string);
    map<string, constructorFunction> constructorsMap;
    constructorsMap["Rogue"]=&RogueFactory;
    constructorsMap["Wizard"]=&WizardFactory;
    constructorsMap["Fighter"]=&FighterFactory;

    bool success = true;
    for (int i=0;i<numOfPlayers;i++){
        if (success) {
            printInsertPlayerMessage();
        }
        string line, name, job;
        getline(cin,line);
        istringstream lineToSplit(line);
        vector<string> results(istream_iterator<string>{lineToSplit},istream_iterator<string>());
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
            players.push_back(unique_ptr<Player>(constructorsMap[job](name)));
            success=true;
        }



    }
}

void insertCards(deque<unique_ptr<Card>>& card, const string fileName){
    ifstream source(fileName);
    if (!source) {
        throw(DeckFileNotFound());
    }
    string line,cardName;
    int currentLine=1;
    while (getline(source, line)) {
        if(line == "Merchant"){
            card.push_back(unique_ptr<Card>(new Merchant()));
        }
        else if(line == "Dragon"){
            card.push_back(unique_ptr<Card>(new Dragon()));
        }
        else if(line == "Fairy"){
            card.push_back(unique_ptr<Card>(new Fairy()));
        }
        else if(line == "Goblin"){
            card.push_back(unique_ptr<Card>(new Goblin()));
        }
        else if(line == "Pitfall"){
            card.push_back(unique_ptr<Card>(new Pitfall()));
        }
        else if(line == "Treasure"){
            card.push_back(unique_ptr<Card>(new Treasure()));
        }
        else if(line == "Vampire"){
            card.push_back(unique_ptr<Card>(new Vampire()));
        }
        else if(line == "Barfight"){
            card.push_back(unique_ptr<Card>(new Barfight()));
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

Mtmchkin::Mtmchkin(const string fileName): m_roundNumber(0) {
    printStartGameMessage();
    insertNumberOfPlayers(this->m_amountOfPlayers);
    insertPlayers(this->m_amountOfPlayers,this->m_players);
    insertCards(this->m_cards, fileName);


}

void Mtmchkin::playRound() {
    printRoundStartMessage(this->m_roundNumber+1);

    int size=this->m_amountOfPlayers;
    for (int i=0; i<size; i++) {
        printTurnStartMessage(this->m_players.front()->getName());
        unique_ptr<Card> currentCard= move(this->m_cards.front());
        this->m_cards.pop_front();
        unique_ptr<Player> currentPlayer= move(this->m_players.front());
        this->m_players.pop_front();
        //make the move
        currentCard->applyEncounter(*currentPlayer);
//
        //push back the card:
        this->m_cards.push_back(move(currentCard));

        //check if the player is dead and if so delete him from the player deque and add to the losers
        if (currentPlayer->isKnockedOut()){
            this->m_lostPlayers.push_front(move(currentPlayer));
            this->m_amountOfPlayers--;
        }

        //check if the player won and if so delete him from the player deque and add to the winners
        else if (currentPlayer->getLevel()==10){
            this->m_wonPlayers.push_back(move(currentPlayer));
            this->m_amountOfPlayers--;
        }

        //if the player is still alive and hasn't won move to the next player
        else {
            this->m_players.push_back(move(currentPlayer));
        }
    }

    if (isGameOver()){
        printGameEndMessage();
    }

    this->m_roundNumber++;
}

void Mtmchkin::printLeaderBoard() const {
    int rank=1;
    printLeaderBoardStartMessage();
    for (const unique_ptr<Player>& player:this->m_wonPlayers) {
        printPlayerLeaderBoard(rank,*player);
        rank++;
    }
    for (const unique_ptr<Player>& player:this->m_players) {
        printPlayerLeaderBoard(rank,*player);
        rank++;
    }
    for (const unique_ptr<Player>& player:this->m_lostPlayers) {
        printPlayerLeaderBoard(rank,*player);
        rank++;
    }
}

bool Mtmchkin::isGameOver() const {
    return this->m_players.empty();
}

int Mtmchkin::getNumberOfRounds() const {
    return this->m_roundNumber;
}

