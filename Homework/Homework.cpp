#include "Homework.h"
#include <iostream>
#include <vector>

void fillArraySWHOR(std::vector<std::vector<int>>& arr, int size) {
    arr.resize(size, std::vector<int>(size)); 
    int value = 1; 

    
    for (int col = 0; col < size; col++) {
        for (int row = 0; row <= col; row++) {
            arr[col - row][row] = value++;
        }
    }

    
    for (int row = 1; row < size; row++) {
        for (int col = row; col < size; col++) {
            arr[col][size - 1 - (col - row)] = value++;
        }
    }

    
    for (int row = size - 1; row >= 1; row--) {
        for (int col = row; col < size; col++) {
            arr[size - 1 - (col - row)][col] = value++;
        }
    }
}

void printArray(const std::vector<std::vector<int>>& arr, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << arr[i][j] << " "; 
        }
        std::cout << std::endl; 
    }
}