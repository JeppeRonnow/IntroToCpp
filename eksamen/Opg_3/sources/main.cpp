#include <iostream>
#include <vector>


using namespace std;

// list of prime numbers
vector<int> getPrimes(int iterations) {
    vector<int> primes;
    primes.push_back(2);
    for (int i = 3; i < iterations; i += 2) {
        bool isPrime = true;
        for (int j = 3; j * j <= i; j += 2) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            primes.push_back(i);
        }
    }
    return primes;
}

int main() {
    vector<int> primes = getPrimes(200);

    int digit1 = 0;
    int digit2 = 0;

    for (int i = 0; i< primes.size()-1; ++i){
        if ((primes[i+1] - primes[i]) == 2){
            digit1 = primes[i];
            digit2 = primes[i+1];
        }
    };

    cout << digit1 << endl;
    cout << digit2 << endl;

    return 0;
}