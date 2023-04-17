#include <iostream>

using namespace std;

int main()
{
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
}