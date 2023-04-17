#include <iostream>

using namespace std;

int main()
{
	int PIN;


	for (int x = 0; x < 2; x++)
	{
	cout << "Enter the PIN: ";
	cin >> PIN;
		{
			if (PIN == 0000 || PIN == 1234)
			{
				if (PIN == 0000)
				{
					cout << "Welcom \"ADMIN\"";
				}
				else if (PIN == 1234)
				{
					cout << "Welcom \"Oliwia<3\"";
				}
				break;
			}
			else
			{
				cout << "The PIN is incorrect" << endl;
				if (x == 0)
				{
					cout << "You can try once more ;)" << endl;
				}
			}
		}
	}
}