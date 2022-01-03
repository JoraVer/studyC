#include <iostream>
#include <math.h>
#include <cstdlib>
#include <fstream>

using namespace std;

void createMass(int size) {
    int* ptrArr;
    if (size > 0) {
        ptrArr = new (nothrow) int[size];
        if (ptrArr != nullptr) {
            int exponent = 2;
            for (int i = 0; i < size; i++) {
                ptrArr[i] = pow(exponent, i);
                cout << "Arr[" << i <<"] = " << ptrArr[i] << endl;
            }
            delete[] ptrArr;
            ptrArr = nullptr;
        }
    }
}

void createMatrix(sixe_t m, size_t n) {
    int** ptrArr;
    ptrArr = new int * [m];

    for (size_t i = 0; i < m; i++) {
        ptrArr[i] = new int[n];
    }

    for(int j = 0; j < m; j++) {
        for(int k = 0; k < n; k++) {
            ptrArr[j][k] = rand() % 100;
            cout << "Arr[" << j <<"][" << k <<"] = " << ptrArr[j][k] << " ";
        }
        cout << endl;
    }

    for (size_t i = 0; i < m; i++) {
        delete [] ptrArr[i];
    }
    delete[] ptrArr;
    ptrArr = nullptr;
}

int main()
{
    int n;
    cout << "Enter size of your array: ";
    cin >> n;

    createMass(n);

    cout << endl << endl;
    const size_t row = 4;
    const size_t tab = 4;
    createMatrix(row, tab);

    string name1, name2;
    const size_t size = 5;
    int array[size] = { 1, 11, 111, 11, 1 }, array1[size] = { 7, 77, 777, 77, 7 };
    cout << "Input first file name: ";
    cin >> name1;
    cout << endl << "Input second file name: ";
    cin >> name2;
    ofstream fout(name1);
    int i = 0;
    for (int element : array) {
        fout << "elem[" << i++ << "]=" << element << endl;
    }
    fout.close();
    ofstream fout(name2);
    int i = 0;
    for (int element : array1) {
        fout << "elem[" << i++ << "]=" << element << endl;
    }
    fout.close();


    return 0;
}
