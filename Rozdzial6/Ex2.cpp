#include <iostream>

using namespace std;

double Sum(double FirstValue, double SecondValue)
{
	return FirstValue + SecondValue;
}

double Difference(double FirstValue, double SecondValue)
{
	return FirstValue - SecondValue;
}

double Product(double FirstValue, double SecondValue)
{
	return FirstValue * SecondValue;
}

double Quotient(double FirstValue, double SecondValue)
{
	return FirstValue / SecondValue;
}

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
		cout << "SUM is: " << Sum(FirstValue, SecondValue);
	}
	else if (ArithOper == '-')
	{
		cout << "DIFFERENCE is: " << Difference(FirstValue, SecondValue);
	}
	else if (ArithOper == '*')
	{
		cout << "PRODUCT is: " << Product(FirstValue, SecondValue);
	}
	else if (ArithOper == '/')
	{
		cout << "QUOTIENT is: " << Quotient(FirstValue, SecondValue);
	}
	else
	{
		cout << "Wrong commend...";
	}
	return 0;
}