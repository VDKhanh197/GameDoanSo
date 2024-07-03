// Game.h
#ifndef GAME_H
#define GAME_H

#include <vector>
#include "Player.h"
#include "GuessingGame.h"

class Game {
private:
    std::vector<Player> players;
    GuessingGame guessingGame;
public:
    Game() : guessingGame(10) {} // Default constructor to initialize the GuessingGame object
    void addPlayer(Player p, int amount);
    void playGame();
    void displayResults();
};

#endif


