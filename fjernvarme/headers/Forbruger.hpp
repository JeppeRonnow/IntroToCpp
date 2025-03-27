#ifndef FORBRUGER_H
#define FORBRUGER_H

#pragma once

#include <string>

using namespace std;


class Forbruger {    
    public:
        Forbruger(string navn, int maalerNr, int maalerMax);

        // getters
        int getMaalerNr();
        string getNavn();
        int beregnForbrug();

        // setters
        string setNavn(string navn);
        void aflaesMaeler(int aflaesning);

        ~Forbruger();
        

    private:
        string navn;
        int maalerNr;
        int nyAflaesning;
        int glAflaesning;
        int maalerMax;
};

#endif
