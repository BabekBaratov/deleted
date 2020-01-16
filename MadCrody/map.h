#pragma once
#include "game.h"

class map : public game
{
protected:
	void mapGeneration(char empty, char wall, char player, char botOne, char botTwo, char botThree, char coins);//��������� �����
	void showMap();//��������� �����

	void spawnPlayerAnimation();//�������� ������
	void spawnPlayer();//����� ������

	void spawnBotAnimation();//�������� Bots / Coins

	void spawnBotOne();//��������� ���� ����� 1
	void spawnBotTwo();//��������� ���� ����� 2
	void spawnBotThree();//��������� ���� ����� 3

	void spawnCoin();//��������� �������
};

