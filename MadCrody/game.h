#pragma once
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
	int horizontal = 20;//����������� ����� 
	int vertical = 44;//��������� �����
	char field[20][44];//���� �����

	int playerX;//���������� ������ �
	int playerY;//���������� ������ Y

	int botXone;//���������� ���� X �1
	int botYone;//���������� ���� Y �1

	int botXtwo;//���������� ���� X �2
	int botYtwo;//���������� ���� Y �2

	int botXthree;//���������� ���� X �3
	int botYthree;//���������� ���� Y �3

	int coinX;//���������� ������� X
	int coinY;//���������� ������� Y

	int score;//���� ������
	int Health;//����� ������ (1)

	MyControl mControl;
	void check();//��������
	void control();//����������
	void logicControl();//������ ����������

	virtual void menu();//����
public:
};

