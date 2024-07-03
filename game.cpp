// Game.cpp
#include "Game.h"
#include <iostream>

void Game::addPlayer(Player p, int bet) {
    p.setBet(bet);
    players.push_back(p);
}


void Game::playGame() {
    guessingGame.reset();
    for (int i = 0; i < players.size(); i++) {
        std::cout << players[i].getName() << ", DEN LUOT BAN DOAN!" << std::endl;
        int guess;
        do {
            std::cout << "NHAP SO BAN DOAN (1-10): ";
            std::cin >> guess;
        } while (guess < 1 || guess > 10);
        std::string result = guessingGame.checkGuess(guess);
        std::cout << result << std::endl;
        if (result == "CHINH XAC!") {
            players[i].setScore(players[i].getScore() + 1);
            break;
        }
    }
}

void Game::displayResults() {
    std::cout << "KET QUA:" << std::endl;
    int totalBet = 0;
    int maxScore = -1;
    int winnerIndex = -1;
    for (int i = 0; i < players.size(); i++) {
        std::cout << players[i].getName() << ": " << players[i].getScore() << " DIEM" << std::endl;
        totalBet += players[i].getBet();
        if (players[i].getScore() > maxScore) {
            maxScore = players[i].getScore();
            winnerIndex = i;
        }
    }
    if (winnerIndex != 0) {
        std::cout << players[winnerIndex].getName() << " THANG $" << totalBet << "!" << std::endl;
        players[winnerIndex].setScore(players[winnerIndex].getScore() + totalBet);
    } else {
        std::cout << "KHONG CO NGUOI THANG." << std::endl;
    }
}

