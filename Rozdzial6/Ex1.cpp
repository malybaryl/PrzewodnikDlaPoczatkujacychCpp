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
			<< "+ -SUM" << endl
			<< "- -DIFFERENCE" << endl
			<< "* -PRODUCT" << endl
			<< "/ -QUOTIENT" << endl;
		cin >> ArithOper;
	
		if (ArithOper == '+')
		{
			cout << "SUM is: " << FirstValue + SecondValue;
		}
		else if (ArithOper == '-')
		{
			cout << "DIFFERENCE is: " << FirstValue - SecondValue;
		}
		else if (ArithOper == '*')
		{
			cout << "PRODUCT is: " << FirstValue * SecondValue;
		}
		else if (ArithOper == '/')
		{
			cout << "QUOTIENT is: " << FirstValue / SecondValue;
		}
		else
		{
			cout << "Wrong commend...";
		}
}

void Print_99BottlesOfBeer()
{
	for (int i = 99; i > 0; i--)
	{
		int j = i - 1;

		if (j == 0)
		{
			cout << i << " bottles of beer on the wall, " << i << " bottles of beer." << endl
				<< "Take one down and pass it around, no more bottles of beer on the wall." << endl << endl;

			cout << "No more bottles of beer on the wall, no more bottles of beer." << endl
				<< "Go to the store and buy some more, 99 bottles of beer on the wall." << endl << endl;

			break;
		}
		cout << i << " bottles of beer on the wall, " << i << " bottles of beer." << endl
			<< "Take one down and pass it around, " << j << " bottles of beer on the wall." << endl << endl;
	}
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

		if (choice == 1)
		{
			calculator();
			break;
		}
		if (choice == 2)
		{
			Print_99BottlesOfBeer();
			break;
		}
		system("CLS");
	}
	return 0; 
}