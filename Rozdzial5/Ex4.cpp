#include <iostream>
#include <string>

using namespace std;

int main()
{
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
}