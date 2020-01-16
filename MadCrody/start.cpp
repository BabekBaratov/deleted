#include "start.h"

void start::menu()
{
	cout << "\t\t\t\t\tНачать игру" << endl;
	cout << "\t\t\t\t\t   Выйти" << endl;
	int selectedIndex = 0;//Возвращает выбраный элемент

	while (true)
	{
		switch (_getch())
		{
			case KEY_UP:
			{
				if (selectedIndex > 0)
					selectedIndex--;
				break;
			}
			case KEY_DOWN:
			{
				if (selectedIndex < 1)
					selectedIndex++;
				break;
			}
			case KEY_ENTER:
			{
				switch (selectedIndex)
				{
				case 0:
				{
					startGame();
					break;
				}
				case 1:
				{
					exit(0);
					break;
				}
				default:
					break;
				}
				break;
			}
		}

		switch (selectedIndex)
		{
		case 0:
			system("cls");
			cout << "\t\t\t\t       >Начать игру<" << endl;
			cout << "\t\t\t\t\t   Выйти" << endl;
			break;
		case 1:
			system("cls");
			cout << "\t\t\t\t\tНачать игру" << endl;
			cout << "\t\t\t\t\t  >Выйти<" << endl;
			break;
		default:
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
		Sleep(20);
		mapGeneration(' ', '0', 'P', 'V', 'V', 'V', 'C');
		control();
		logicControl();
		showMap();
		spawnBotAnimation();
	} while (true);
}
