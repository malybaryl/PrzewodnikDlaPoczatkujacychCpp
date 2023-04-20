#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	int chance;
	chance = rand() % 101;
	if (chance <= 50)
	{
		cout << "ORZEL";
	}
	else
	{
		cout << "RESZKA";
	}
	return 0;
}
