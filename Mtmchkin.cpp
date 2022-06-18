//
// Created by User on 6/17/2022.
//

#include "Mtmchkin.h"
#include <string>
#include "utilities.h"

void insertNumberOfPlayers(int& numOfPlayers){

}

void insertPlayers(int numOfPlayers, Player& currentPlayer, std::deque<Player>& players){

}

void insertCards(std::deque<Card>& card){

}

/*Mtmchkin::Mtmchkin(const std::string fileName): m_roundNumber(1) {
    printStartGameMessage();
    insertNumberOfPlayers(m_amountOfPlayers);
    insertPlayers(m_amountOfPlayers, m_currentPlayer,m_players);
    insertCards(m_cards);


}*/

void Mtmchkin::playRound() {
    printRoundStartMessage(m_roundNumber);

    for (Player player:m_players) {
        std::unique_ptr<Card> currentCard(&m_cards.front());
        std::unique_ptr<Player> currentPlayer(&player);
        m_cards.pop_front();

        currentCard->applyEncounter(*currentPlayer);


        //todo: push back the currents, player only if isn't dead
    }

    if (isGameOver()){
        printGameEndMessage();
    }

    m_roundNumber++;
}

void Mtmchkin::printLeaderBoard() const {

}

bool Mtmchkin::isGameOver() const {
    return m_players.empty();
}

int Mtmchkin::getNumberOfRounds() const {
    return m_roundNumber;
}

