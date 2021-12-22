#include <iostream>

using namespace std;

int main()
{
    // 1-е задание
    int a, b;
    cout << "Input a: ";
    cin a;
    cout << endl << "Input b:";
    cin b;
    int c = (((a + b) >= 10) && ((a + b) <= 20)) ? cout << "True" << endl : cout << "False" << endl;

    // 2-е задание
    c = (((a == 10) || (b == 10)) || ((a + b) == 10)) ? cout << "True" << endl : cout << "False" << endl;

    // 3-е задание
     cout << "Odd numbers are: ";
     for (size_t i = 1; i < 50; i++) {
         if (((i % 2) != 0)) {
             cout << i << " ";
         }
     }

     // 4-е задание
     int d, divider[4] = {2, 3, 5, 7};
     cout << "Input d: ";
     cin d;
     if (((d % divider[0]) == 0) || ((d % divider[1]) == 0) || ((d % divider[2]) == 0) || ((d % divider[3]) == 0) ) {
         cout << d << " is tricky number.";
     } else {
         cout << d << " is Prime Number.";
     }

     // 5-е задание
     int year;
     cout << "Input year: ";
     cin year;

     if (((year % 400) == 0) || ((year % 4) == 0) || ((year % 100) != 0)){
         cout << "This year is leap.";
     } else {
         cout << "This year is not leap.";
     }

}
