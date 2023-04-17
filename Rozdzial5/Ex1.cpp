#include <iostream>

using namespace std;

int main()
{
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