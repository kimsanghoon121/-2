#include "magician.h"
#include <iostream>
#include <string>
using namespace std;

Magician::Magician(string nickname) {
    setNickname(nickname);
    job_name = "마법사";
    cout << "* 마법사로 전직하였습니다." << endl;
    MP = 80;
}

void Magician::attack() {
    cout << "* 마법을 쓴다" << endl;
}