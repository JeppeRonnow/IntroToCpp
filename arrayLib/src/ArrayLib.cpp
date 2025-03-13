#include "../headers/ArrayLib.hpp"

int ArrayLib::findStoersteTal(int arr[], int size) {
    if (size <= 0) return -1;

    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void ArrayLib::vendArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int ArrayLib::sumLigeTal(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int ArrayLib::taelForekomster(int arr[], int size, int tal) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == tal) {
            count++;
        }
    }
    return count;
}

bool ArrayLib::erSorteretStigende(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

bool ArrayLib::sumAfToTal(int arr[], int size, int x) {
    int left = 0;         
    int right = size - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == x) {
            return true;
        } else if (sum < x) {
            left++;
        } else {
            right--;
        }
    }

    return false;
}


// chat gpt bubblesort
void ArrayLib::sorterArray(int arr[], int size) {
    bool swapped;
    for (int i = 0; i < size - 1; i++) {
        swapped = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Byt elementer, hvis de er i forkert rækkefølge
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        // Hvis ingen bytter blev lavet, er arrayet allerede sorteret
        if (!swapped) break;
    }
}

//fuck it bogo sort
void ArrayLib::bogoSort(int arr[], int size) {
    srand(time(0)); // Seed for rand() for tilfældige værdier

    while (!erSorteretStigende(arr, size)) {
        // Shuffle arrayet direkte inde i while-løkken
        for (int i = 0; i < size; i++) {
            int randIndex = rand() % size;
            std::swap(arr[i], arr[randIndex]);
        }
    }
}