#pragma once
#include"map.h"
class start : public map
{
private:
	int varMenu = 0;//���������� ��� ����
public:
	void menu() override;
	void startGame();
};

