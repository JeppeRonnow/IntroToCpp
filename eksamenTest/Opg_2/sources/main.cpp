#include <iostream>

using namespace std;

int largestSumOfTwo(int ar1[], int ar2[], int size) {
    int max1 = ar1[0], max2 = ar2[0];
    for (int i = 1; i < size; ++i) {
        if (ar1[i] > max1) {
            max1 = ar1[i];
        }
        if (ar2[i] > max2) {
            max2 = ar2[i];
        }
    }
    return max1 + max2;
}

int main() {
    int ar1[] = {17, 33, 44, 11, 9};
    int ar2[] = {22, 66, 1, 35, 22};

    cout << "Largest sum of two elements from different arrays: " 
         << largestSumOfTwo(ar1, ar2, 5) << endl;

    return 0;
}