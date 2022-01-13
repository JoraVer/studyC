#include <iostream>

using namespace std;

namespace myOwn {
    void printArray(const int array[], int size) {
        for (int i = 0; i < size; i++) {
            cout << array[i] << " ";
        }
        cout << endl;
    }

    float initArr(const size_t n) {
        float iArr[n] = {0};
        return iArr[n];
    }

    void plusMinus(const int array[], int size) {
        int plus = 0, minus = 0;
        for (int i = 0; i < size; i++) {
            if (array[i] < 0) {
                minus++;
            } else if (array[i] > 0) {
                plus++;
            }
        }
        cout << "Minus: " << minus << " Plus: " << plus << endl;
    }
};


