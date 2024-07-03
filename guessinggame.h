// GuessingGame.h
#ifndef GUESSING_GAME_H
#define GUESSING_GAME_H

#include <vector>
#include <string>
#include "Player.h"

class GuessingGame {
private:
    int random_num;
    int max_guesses;
    int num_guesses;
    std::string state;
    std::vector<Player> players;
public:
    GuessingGame(int max);
    void setRandomNum();
    std::string checkGuess(int guess);
    int getRandomNum();
    std::string getState();
    void addPlayer(Player p);
    std::vector<Player> getPlayers();
    void reset();
};

#endif





