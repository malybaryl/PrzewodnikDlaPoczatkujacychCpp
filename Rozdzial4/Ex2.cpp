#include <iostream>

using namespace std;

int main()
{
	int PIN;

	cout << "Enter the PIN: ";
	cin >> PIN;

	if (PIN == 0000 || PIN == 1234)
	{
		cout << "The PIN is correct" << endl;
	}
	else
	{
		cout << "The PIN is incorrect" << endl;
	}
}