#include <iostream>

using namespace std;

int main()
{
	int choice;
	int FirstAns = 0;
	int SecondAns = 0;
	int ThirdAns = 0;
	double AllAns;
	double PerFirstAns;
	double PerSecondAns;
	double PerThirdAns;

	while (true)
	{
		system("CLS");
		cout << "Are u enjoy your work?" << endl
			<< "1 - yes" << endl
			<< "2 - no" << endl
			<< "3 - I am not sure" << endl;
		cin >> choice;
		if (choice == 0)
		{
			break;
		}
		else if (choice == 1)
		{
			FirstAns++;
		}
		else if (choice == 2)
		{
			SecondAns++;
		}
		else if (choice == 3)
		{
			ThirdAns++;
		}
	}
	system("CLS");
	
	AllAns = FirstAns + SecondAns + ThirdAns;
	PerFirstAns = (FirstAns / AllAns)*100;
	PerSecondAns = (SecondAns / AllAns)*100;
	PerThirdAns = (ThirdAns / AllAns)*100;
	
	cout << endl << "All answers: " << AllAns << endl
		<< "yes - " << PerFirstAns << " %" << endl
		<< "no - " << PerSecondAns << " %" << endl
		<< "I am not sure - " << PerThirdAns << " %" << endl << endl;

	cout << "BAR GRAPH" << endl << endl;
	cout << "yes           : ";
	for (int i = 0; i <= PerFirstAns; i++)
	{
		cout << '|';
	}
	cout << endl;
	cout << "no            : ";
	for (int i = 0; i <= PerSecondAns; i++)
	{
		cout << '|';
	}
	cout << endl;
	cout << "I am not sure : ";
	for (int i = 0; i <= PerThirdAns; i++)
	{
		cout << '|';
	}
}