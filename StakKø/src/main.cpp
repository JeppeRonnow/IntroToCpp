#include <iostream>
#include <string>
#include <stack> // Til stakken
using namespace std;

// Metode til at tjekke for matchende parenteser
bool hasMatchingParentheses(const string& text) {
    stack<char> parenthesesStack;

    for (char ch : text) {
        if (ch == '(') {
            // Push venstreparentes på stakken
            parenthesesStack.push(ch);
        } else if (ch == ')') {
            // Hvis højreparentes, tjek om stakken er tom
            if (parenthesesStack.empty()) {
                return false; // Ubalanceret parentes
            }
            // Pop fra stakken
            parenthesesStack.pop();
        }
    }

    // Hvis stakken er tom, er alle parenteser balancerede
    return parenthesesStack.empty();
}

int main() {
    string input;
    cout << "Indtast en tekst: ";
    getline(cin, input);

    if (hasMatchingParentheses(input)) {
        cout << "Teksten har matchende parenteser." << endl;
    } else {
        cout << "Teksten har IKKE matchende parenteser." << endl;
    }

    return 0;
}
