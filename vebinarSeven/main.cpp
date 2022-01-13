#include <iostream>
#include "milib.h"

using namespace std;

#define aB(a, b) (((a >= 0) && (a < b)) ? cout << "True" << endl : cout << "False" << endl)

#define arrSize 5

#define SwapINT(a, b) ((a > b) ? swap(a, b))

int main()
{
    // 1 fnd 5
    int size;
    cout << "Please enter the size of array: ";
    cin >> size;

    float arr = myOwn::initArr(size);

    myOwn::printArray(arr, size);

    myOwn::plusMinus(arr, size);

    // 2
    int a, b;
    cout << "Please enter a: ";
    cin << a;
    cout << endl << "Please enter b: ";
    cin >> b;
    cout << endl;

    aB(a, b);

    // 3
    int myArr[arrSize];
    cout << "Please init array" << endl;
    for (int j = 0; j < arrSize; j++) {
        cout << "Enter element myArr[" << j << "]: ";
        cin >> myArr[j];
        cout << endl;
    }

    for (int k = 0; k < arrSize; k++) {
        bool flag = true;
        for (int m = 0; m < (arrSize - 1); m++) {
            if (digitals[m] > digitals[m + 1]) {
                flag = false;
                SwapINT(digitals[m], digitals[m +1]);
            }
        }
        if (flag)
            break;
    }
}
