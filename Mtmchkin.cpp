//
// Created by User on 6/17/2022.
//

#include "Mtmchkin.h"
#include "Players/Rogue.h"
#include "Players/Wizard.h"
#include "Players/Fighter.h"
#include <string>
#include "utilities.h"
#include <map>

Player* RogueFactory(std::string name, std::string job, int maxHP=100, int force=5){
    return new Rogue(name,job,maxHP,force);
}

Player* WizardFactory(std::string name, std::string job, int maxHP=100, int force=5){
    return new Wizard(name,job,maxHP,force);
}

Player* FighterFactory(std::string name, std::string job, int maxHP=100, int force=5){
    return new Fighter(name,job,maxHP,force);
}

void insertNumberOfPlayers(int& numOfPlayers){

}

void insertPlayers(int numOfPlayers, std::deque<std::shared_ptr<Player>>& players){
    typedef Player* (*constructorFunction)(std::string,std::string,int,int);
    std::map<std::string, constructorFunction> constructorsMap;
    constructorsMap["Rogue"]=&RogueFactory;
    constructorsMap["Wizard"]=&WizardFactory;
    constructorsMap["Fighter"]=&FighterFactory;

    for (int i=0;i<numOfPlayers;i++){
        printInsertPlayerMessage();

    }
}

void insertCards(std::deque<std::shared_ptr<Card>>& card, const std::string fileName){

}

Mtmchkin::Mtmchkin(const std::string fileName): m_roundNumber(1) {
    printStartGameMessage();
    insertNumberOfPlayers(m_amountOfPlayers);
    insertPlayers(m_amountOfPlayers,m_players);
    insertCards(m_cards, fileName);


}

void Mtmchkin::playRound() {
    printRoundStartMessage(m_roundNumber);

    int playerNum=0;
    for (const std::shared_ptr<Player>& player:m_players) {
        std::shared_ptr<Card> currentCard = m_cards.front();
        m_cards.pop_front();

        //make the move
        currentCard->applyEncounter(*player);

        //push back the card:
        m_cards.push_back(currentCard);

        //check if the player is dead and if so delete him from the player deque and add to the losers
        if (player->isKnockedOut()){
            m_players.erase(m_players.begin()+playerNum);
            m_lostPlayers.push_front(player);
        }

            //check if the player won and if so delete him from the player deque and add to the winners
        else if (player->getLevel()==10){
            m_players.erase(m_players.begin()+playerNum);
            m_wonPlayers.push_back(player);
        }

        //if the player is still alive and hasn't won move to the next player
        else {
            playerNum++;
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
    for (const std::shared_ptr<Player>& player:m_wonPlayers) {
        printPlayerLeaderBoard(rank,*player);
        rank++;
    }
    for (const std::shared_ptr<Player>& player:m_players) {
        printPlayerLeaderBoard(rank,*player);
        rank++;
    }
    for (const std::shared_ptr<Player>& player:m_lostPlayers) {
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

