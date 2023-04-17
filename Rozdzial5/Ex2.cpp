#include <iostream>

using namespace std;

int main()
{
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
}