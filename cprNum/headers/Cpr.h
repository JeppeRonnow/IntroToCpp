#ifndef CPR_H
#define CPR_H

#include <string>
using namespace std;

#pragma once

class Cpr
{
public:
    Cpr();
    Cpr(string);

    // setters 
    void setCprNr(string);
    
    
    // getters
    string getCprNr();
    int getDag();   
    int getMaaned();
    int getAar();
    int getDato();
    int getAlder();
    bool erMand();
    bool erKvinde();
    bool isValid(); 



    ~Cpr();

private:
    string nummeret;
};

#endif