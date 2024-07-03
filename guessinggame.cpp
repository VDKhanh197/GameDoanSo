// GuessingGame.cpp
#include "GuessingGame.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

GuessingGame::GuessingGame(int max) {
    max_guesses = max;
    num_guesses = 0;
    state = "Playing...";
    setRandomNum();
}

void GuessingGame::setRandomNum() {
    srand(time(NULL));
    random_num = rand() % 5 + 1;
}

std::string GuessingGame::checkGuess(int guess) {
    num_guesses++;
    if (guess < random_num) {
        return "SO BAN DOAN QUA THAP!";
    } else if (guess > random_num) {
        return "SO BAN DOAN QUA CAO!";
    } else {
        state = "BAN THANG!";
        return "CHINH XAC!";
    }
    if (num_guesses >= max_guesses) {
        state = "BAN THUA!";
        return "";
    }
}

int GuessingGame::getRandomNum() {
    return random_num;
}
std::string GuessingGame::getState() {
    return state;
}

void GuessingGame::addPlayer(Player p) {
    players.push_back(p);
}

std::vector<Player> GuessingGame::getPlayers() {
    return players;
}

void GuessingGame::reset() {
    num_guesses = 0;
    state = "Playing...";
    setRandomNum();
}



