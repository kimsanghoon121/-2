#include "thief.h"
#include <iostream>
#include <string>
using namespace std;

Thief::Thief(string nickname) {
    setNickname(nickname);
    job_name = "도적";
    cout << "* 도적으로 전직하였습니다." << endl;
    speed = 80;
}

void Thief::attack() {
    cout << "* 표창을 던진다" << endl;
}