#include <iostream>

using namespace std;

bool firstTask(int arr[], int size) {
    for (size_t i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return true;
}

bool secondTask (int arr[], int size) {
    cout << "Before changes: ";
    for (size_t i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << "After changes: ";
    for (size_t i = 0; i < size; i++) {
        if (arr[i] == 0) {
            arr[i] = 1;
        } else {
            arr[i] = 0;
        }
        cout << arr[i] << " ";
    }
    cout << endl;
    return true;
}

bool thirdTask(int arr[], int size) {
    arr[0] = 1;
    cout << arr[0] << " ";
    for (size_t i = 1; i < size; i++) {
        arr[i] = arr[i - 1] + 3;
        cout << arr[i] << " ";
    }
    cout << endl;
    return true;
}

void forthTask (int arr[], int size, int step) {
    int tmp = 0;

    cout << "Before steps:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    if (step < 0) {
        step = - step;
        while (step != 0) {
            tmp = arr[0];
            for (int i = 0; i < size; i++) {
                arr[i] = arr[i+1];
            }
            arr[5] = tmp;
            step--;
       }
    } else {
        while (step != 0) {
            tmp = arr[5];
            for (int i = (size - 1); i > 0; i--) {
                arr[i] = arr[i-1];
            }
            arr[0] = tmp;
            step--;
        }
    }
    cout << endl << "After steps:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

void fifthTask (int arr[], int size) {
    int sumLeft = 0, sumRight = 0, sumL[size - 1] = { 0 }, sumR[size - 1] = { 0 };
    bool result = false;

    for (int j = 0; j < size - 1; j++) {
        sumLeft = sumLeft + arr[j];
        sumL[j] = sumLeft;
    }

    for (int n = size - 1; n > 0; n--) {
        sumRight = sumRight + arr[n];
        sumR[n - 1] = sumRight;
    }

    for (int k = 0; k <= size - 1; k++) {
        if (sumL[k] == sumR[k]) {
            result = true;
            break;
        }
    }

    if (result) {
        cout << "TRUE!!!" << endl;
    } else {
        cout << "False :(((" << endl;
    }
}

int main()
{
    const int mySize = 5;
    int myArr[] = { 10, 20, 30, 40, 50 };

    if (firstTask(myArr, mySize)) {
        cout << "First task was successfuly printed" << endl;
    }

    const int mySize1 = 10;
    int myArr1[] = { 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 };

    if (secondTask(myArr1, mySize1)) {
        cout << "Second task was successfuly printed" << endl;
    }

    const int mySize2 = 8;
    int myArr2[] = { 0 };

    if (thirdTask(myArr2, mySize2)) {
        cout << "Third task was successfuly printed" << endl;
    }

    int revolv[6] = {1, 2, 3, 4, 5, 6}, size = 6, step;
    cout << "Input step: ";
    cin >> step;

    forthTask(revolv, size, step);

    int key;
    cout << "Input size of array: ";
    cin >> key;

    int arr[key];
    for (int i = 0; i < key; i++) {
        cout << endl << "Input " << i << " element of array: ";
        cin >> arr[i];
    }

    fifthTask(arr[key], key);

    return 0;
}
