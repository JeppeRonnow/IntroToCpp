#include "../headers/EMA.hpp"


EMA::EMA(string s){
    emailAddress = s;
}

void EMA::setEMA(string s){
    emailAddress = s;
}

string EMA::getEMA(){
    return emailAddress;
}

bool EMA::isValid() const{
    if (snabelA() == -1){  // tjek om der er 1 "@"
        return false;
    }

    if (!dot()) return false;

    if (!checkLengths()) return false;

    if (!checkChars()) return false;

    return true;
}

int EMA::snabelA() const{
    int res = 0;
    int index;

    for (int i = 0; i < emailAddress.length(); ++i) {
        if (emailAddress[i] == '@') {
            res++;
            index = i;
        }
    }

    if (res != 1) return -1;

    return index;
}

bool EMA::dot() const{
    int index = snabelA();

    string lastPart = emailAddress.substr(index + 1, emailAddress.length());  // delen efter @

    int res = 0;
    int dotIndex = 0;

    for (int i = 0; i < lastPart.length(); ++i) {
        if (lastPart[i] == '.') {
            dotIndex = i;
            res++;
        }
    }

    if (lastPart.substr(0,dotIndex).length() < 2) return false; // hvis der er mindre end 2 mellem . og @

    return res == 1;
}

bool EMA::checkLengths() const{
    int index = snabelA();

    string lastPart = emailAddress.substr(index + 1, emailAddress.length());  // delen efter @
    string firstPart = emailAddress.substr(0, index);  // delen før @

    if (firstPart.length() < 5 || firstPart.length() > 64) return false;
    else if (lastPart.length() < 5 || lastPart.length() > 255) return false;

    return true;
}


bool EMA::checkChars() const{
    for (int i = 0; i < emailAddress.length(); ++i) {
        if (emailAddress[i] != '.' && emailAddress[i] != '@' && emailAddress[i] != '%' && emailAddress[i] != '&' && !isalnum(emailAddress[i])) {
            return false;
        }
    }

    return true;
}

EMA::~EMA(){};
