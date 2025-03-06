#include "../headers/Cpr.h"
#include <stdexcept>
#include <chrono>
#include <ctime>

using namespace std;

Cpr::Cpr(){

}

Cpr::Cpr(string num){
    nummeret = num;
}

void Cpr::setCprNr(string num){
    /*if (num.length() != 10) {
            throw runtime_error("CPR number must be exactly 10 characters long!");
    }*/
    nummeret = num;
}

string Cpr::getCprNr(){
    return nummeret;
}

int Cpr::getDag(){
    string str = nummeret.substr(0, 2);  
    return stoi(str);       
}

int Cpr::getMaaned(){
    string str = nummeret.substr(2, 2);
    return stoi(str);
}

int Cpr::getAar(){
    string str = nummeret.substr(4, 2);

    int year = stoi(nummeret.substr(6, 1));

    if (year < 4) {
        return 1900 + stoi(str);
    }
    else if (year < 6){
        return 1800 + stoi(str);
    }
    return 2000 + stoi(str);
}

int Cpr::getDato(){
    return getAar() * 10000 + getMaaned() * 100 + getDag();
}

int Cpr::getAlder() {
    using namespace std::chrono;

    // today time
    auto now = system_clock::now();
    time_t now_c = system_clock::to_time_t(now);
    tm localTime = *localtime(&now_c);

    // date komponenter
    int currentYear = localTime.tm_year + 1900;
    int currentMonth = localTime.tm_mon + 1;
    int currentDay = localTime.tm_mday;

    // alder
    int age = currentYear - getAar();

    // has it happed yet
    if (currentMonth < getMaaned() || (currentMonth == getMaaned() && currentDay < getDag())) {
        age--;
    }

    return age;
}


bool Cpr::erMand(){
    int lastNum = stoi(nummeret.substr(9, 1));

    if (lastNum % 2 == 0)
        return false;
    return true;
}

bool Cpr::erKvinde(){
    return !erMand();
}

bool Cpr::isValid(){

    // length
    if (nummeret.length() != 10) return false;

    // is all chars nums
    for (int i = 0; i < nummeret.length(); ++i) {
        if (nummeret[i] < '0' || nummeret[i] > '9') {
            return false;
        }
    }

    // 11 mod check
    int vaagte[10] = {4,3,2,7,6,5,4,3,2,1};
    int sum = 0;

    for (int i = 0; i < nummeret.length(); ++i) {
        sum = sum + (vaagte[i] * (nummeret[i] - '0'));
    }

    if (sum % 11 != 0) return false;


    // else must be true
    return true;
}

Cpr::~Cpr(){

}