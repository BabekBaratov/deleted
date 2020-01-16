#pragma once
#include"map.h"
class start : public map
{
private:
	int varMenu = 0;//Переменная для меню
public:
	void menu() override;
	void startGame();
};

