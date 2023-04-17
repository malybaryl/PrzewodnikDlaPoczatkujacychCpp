#include <iostream>

using namespace std;

int main()
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