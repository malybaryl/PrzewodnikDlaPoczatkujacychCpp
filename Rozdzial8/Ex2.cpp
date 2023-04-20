#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	int numberToGuess;
	int number;
	
	numberToGuess = rand() % 101 + 1;
	cout << "Choose number from 1 to 100" << endl;
	while (true)
	{
		cin >> number;
		if (number == numberToGuess)
		{
			cout << "Correct! You have WON" << endl;
			break;
		}
		else if (number > numberToGuess)
		{
			cout << "Wrong! The number is smaller" << endl;
		}
		else if (number < numberToGuess)
		{
			cout << "Wrong! The number is bigger" << endl;
		}
	}
	return 0;
}