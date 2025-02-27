#include "headers/Dato.h"

using namespace std;

Dato::Dato(){

}

Dato::Dato(int d){
    datoen = d;
}

// YYYYMMDD
int Dato::getDatoen(){
    return datoen;
}

// YYYYMMDD
int Dato::getAar(){
    return datoen/10000;
}

int Dato::getMaaned(){
    return (datoen%10000)/100;
}   

int Dato::getDag(){
    return datoen%100;
}

int Dato::getKvartal(){
    return (getMaaned()-1)/3+1;
}

void Dato::setDatoen(int d){
    datoen = d;
}

void Dato::setAar(int a){
    datoen = (a * 10000) + (datoen % 10000);
}

void Dato::setMaaned(int m){
    datoen = (datoen / 10000) * 10000 + (m * 100) + (datoen % 100);
}

void Dato::setDag(int d){
    datoen = (datoen / 100) * 100 + d;
}
  
int Dato::dagIaar(){
    int daysInMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day = getDag();
    int month = getMaaned();
    // check leap year
    if (getLeapYear() == true) {
        daysInMonth[2] = 29;
    }

    int res;

    for (int i = 0; i < month +1; i++) {
        res += daysInMonth[i];
    }

    return res + day;
}

int Dato::restDagIaar(){
    int daysInMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day = getDag();
    int month = getMaaned();
    // check leap year
    if (getLeapYear() == true) {
        daysInMonth[2] = 29;
    }

    int res;

    for (int i = month + 1; i < 12; i++) {
        res += daysInMonth[i];
    }

    return res + (daysInMonth[month] - day);
}

bool Dato::getLeapYear(){
    int year = getAar();
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

void Dato::setDatoPlusEn(){
    
    // gets the current date
    int day = getDag();
    int month = getMaaned();
    int year = getAar();

    // define the number of days in each month
    int daysInMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


    // check leap year
    if (getLeapYear() == true) {
        daysInMonth[2] = 29;
    }

    day++;

    // check if the day is the last day of the month
    if (day > daysInMonth[month])
    {
        day = 1;
        month++;
    }

    //check month
    if (month > 12){
        month = 1;
        year++;
    }

    datoen = (year*10000) + (month*100) + day;
}

void Dato::setDatoMinusEn(){
    
    // gets the current date
    int day = getDag();
    int month = getMaaned();
    int year = getAar();

    // define the number of days in each month
    int daysInMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


    // check leap year
    if (getLeapYear() == true) {
        daysInMonth[2] = 29;
    }

    day--;

    // check if the day is the last day of the month
    if (day == 0)
    {
        day = daysInMonth[month];
        month--;
    }

    //check month
    if (month == 0){
        month = 12;
        year--;
    }

    datoen = (year*10000) + (month*100) + day;
}

bool Dato::validDato(){
    // gets the current date
    int day = getDag();
    int month = getMaaned();
    int year = getAar();

    // define the number of days in each month
    int daysInMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // check leap year
    if (getLeapYear() == true) {
        daysInMonth[2] = 29;
    }

    if (year < 1700 || year > 9999) return false;
    
    if (month < 1 || month > 12) return false;

    if (day < 1 || day > daysInMonth[month]) return false;

    return true;
}

int Dato::dageMellem(int endDate){
    int idag = datoen;

    int dage = 0;
    if (datoen < endDate){
        while (datoen < endDate){
            setDatoPlusEn();
            dage++;
        }
    }
    else {
        while (datoen > endDate){
            setDatoMinusEn();
            dage++;
        }
    }
    datoen = idag;

    return dage;
}

Dato::~Dato(){

}
