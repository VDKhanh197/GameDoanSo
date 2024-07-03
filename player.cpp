#include "Player.h"

Player::Player() {
    name = "";
    score = 0;
    bet = 0;
}

Player::Player(std::string n, int s, int b) {
    name = n;
    score = s;
    bet = b;
}

std::string Player::getName() {
    return name;
}

void Player::setName(std::string n) {
    name = n;
}

int Player::getScore() {
    return score;
}

void Player::setScore(int s) {
    score = s;
}

int Player::getBet() {
    return bet;
}

void Player::setBet(int b){
    bet = b;
}


