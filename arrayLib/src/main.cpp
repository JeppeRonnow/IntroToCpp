#include <iostream>
#include "../headers/ArrayLib.hpp"

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int numbers[] = {3, 7, 2, 9, 4, 6};
    int size = sizeof(numbers) / sizeof(numbers[0]);


    int maxValue = ArrayLib::findStoersteTal(numbers, size);
    
    std::cout << "Det største tal i arrayet er: " << maxValue << std::endl;


    std::cout << "Før vending: ";
    printArray(numbers, size);

    ArrayLib::vendArray(numbers, size);

    std::cout << "Efter vending: ";
    printArray(numbers, size);


    ArrayLib::vendArray(numbers, size);
    int ligeSum = ArrayLib::sumLigeTal(numbers, size);
    std::cout << "Summen af lige tal er: " << ligeSum << std::endl;


    int forekomster = ArrayLib::taelForekomster(numbers, size, 4);
    std::cout << "Antallet af forekomster af tal 4 er: " << forekomster << std::endl;

    bool sorteret = ArrayLib::erSorteretStigende(numbers, size);
    if (sorteret) {
        std::cout << "Arrayet er sorteret stigende." << std::endl;
    } else {
        std::cout << "Arrayet er ikke sorteret stigende." << std::endl;
    }


    int x = 11;
    ArrayLib::sorterArray(numbers, size);

    std::cout << "Findes der to tal, hvis sum er " << x << "? "
              << (ArrayLib::sumAfToTal(numbers, size, x) ? "Ja" : "Nej")
              << std::endl;

    int numbers2[] = {3, 7, 2, 9, 4, 6 , 2,  5, 7, 8, 8, 2};
    int size2 = sizeof(numbers2) / sizeof(numbers2[0]);

    printArray(numbers2, size2);
    ArrayLib::bogoSort(numbers2, size2);
    std::cout << "Bogosorterede array: ";
    printArray(numbers2, size2);
    

    return 0;
}
