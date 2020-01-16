//Game - Mad Crody
#include "start.h"
int main()
{
    srand(time(0));
    setlocale(LC_ALL, "ru");


    start start;
    start.menu();


    system("pause");
    return 0;
}