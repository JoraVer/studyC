#include <iostream>

using namespace std;

int main()
{
    // 4-е задание
    extern int a, b, c, d;
    extern float e;

    // Input variables for calculations
    cout << "Input var a: " << endl;
    cin >> a;
    cout << "Input var b: " << endl;
    cin >> b;
    cout << "Input var c: " << endl;
    cin >> c;
    cout << "Input var d. It can not be zero: " << endl;
    cin >> d;

    // Zero check
    if (d == 0) {
        cout << "Input var d. It can not be zero: " << endl;
        cin >> d;
    }

    // Calculations
    e = static_cast < float > (a) * (b + c / d);
    cout << "The result of calculations is: " << e << endl;

    // 2-е задание без тернарного оператора. На целую реременную меньше
    int f;

    // Input variable for checkin
    cout << "Input var f: " << endl;
    cin >> f;

    //CheckIn
    if (f <= 21) {
        cout << "The result of checkin is: " << (f - 21) << endl;
    } else {
        cout << "The result of checkin is: " << (2 * (f - 21)) << endl;
    }

    // 2-е задание с тернарным оператором. На на 4-ре строки короче и без else
    int g, h;

    // Input variable for checkin
    cout << "Input var h: " << endl;
    cin >> h;

    //CheckIn
    g = (h <= 21) ? cout << "The result of checkin is: " << (h - 21) << endl : cout << "The result of checkin is: " << (2 * (h - 21)) << endl;

    // 3-е задание    
    int arry[3][3][3], *pArry;

    // Initialisation
    pArry = & arry;

    // First level
    *pArry = 0;
    pArry++;
    *pArry = 0;
    pArry++;
    *pArry = 0;
    pArry++;
    *pArry = 0;
    pArry++;
    *pArry = 0;
    pArry++;
    *pArry = 0;
    pArry++;
    *pArry = 0;
    pArry++;
    *pArry = 0;
    pArry++;
    *pArry = 0;

    // Second level
    pArry++;
    *pArry = 0;
    pArry++;
    *pArry = 0;
    pArry++;
    *pArry = 0;
    pArry++;
    *pArry = 0;
    pArry++;
    *pArry = 777;
    pArry++;
    *pArry = 0;
    pArry++;
    *pArry = 0;
    pArry++;
    *pArry = 0;
    pArry++;
    *pArry = 0;

    // Third level
    pArry++;
    *pArry = 0;
    pArry++;
    *pArry = 0;
    pArry++;
    *pArry = 0;
    pArry++;
    *pArry = 0;
    pArry++;
    *pArry = 0;
    pArry++;
    *pArry = 0;
    pArry++;
    *pArry = 0;
    pArry++;
    *pArry = 0;
    pArry++;
    *pArry = 0;
    pArry++;

    cout << "Central field is: " << *(pArry - 13) << endl;

    return 0;

}
