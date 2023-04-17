#include <iostream>
#include <string>

using namespace std;

int main()
{
	{
		cout << "TASK 1 - FOR" << endl << endl;

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
	{
		cout << "TASK 1 - While" << endl << endl;

		int i = 99;
		int j;
		
		while (i>1)
		{
			j = i - 1;
			cout << i << " bottles of beer on the wall, " << i << " bottles of beer." << endl
				<< "Take one down and pass it around, " << j << " bottles of beer on the wall." << endl << endl;
			i--;
		}

		cout << i << " bottles of beer on the wall, " << i << " bottles of beer." << endl
			<< "Take one down and pass it around, no more bottles of beer on the wall." << endl << endl;

		cout << "No more bottles of beer on the wall, no more bottles of beer." << endl
			<< "Go to the store and buy some more, 99 bottles of beer on the wall." << endl << endl;
	}
	{
		cout << "TASK 1 - Do-While" << endl << endl;

		int i = 99;
		int j;

		do
		{
			j = i - 1;
			cout << i << " bottles of beer on the wall, " << i << " bottles of beer." << endl
				<< "Take one down and pass it around, " << j << " bottles of beer on the wall." << endl << endl;
			i--;
		} while (i>1);

		cout << i << " bottles of beer on the wall, " << i << " bottles of beer." << endl
			<< "Take one down and pass it around, no more bottles of beer on the wall." << endl << endl;

		cout << "No more bottles of beer on the wall, no more bottles of beer." << endl
			<< "Go to the store and buy some more, 99 bottles of beer on the wall." << endl << endl;
	}
	{
		cout << "TASK 2 - FOR" << endl << endl;

		int choice;
		
		for (int x = 1; x > 0; x++)
		{
			cout << "MENU" << endl
				<< "1 - option 1" << endl
				<< "2 - option 2" << endl
				<< "3 - option 3" << endl;
			cin >> choice;

			if (choice == 1)
			{
				cout << "YOU HAVE CHOOSE \"option 1\"" << endl;
				break;
			}
			if (choice == 2)
			{
				cout << "YOU HAVE CHOOSE \"option 2\"" << endl;
				break;
			}
			if (choice == 3)
			{
				cout << "YOU HAVE CHOOSE \"option 3\"" << endl;
				break;
			}
		}
		cout << endl;
	}
	{
		cout << "TASK 2 - While" << endl << endl;

		int choice;

		while (true)
		{
			cout << "MENU" << endl
				<< "1 - option 1" << endl
				<< "2 - option 2" << endl
				<< "3 - option 3" << endl;
			cin >> choice;

			if (choice == 1)
			{
				cout << "YOU HAVE CHOOSE \"option 1\"" << endl;
				break;
			}
			if (choice == 2)
			{
				cout << "YOU HAVE CHOOSE \"option 2\"" << endl;
				break;
			}
			if (choice == 3)
			{
				cout << "YOU HAVE CHOOSE \"option 3\"" << endl;
				break;
			}
		}
		cout << endl;
	}
	{
		cout << "TASK 2 - Do-While" << endl << endl;

		int choice;

		do
		{
			cout << "MENU" << endl
				<< "1 - option 1" << endl
				<< "2 - option 2" << endl
				<< "3 - option 3" << endl;
			cin >> choice;

			if (choice == 1)
			{
				cout << "YOU HAVE CHOOSE \"option 1\"" << endl;
				break;
			}
			if (choice == 2)
			{
				cout << "YOU HAVE CHOOSE \"option 2\"" << endl;
				break;
			}
			if (choice == 3)
			{
				cout << "YOU HAVE CHOOSE \"option 3\"" << endl;
				break;
			}
		} while (true);
		cout << endl;
	}
	{
		cout << "TASK 3 - For" << endl << endl;

		int x = 0;
		int y;
		
		for (int i = 1; i > 0; i++)
		{
			cout << "Enter number: ";
			cin >> y;

			if (y == 0)
			{
				break;
			}

			x = x + y;
			cout << "SUM: " << x << endl;
		}
		cout << endl;
	}
	{
		cout << "TASK 3 - While" << endl << endl;

		int x = 0;
		int y;

		while (true)
		{
			cout << "Enter number: ";
			cin >> y;

			if (y == 0)
			{
				break;
			}

			x = x + y;
			cout << "SUM: " << x << endl;
		}
		cout << endl;
	}
	{
		cout << "TASK 3 - Do-While" << endl << endl;

		int x = 0;
		int y;

		do
		{
			cout << "Enter number: ";
			cin >> y;

			if (y == 0)
			{
				break;
			}

			x = x + y;
			cout << "SUM: " << x << endl;
		} while (true);
		cout << endl;
	}
	{
		cout << "TASK 4 - For" << endl << endl;

		string password;

		for (int x = 3; x > 0; x--)
		{
			cout << "YOUR ATTEMPTS: " << x << endl << endl
				<< "Enter your password: ";
			cin >> password;
			if (password == "admin1234")
			{
				cout << "Correct password";
				break;
			}
			cout << "wrong password..." << endl << endl;
		}
		cout << endl;
	}
	{
		cout << "TASK 4 - While" << endl << endl;

		string password;

		int x = 3;

		while (x > 0)
		{
			cout << "YOUR ATTEMPTS: " << x << endl << endl
				<< "Enter your password: ";
			cin >> password;
			if (password == "admin1234")
			{
				cout << "Correct password";
				break;
			}
			cout << "wrong password..." << endl << endl;
			x--;
		}
		cout << endl;
	}
	{
		cout << "TASK 4 - Do-While" << endl << endl;

		string password;

		int x = 3;

		do
		{
			cout << "YOUR ATTEMPTS: " << x << endl << endl
				<< "Enter your password: ";
			cin >> password;
			if (password == "admin1234")
			{
				cout << "Correct password";
				break;
			}
			cout << "wrong password..." << endl << endl;
			x--;
		} while (x > 0);
	}
}