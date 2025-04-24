#include "../headers/EMA.hpp"
#include <iostream>

using namespace std;

int main() {
    EMA mail("Jeppe@Rønnow.dk");
    cout << mail.getEMA() << ": " << mail.isValid() << endl;

    mail.setEMA("Jeppe@Ronnow.dk");
    cout << mail.getEMA() << ": " << mail.isValid() << endl;

    mail.setEMA("andh17@student.sdu.dk");
    cout << mail.getEMA() << ": " << mail.isValid() << endl;

    mail.setEMA("Jens@Hansen.dk");
    cout << mail.getEMA() << ": " << mail.isValid() << endl;

    mail.setEMA("Hansen@J.dk");
    cout << mail.getEMA() << ": " << mail.isValid() << endl;

    mail.setEMA("Peter@Hej.dk");
    cout << mail.getEMA() << ": " << mail.isValid() << endl;

    mail.setEMA("MegetLangtMegetLangtMegetLangtMegetLangtMegetLangtMegetLangtMegetLangt@tester.dk");
    cout << mail.getEMA() << ": " << mail.isValid() << endl;

    mail.setEMA("2+2@matematik.dk");
    cout << mail.getEMA() << ": " << mail.isValid() << endl;

    mail.setEMA("tal22@matematik.com");
    cout << mail.getEMA() << ": " << mail.isValid() << endl;

    mail.setEMA("virker@perfekt.com");
    cout << mail.getEMA() << ": " << mail.isValid() << endl;

    return 0;
}