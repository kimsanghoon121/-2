#include "archer.h"
#include <iostream>
#include <string>
using namespace std;

Archer::Archer(string nickname) {
    setNickname(nickname);
    job_name = "궁수";
    cout << "* 궁수로 전직하였습니다." << endl;
    accuracy = 80;
}

void Archer::attack() {
    cout << "* 활을 쏜다" << endl;
}