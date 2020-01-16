#pragma once
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_ENTER 13

#include<iostream>
#include<ctime>
#include<conio.h>
#include<Windows.h>
using namespace std;

enum MyControl
{
	LEFT = 1,
	RIGHT,
	UP,
	DOWN
};

class game
{
protected:
	int horizontal = 20;//Горизонталь карты 
	int vertical = 44;//Вертикаль карты
	char field[20][44];//Поле карты

	int playerX;//Координата игрока Х
	int playerY;//Координата игрока Y

	int botXone;//Координата бота X №1
	int botYone;//Координата бота Y №1

	int botXtwo;//Координата бота X №2
	int botYtwo;//Координата бота Y №2

	int botXthree;//Координата бота X №3
	int botYthree;//Координата бота Y №3

	int coinX;//Координата монетки X
	int coinY;//Координата монетки Y

	int score;//Счет игрока
	int Health;//Жизнь игрока (1)

	bool statPlayer = false;

	MyControl mControl;
	void check();//Проверки
	void control();//Управление
	void logicControl();//Логика управления

	virtual void menu();//Меню
public:
};

