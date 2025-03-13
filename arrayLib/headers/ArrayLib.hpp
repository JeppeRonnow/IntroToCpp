#ifndef ARRAYLIB_H
#define ARRAYLIB_H

#include <cstdlib>   // For rand() og srand()
#include <ctime>    // For time()
#include <algorithm> // For std::swap


class ArrayLib {
public:
    static int findStoersteTal(int arr[], int size);

    static void vendArray(int arr[], int size);

    static int sumLigeTal(int arr[], int size);

    static int taelForekomster(int arr[], int size, int tal);

    static bool erSorteretStigende(int arr[], int size);

    static bool sumAfToTal(int arr[], int size, int x);

    static void sorterArray(int arr[], int size);

    static void bogoSort(int arr[], int size);


};

#endif // ARRAYLIB_H
