#include "map.h"
//Пустота   Стена   Игрок   Бот   Бонус  
void map::mapGeneration(char empty, char wall, char player, char botOne, char botTwo,char botThree, char coins)
{
	system("cls");

	for (int i = 0; i < horizontal; i++)
	{
		for (int j = 0; j < vertical; j++)
		{
			if (i == 0 || j == 0 || i == horizontal - 1 || j == vertical - 1)
			{
				field[i][j] = wall;
			}
			else
			{
				field[i][j] = empty;
			}

			if (i == playerX - 1 && j == playerY - 1)
			{
				field[i][j] = player;
			}

			if (i == botXone - 1 && j == botYone - 1)
			{
				field[i][j] = botOne;
			}

			if (i == botXtwo - 1 && j == botYtwo - 1)
			{
				field[i][j] = botTwo;
			}

			if (i == botXthree - 1 && j == botYthree - 1)
			{
				field[i][j] = botThree;
			}

			if (i == coinX - 1 && j == coinY - 1)
			{
				field[i][j] = coins;
			}
		}
	}
}

void map::showMap()
{
	cout << "Score: " << score << endl;
	cout << endl;
	for (int i = 0; i < horizontal; i++)
	{
		for (int j = 0; j < vertical; j++)
		{
			cout << field[i][j];
		}
		cout << endl;
	}
}

void map::spawnPlayerAnimation()
{
	score = 0;
	playerX = 17;
	playerY = vertical / 2;
	int count = 0;
	do
	{
		count++;
		if (count == 3)
		{
			break;
		}

		mapGeneration(' ', '0', 'P', 'V', 'V', 'V', 'C');
		showMap();

		Sleep(100);
		playerX++;

	} while (true);
}

void map::spawnPlayer()
{
	playerX = 19;
	playerY = vertical / 2;
}

void map::spawnBotAnimation()
{
	if (botXone == 19)
	{
		botXone = 1;
		botYone = rand() % (vertical - 2) + 2;
	}
	if (botXtwo == 19)
	{
		botXtwo = 1;
		botYtwo = rand() % (vertical - 2) + 2;
	}
	if (botXthree == 19)
	{
		botXthree = 1;
		botYthree = rand() % (vertical - 2) + 2;
	}
	if (coinX == 19)
	{
		coinX = 18;
	}
	
	if (botXone == botXtwo || botXone == botXthree)
	{
		botXone = 1;
		botYone = rand() % (vertical - 2) + 2;
	}
	if (botXtwo == botXone || botXtwo == botXthree)
	{
		botXtwo = 1;
		botYtwo = rand() % (vertical - 2) + 2;
	}
	if (botXthree == botXone || botXthree == botXtwo)
	{
		botXthree = 1;
		botYthree = rand() % (vertical - 2) + 2;
	}
	

	botXone++;
	botXtwo++;
	botXthree++;
	coinX++;
}

void map::spawnBotOne()
{
	botXone = 1;
	botYone = rand() % (vertical - 2) + 2;

	if (botXone == botXtwo || botXone == botXthree)
	{
		botXone = 1;
		botYone = rand() % (vertical - 2) + 2;
	}
}

void map::spawnBotTwo()
{
	botXtwo = 1;
	botYtwo = rand() % (vertical - 2) + 2;

	if (botXtwo == botXone || botXtwo == botXthree)
	{
		botXtwo = 1;
		botYtwo = rand() % (vertical - 2) + 2;
	}
}

void map::spawnBotThree()
{
	botXthree = 1;
	botYthree = rand() % (vertical - 2) + 2;

	if (botXthree == botXone || botXthree == botXtwo)
	{
		botXthree = 1;
		botYthree = rand() % (vertical - 2) + 2;
	}
}

void map::spawnCoin()
{
	coinX = 1;
	coinY = rand() % (vertical - 2) + 2;
}
