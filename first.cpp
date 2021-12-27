#include <iostream>


int main() {
    // 3-е задание    
    int arry[3][3][3], *pArry;

    // Initialisation
    pArry = & arry[0][0][0];

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
    *pArry = 111;
    pArry++;
    *pArry = 777;
    pArry++;
    *pArry = 333;
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

    std::cout << "Central field is: " << *(pArry - 14) << std::endl << "Pointer is: " << pArry << std::endl;

    return 0;
}
