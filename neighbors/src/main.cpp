#include <iostream>
#include <string>
using namespace std;

bool neighbors(string s) {
    // Iterer gennem strengen
    // da vi sammenligner s[i] med s[i + 1]
    for (size_t i = 0; i < s.length() - 1; ++i) {
        // Tjek om det næste tegn (s[i + 1]) er det alfabetiske efterfølger af det nuværende tegn (s[i])
        if (s[i + 1] == s[i] + 1) {
            return true; // Returner true hvis det er tilfældet
        }
    }
    return false;
}

int main() {
    cout << boolalpha; // For at vise "true"/"false" i stedet for 1/0
    cout << neighbors("hsgafkroduitjsla") << endl; // false
    cout << neighbors("krstuoinnaqwlp") << endl;   // true (s og t)
    cout << neighbors("abcxyz") << endl;           // true (a og b)
    cout << neighbors("zxy") << endl;              // false
    return 0;
}
