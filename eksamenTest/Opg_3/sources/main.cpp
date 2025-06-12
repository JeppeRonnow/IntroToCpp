#include <iostream>
#include <string>

using namespace std;

bool ordITekst(string tekst, string ord){
    int indexAfOrd = tekst.find(ord);

    if (indexAfOrd == string::npos) {
        return false;
    }
    return true;
}

int main() {

    cout << ordITekst("TestAfFunktion", "Af") << endl;

    cout << ordITekst("TestAfFunktion", "af") << endl;

    return 0;
}