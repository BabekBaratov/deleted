#pragma once
#include "game.h"

class map : public game
{
protected:
	void mapGeneration(char empty, char wall, char player, char botOne, char botTwo, char botThree, char coins);//Генерация карты
	void showMap();//Отрисовка карты

	void spawnPlayerAnimation();//Анимация игрока
	void spawnPlayer();//Спавн игрока

	void spawnBotAnimation();//Анимация Bots / Coins

	void spawnBotOne();//Появление Бота номер 1
	void spawnBotTwo();//Появление Бота номер 2
	void spawnBotThree();//Появление Бота номер 3

	void spawnCoin();//Появление Монетки
};

