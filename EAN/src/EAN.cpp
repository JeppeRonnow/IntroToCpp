#include "../headers/EAN.hpp"

EAN::EAN(string num){
    EANnr = num;
}

bool EAN::isValid(){
    int lige = 0;
    int ulige = 0;

    for (int i = 0; i < EANnr.length(); i++){
        int digit = stoi(EANnr.substr(3, 1));

        if (i % 2 == 0){
            lige += digit;
        }
        else{
            ulige += digit;
        }
    }

    ulige *= 3;

    return (lige + ulige) % 10 == 0;

}


int EAN::lastDigit(string ISBN){
    int sum = 0;

    for (size_t i = 0; i < ISBN.size(); ++i) {
        int digit = ISBN[i] - '0';
        sum += (i % 2 == 0) ? digit : digit * 3;
    }

    int remainder = sum % 10;
    return (remainder == 0) ? 0 : 10 - remainder;

}

string EAN::ISBNtoEAN(string ISBN){
    ISBN.erase(0, 5);

    ISBN.erase(size(ISBN)-1, 1);

    size_t pos;
    while ((pos = ISBN.find('-')) != string::npos) {
        ISBN.erase(pos, 1);
    }

    ISBN = "978" + ISBN;

    int last = lastDigit(ISBN);
    
    return ISBN + to_string(last);
}

EAN::~EAN(){}