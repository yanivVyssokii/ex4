//
// Created by User on 6/17/2022.
//
#ifndef MTMCHKIN_H_
#define MTMCHKIN_H_

#include <string>
#include <deque>
#include "Players/Player.h"
#include "Cards/Card.h"



class Mtmchkin{

public:

    /*
    * C'tor of Mtmchkin class
    *
    * @param filename - a file which contains the cards of the deck.
    * @return
    *      A new instance of Mtmchkin.
    */
    Mtmchkin(const std::string fileName);

    /*
    * Play the next Round of the game - according to the instruction in the exercise document.
    *
    * @return
    *      void
    */
    void playRound();

    /*
    * Prints the leaderBoard of the game at a given stage of the game - according to the instruction in the exercise document.
    *
    * @return
    *      void
    */
    void printLeaderBoard() const;

    /*
    *  Checks if the game ended:
    *
    *  @return
    *          True if the game ended
    *          False otherwise
    */
    bool isGameOver() const;

    /*
    *  Returns the number of rounds played.
    *
    *  @return
    *          int - number of rounds played
    */
    int getNumberOfRounds() const;

private:
    std::deque<std::unique_ptr<Player>> m_players;
    std::deque<std::unique_ptr<Player>> m_wonPlayers;
    std::deque<std::unique_ptr<Player>> m_lostPlayers;
    std::deque<std::unique_ptr<Card>> m_cards;
    int m_roundNumber;
    int m_amountOfPlayers;
};

#endif /* MTMCHKIN_H_ */