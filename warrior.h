#pragma once
#include "player.h"

class Warrior : public Player {
public:
    Warrior(string nickname);
    void attack() override;
};


//#pragma once
//#include "player.h"

//class Warrior : public Player  /* 빈칸 1: Player 클래스를 상속 */ {
//public:
    //Warrior(string nickname);
    //void attack() override;
//};