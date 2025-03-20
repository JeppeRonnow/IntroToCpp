#ifndef EAN_H
#define EAN_H

#pragma once

#include <string>

using namespace std;


class EAN {    
    public:
        EAN(string);

        bool isValid();

        string ISBNtoEAN(string ISBN);

        ~EAN();

    private:
        string EANnr;
        int lastDigit(string ISBN);
};

#endif
