#ifndef BROEK_HPP
#define BROEK_HPP

#pragma once

#include <numeric>
#include <cstdlib>

class Broek {
    public:
        Broek(void);
        Broek(int aN, int aD);
        int getTaeller();
        int getNaevner();

        void forkort();
        
        Broek adder(Broek aF);
        Broek subtraher(Broek aF);
        Broek multiplicer(Broek aF);
        Broek divider(Broek aF);
        
        Broek operator+(Broek b);
        Broek operator-(Broek b);
        Broek operator*(Broek b);
        Broek operator/(Broek b);
        
        ~Broek(void);
    
    private:
        int taeller;
        int naevner;
    };
    
#endif
