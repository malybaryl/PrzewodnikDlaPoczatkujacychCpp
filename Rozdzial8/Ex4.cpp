#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void checkIfWin(int& money, int firstSlot, int secondSlot, int thirdSlot)
{
	if (firstSlot == 1 && secondSlot == 1 && thirdSlot == 1)
	{
		cout << "You Won 1.5x MONEY" << endl;
		money = 1.5 * money;
	}
	else if (firstSlot == 2 && secondSlot == 2 && thirdSlot == 2)
	{
		cout << "You Won 200 MONEY" << endl;
		money = money + 200;
			;
	}
	else if (firstSlot == 3 && secondSlot == 3 && thirdSlot == 3)
	{
		cout << "You Won 3x MONEY" << endl;
		money = 3* money;
	}
	else if (firstSlot == 4 && secondSlot == 4 && thirdSlot == 4)
	{
		cout << "GRAND WIN 4x MONEY" << endl;
		money = 4* money;
	}
	else if (firstSlot == 5 && secondSlot == 5 && thirdSlot == 5)
	{
		cout << "You WON 500 gold" << endl;
		money = money + 500;
	}
	else if (firstSlot == 6 && secondSlot == 6 && thirdSlot == 6)
	{
		cout << "YOU ARE DEVIL 666 GOLD" << endl;
		money = money + 666;
	}
	else if (firstSlot == 7 && secondSlot == 7 && thirdSlot == 7)
	{
		cout << "7 7 7 <3 YOU ARE THE LUCKIEST PRICE 100x GOLD" << endl;
		money = 100 * money;
	}
	else if (firstSlot == 8 && secondSlot == 8 && thirdSlot == 8)
	{
		cout << "EPIC WIN 8x GOLD" << endl;
		money = 8 * money;
	}
	else if (firstSlot == 9 && secondSlot == 9 && thirdSlot == 9)
	{
		cout << "LEGENDARY WIN 9x9x MONEY" << endl;
		money = 81 * money;
	}
}

int main()
{
	srand(time(NULL));
	
	int firstSlot;
	int secondSlot;
	int thirdSlot;
	int money = 1000;
	string play;


	while (true)
	{
	firstSlot = rand() % 9 + 1;
	secondSlot = rand() % 9 + 1;
	thirdSlot = rand() % 9 + 1;
	
	cout << "SLOT MACHINE"  "   YOUR MONEY: "
		<< money << endl << endl << endl
		<< "Type anything to play" << endl;
		cin >> play;
	system("CLS");
		money = money - 10;
		if (money <= 0)
		{
			cout << "YOU HAVE LOOSE" << endl;
			break;
		}
		else if (money > 10000)
		{
			cout << "YOU WON" << endl
				<< "YOUR FINAL GOLD: " << money;
			break;
		}
		else
		{
	    cout << firstSlot << " | " << secondSlot << " | " << thirdSlot << endl;
		checkIfWin(money, firstSlot, secondSlot, thirdSlot);
		}
		
	}
	return 0;
}