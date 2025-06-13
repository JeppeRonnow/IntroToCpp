#include <iostream>
#include <string>

using namespace std;

#pragma once

class Bog {
public:
    Bog(int id, string titel, string forfatter, int pris);

    int getPris() const;
    string getTitel() const;
private:
    int id;
    string titel;
    string forfatter;
    int pris;
    
};