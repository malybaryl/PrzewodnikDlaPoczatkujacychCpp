#include <iostream>

using namespace std;

int main()
{
	int FirstAge;
	int SecondAge;
	
	cout << "Enter the age of first person: ";
	cin >> FirstAge;
	cout << "Enter the age of second person: ";
	cin >> SecondAge;
	
	if (FirstAge > SecondAge && FirstAge < 100 && SecondAge < 100)
	{
		cout << "First person is older" << endl;
	}
	else if (FirstAge < SecondAge && FirstAge < 100 && SecondAge < 100)
	{
		cout << "Second person is older" << endl;
	}
	else if (FirstAge >= 100 && SecondAge <= 100)
	{
		cout << "First Person is too old...";
	}
	else if (SecondAge >= 100 && FirstAge <= 100)
	{
		cout << "Second Person is too old...";
	}
	else
	{
		cout << "These people are too old...";
	}
}