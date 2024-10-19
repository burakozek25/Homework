#include "Homework.h"
#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> arr; 
    const int size = 4; 

    fillArraySWHOR(arr, size); 
    printArray(arr, size);

    return 0; 
}