#include <iostream>
#include "Player.h"
#include "GuessingGame.h"
#include "Game.h"

int main() {
    std::cout << "****** CHAO MUNG BAN DEN VOI TRO CHOI DOAN SO CASINO ******" << std::endl;
    Player p1("A", 0, 500);
    Player p2("B", 0, 500);
    Game game;
    game.addPlayer(p1,500);
    game.addPlayer(p2,500);
    for (int i = 0; i < 3; i++) {
        std::cout << "HIEP " << i+1 << std::endl;
        game.playGame();
    }
    game.displayResults();
    return 0;
}
