//Warrior::Warrior(string nickname) /* 빈칸 3: 부모 클래스의 생성자 호출 */ {


#include "warrior.h"
#include "player.h"
#include <iostream>
#include <string>
using namespace std;

Warrior::Warrior(string nickname){
    setNickname(nickname);
    job_name = "전사";
    cout << "* 전사로 전직하였습니다." << endl;
    HP = 80;
}

void Warrior::attack() {
    cout << "* 장검을 휘두른다" << endl;
}