#include <iostream>
#include <array>       

using namespace std;


// finder max val i c style array
template <typename T>
T finMax(const T arr[], int size) {

    T max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Template Class for a Simple Pair
template <typename T1, typename T2>
class Pair {
public:
    Pair(T1 first, T2 second) : first(first), second(second) {}

    void display() {
        cout << "First: " << first << ", Second: " << second << endl;
    }
private:
    T1 first;
    T2 second;
};

// Template Function to Reverse an Array
template <typename A>
void reverseArray(A arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        A temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main() {

    // test finMax
    int arr[] = {1, 2, 3, 4, 5};
    auto m = finMax(arr, size(arr));

    cout << "Max value: " << m << endl;

    float arr2[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    auto m2 = finMax(arr2, size(arr2));
    cout << "Max value: " << m2 << endl;

    // test Pair class
    Pair<int, float> p1(1, 2.5);
    p1.display();
    Pair<string, string> p2("Hello", "World");
    p2.display();

    // test reverseArray
    int arr3[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr3) / sizeof(arr3[0]);
    reverseArray(arr3, size);
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;
    // test reverseArray with float
    float arr4[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int size2 = sizeof(arr4) / sizeof(arr4[0]);
    reverseArray(arr4, size2);
    cout << "Reversed array: ";
    for (int i = 0; i < size2; i++) {
        cout << arr4[i] << " ";
    }
    cout << endl;

    return 0;
}
