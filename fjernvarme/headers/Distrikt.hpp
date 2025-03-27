#ifndef DISTRIKT_H
#define DISTRIKT_H

#pragma once

#include <string>
#include <vector>
#include "../headers/Forbruger.hpp"

using namespace std;


class Distrikt {
    
    public:
        Distrikt(int prisM3);
        void addForbruger(Forbruger& forbruger);
        int afregnForbruger(int maalerNr);
        

    private:
        vector<Forbruger*> forbrugere;
        int antalForbrugere;
        int prisM3;
};

#endif
