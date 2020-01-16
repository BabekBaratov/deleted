#include "start.h"

void start::menu()
{
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "\t\t\t\t\tНачать игру" << endl;
	cout << "\t\t\t\t\t   Выйти" << endl;
	cin >> varMenu;

	switch (varMenu)
	{
	case 1:
	{
		system("cls");
		startGame();
		break;
	}
	case 2:
	{
		system("cls");
		exit(0);
		break;
	}
	}
}

void start::startGame()
{
	spawnPlayerAnimation();


	score = 0;
	spawnPlayer();
	spawnBotOne();
	spawnBotTwo();
	spawnBotThree();
	spawnCoin();

	do
	{
		mapGeneration(' ', '0', 'P', 'V', 'V', 'V', 'C');
		control();
		logicControl();
		showMap();
		spawnBotAnimation();
	} while (true);
}
