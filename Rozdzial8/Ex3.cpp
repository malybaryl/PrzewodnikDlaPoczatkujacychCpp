#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	int numberToGuess;
	int number;
	int max = 100;
	int min = 1;

	numberToGuess = rand() % 101 + 1;
	cout << "Choose number from 1 to 100" << endl;
	while (true)
	{
		number = rand() % (max + 1) + min;
		cout << number << endl;
		if (number == numberToGuess)
		{
			cout << "Correct! You have WON" << endl;
			break;
		}
		else if (number > numberToGuess)
		{
			cout << "Wrong! The number is smaller" << endl;
			max = number;
		}
		else if (number < numberToGuess)
		{
			cout << "Wrong! The number is bigger" << endl;
			min = number;
		}
	}
	return 0;
}