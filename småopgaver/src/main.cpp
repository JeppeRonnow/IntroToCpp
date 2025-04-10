#include <iostream>
#include <string>     

using namespace std;

// er string ens
bool erEns(string s1, string s2) {
    if (s1 == s2) {
        return true;
    } else {
        return false;
    }
}

string reverse(string s) {
    string reversed = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        reversed += s[i];
    }
    return reversed;
}

bool erPalidrom(string s) {
    return erEns(s, reverse(s));
}

bool parenteser(string s) {
    int balance = 0;

    for (char c : s) {
        if (c == '(') {
            balance++;
        } else if (c == ')') {
            balance--;
        }

        // hvis balance bliver negativ er der flere slutparenteser end startparenteser
        if (balance < 0) {
            return false;
        }
    }

    return balance == 0;
}

bool containUnsorted(const int arr[], int size, int target){
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return true;
        }
    }

    return false;
}

bool containSorted(int arr[], int size, int target) {
    // til dette bruger vi binary search

    int v = 0;
    int h = size - 1;

    while (v <= h) {
        int midt = v + (h - v) / 2;

        if (arr[midt] == target) {
            return true; // hvis fundet
        } else if (arr[midt] < target) {
            v = midt + 1;  // Kig i højre halvdel
        } else {
            v = midt - 1;  // Kig i venstre halvdel
        }
    }
    return false;
    
}

int main() {
    // Test erEns
    erPalidrom("madam") ? cout << "madam er palindrom" << endl : cout << "madam er ikke palindrom" << endl;

    erPalidrom("hello") ? cout << "hello er palindrom" << endl : cout << "hello er ikke palindrom" << endl;

    erPalidrom("racecar") ? cout << "racecar er palindrom" << endl : cout << "racecar er ikke palindrom" << endl;

    // balanceret
    cout << (parenteser("(a + b) * (c - d)") ? "Balanceret" : "Ikke balanceret") << endl;
    cout << (parenteser("())(") ? "Balanceret" : "Ikke balanceret") << endl;
    cout << (parenteser("((a + b) * c)") ? "Balanceret" : "Ikke balanceret") << endl;

    // contain
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 3;

    if (containUnsorted(arr, size, target)) {
        cout << "Arrayet indeholder " << target << endl;
    } else {
        cout << "Arrayet indeholder ikke " << target << endl;
    }

    // sorteret
    int sortedArr[] = {1, 2, 3, 4, 5};
    int sortedSize = sizeof(sortedArr) / sizeof(sortedArr[0]);
    int sortedTarget = 6;

    if (containSorted(sortedArr, sortedSize, sortedTarget)) {
        cout << "Arrayet indeholder " << sortedTarget << endl;
    } else {
        cout << "Arrayet indeholder ikke " << sortedTarget << endl;
    }

    return 0;
}
