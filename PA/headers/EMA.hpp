#include <string>
#include <iostream>

using namespace std;

#pragma once

class EMA {
   public:
    EMA();
    EMA(string);
    ~EMA();
    string getEMA();  //   til test 
    void setEMA(string); //   til   test 
    bool isValid() const;    //   central metode 
private: 
    // hjælpemetoder
    int  snabelA() const;       
    bool dot() const; 
    bool checkLengths() const;  
    bool checkChars() const;   

    string emailAddress; 
};