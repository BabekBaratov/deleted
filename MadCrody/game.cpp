#include "game.h"

void game::check()
{
	//ѕроверка: что бы собирать Coins
	if (playerY == coinY)
	{
		if (playerX == coinX)
		{
			score++;
			coinX = 1;
			coinY = rand() % (vertical - 2) + 2;
		}
	}

	//ѕроверка: убийсто игрока
	if (playerX == botXone || playerX == botXtwo || playerX == botXthree)
	{
		if (playerY == botYone || playerY == botYtwo || playerY == botYthree)
		{
			system("cls");
			cout << "\t\t\t\t\t Game Over" << endl;
			menu();
		}
	}

	//ѕроверка: что бы нельз€ было проходить через стены (права€)
	if (playerY == vertical)
	{
		playerY--;
	}
	//ѕроверка: что бы нельз€ было проходить через стены (лева€)
	if (playerY == 1)
	{
		playerY++;
	}
}

void game::control()
{
	if (_kbhit())
	{
		switch (_getch())
		{
		case 'A':
		{
			mControl = LEFT;
			break;
		}
		case 'a':
		{
			mControl = LEFT;
			break;
		}
		case 'D':
		{
			mControl = RIGHT;
			break;
		}
		case 'd':
		{
			mControl = RIGHT;
			break;
		}
		case 'S':
		{
			mControl = DOWN;
			break;
		}
		case 's':
		{
			mControl = DOWN;
			break;
		}
		case 'M':
		{
			menu();
			break;
		}
		case 'm':
		{
			menu();
			break;
		}
		}
	}
}

void game::logicControl()
{
	switch (mControl)
	{
	case LEFT:
	{
		playerY--;
		check();
		break;
	}
	case RIGHT:
	{
		playerY++;
		check();
		break;
	}
	case DOWN:
	{
		playerX + 1;
		check();
		break;
	}
	}
}

void game::menu()
{
}
