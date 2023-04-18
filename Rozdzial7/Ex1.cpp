#include <iostream>

using namespace std;

void calculator()
{
	int FirstValue;
	int SecondValue;
	char ArithOper;

	cout << "Enter the first value:";
	cin >> FirstValue;
	cout << "Enter the second value:";
	cin >> SecondValue;
	cout << "Enter the arithmetic operator:" << endl
		<< "1. SUM" << endl
		<< "2. DIFFERENCE" << endl
		<< "3. PRODUCT" << endl
		<< "4. QUOTIENT" << endl;
	cin >> ArithOper;

	switch (ArithOper)
	{
	case 1:
		cout << "SUM is: " << FirstValue + SecondValue;
		break;
	case 2:
		cout << "DIFFERENCE is: " << FirstValue - SecondValue;
		break;
	case 3:
		cout << "PRODUCT is: " << FirstValue * SecondValue;
		break;
	case 4:
		cout << "QUOTIENT is: " << FirstValue / SecondValue;
	default:
		cout << "Wrong commend...";
		break;
	}
}

void Print_99BottlesOfBeer()
{	
	for (int i = 99; i > 1; i--)
	{
		int j = i - 1;

		cout << i << " bottles of beer on the wall, " << i << " bottles of beer." << endl
			<< "Take one down and pass it around, " << j << " bottles of beer on the wall." << endl << endl;
	}
	cout << 1 << " bottles of beer on the wall, " << 1 << " bottles of beer." << endl
		<< "Take one down and pass it around, no more bottles of beer on the wall." << endl << endl;

	cout << "No more bottles of beer on the wall, no more bottles of beer." << endl
		<< "Go to the store and buy some more, 99 bottles of beer on the wall." << endl << endl;

}

int main()
{

	int choice;

	while (true)
	{
		cout << "MENU" << endl
			<< "1 - Calculator" << endl
			<< "2 - 99 Bottles Of Beer" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			calculator();
			break;
		case 2:
			Print_99BottlesOfBeer();
			break;
		default:
			break;
		}
	}
	return 0;
}