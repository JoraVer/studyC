#include <iostream>

int main()
{
    // Задание 1
    short int   firstVar    = 7;
    int         secondVar   = 64000;
    long long   thisrdVar   = 123456789;
    char        forthVar    = 'F';
    bool        fivesVar    = true;
    float       sixVar      = 3.14f;
    double      sevenVar    = 2.7182818284;

    // Задание 2
    enum ticTacToe {cross, zero, emptySpace };

    // Задание 3
    ticTacToe field[3][3] = {   {emptySpace, emptySpace,emptySpace},
                                {emptySpace, emptySpace,emptySpace},
                                {emptySpace, emptySpace,emptySpace}
                            };

    // Задание 4
    struct playField {
        int gameId;             // Id игры
        ticTacToe field[3][3];  // Поле для игры
        int playrOneId;         // Первый игрок. По этому полю из базы можно достать все.
        int playerTwoId;        // Второй игрок. По этому полю из базы можно достать все.
        int gameDate;           // Дата игры.
        int gameStartTime;      // Время начала игры.
        int gameEndTime;        // Время окончания игры.
        int winner;             // Id победителя.
    };

    // Задание 5
    union myData {
        int     first;
        float   second;
        char    third;
    };

    struct whatIs {
        unsigned int isInt    : 1;
        unsigned int isFloat  : 1;
        unsigned int isChar   : 1;
    };

    struct myVariant {
        myData someThing;
        whatIs isThisSomeThing;
    };

    std::cout << "Что будем хранить?" << std::endl << "Если int - вводим 1." << std::endl << " Если float - вводим 2." << std::endl << " Если char - вводим 3. " << std::endl;

    std::cin >> someThing.first;

    if (someThing.first == 1) {
        isThisSomeThing.isInt = 1;
        isThisSomeThing.isFloat = 0;
        isThisSomeThing.isChar = 0;
    } else if (someThing.first == 2) {
        someThing.second = 3.1415;
        isThisSomeThing.isInt = 0;
        isThisSomeThing.isFloat = 1;
        isThisSomeThing.isChar = 0;
    } else {
        someThing.third = 'q';
        isThisSomeThing.isInt = 0;
        isThisSomeThing.isFloat = 0;
        isThisSomeThing.isChar = 1;
    }

    return 0;
}
