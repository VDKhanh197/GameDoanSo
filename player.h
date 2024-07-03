#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
private:
    std::string name;//khai báo chuỗi
    int score;//biến điểm
    int bet;//biến cá cược
public:
    Player();
    Player(std::string n, int s, int b);
    std::string getName();
    void setName(std::string n);
    int getScore();
    void setScore(int s);
    int getBet();
    void setBet(int b);

};

#endif

