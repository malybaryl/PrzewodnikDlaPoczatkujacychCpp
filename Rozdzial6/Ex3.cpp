#include <iostream>

using namespace std;

void CheckPassword(string password,bool &IfCorrect)
{
	if (password == "admin1234")
	{
		IfCorrect = true;
	}
}

int main()
{
		string password;
		bool IfCorrect = false;

	for (int x = 3; x > 0; x--)
	{
		cout << "YOUR ATTEMPTS: " << x << endl << endl
			<< "Enter your password: ";
		cin >> password;
		
		CheckPassword(password, IfCorrect);
			if (IfCorrect == true)
			{
				break;
			}

		cout << "Wrong password..." << endl << endl;
	}
}
