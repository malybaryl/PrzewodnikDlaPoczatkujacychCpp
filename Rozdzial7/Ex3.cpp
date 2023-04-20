#include <iostream>

using namespace std;

enum XO { X = 1, O = 2 };

void drawBoard(int area1XO, int area2XO, int area3XO, int area4XO, int area5XO, int area6XO, int area7XO, int area8XO, int area9XO)
{
	system("CLS");
	if (area1XO == 0)
		cout << "-|";
	else if (area1XO == X)
		cout << "X|";
	else if (area1XO == O)
		cout << "O|";
	if (area2XO == 0)
		cout << "-|";
	else if (area2XO == X)
		cout << "X|";
	else if (area2XO == O)
		cout << "O|";
	if (area3XO == 0)
		cout << "-";
	else if (area3XO == X)
		cout << "X";
	else if (area3XO == O)
		cout << "O";
	cout << endl;
	if (area4XO == 0)
		cout << "-|";
	else if (area4XO == X)
		cout << "X|";
	else if (area4XO == O)
		cout << "O|";
	if (area5XO == 0)
		cout << "-|";
	else if (area5XO == X)
		cout << "X|";
	else if (area5XO == O)
		cout << "O|";
	if (area6XO == 0)
		cout << "-";
	else if (area6XO == X)
		cout << "X";
	else if (area6XO == O)
		cout << "O";
	cout << endl;
	if (area7XO == 0)
		cout << "-|";
	else if (area7XO == X)
		cout << "X|";
	else if (area7XO == O)
		cout << "O|";
	if (area8XO == 0)
		cout << "-|";
	else if (area8XO == X)
		cout << "X|";
	else if (area8XO == O)
		cout << "O|";
	if (area9XO == 0)
		cout << "-";
	else if (area9XO == X)
		cout << "X";
	else if (area9XO == O)
		cout << "O";
	cout << endl;
}

int main()
{
	bool gameOn = true;
	bool area1 = false;
	int area1XO=0;
	bool area2 = false;
	int area2XO=0;
	bool area3 = false;
	int area3XO=0;
	bool area4 = false;
	int area4XO=0;
	bool area5 = false;
	int area5XO=0;
	bool area6 = false;
	int area6XO=0;
	bool area7 = false;
	int area7XO=0;
	bool area8 = false;
	int area8XO=0;
	bool area9 = false;
	int area9XO=0;
	int action;

	drawBoard(area1XO, area2XO, area3XO, area4XO, area5XO, area6XO, area7XO, area8XO, area9XO);

		while (true)
		{
			drawBoard(area1XO, area2XO, area3XO, area4XO, area5XO, area6XO, area7XO, area8XO, area9XO);
			if ((area1XO == X && area2XO == X && area3XO == X) || (area4XO == X && area5XO == X && area6XO == X) || (area7XO == X && area8XO == X && area9XO == X) || (area1XO == X && area4XO == X && area7XO == X) || (area2XO == X && area6XO == X && area8XO == X) || (area3XO == X && area7XO == X && area9XO == X) || (area1XO == X && area5XO == X && area9XO == X) || (area3XO == X && area5XO == X && area7XO == X))
			{
				cout << "X WON" << endl;
				break;
			}
			else if ((area1XO == O && area2XO == O && area3XO == O) || (area4XO == O && area5XO == O && area6XO == O) || (area7XO == O && area8XO == O && area9XO == O) || (area1XO == O && area4XO == O && area7XO == O) || (area2XO == O && area6XO == O && area8XO == O) || (area3XO == O && area7XO == O && area9XO == O) || (area1XO == O && area5XO == O && area9XO == O) || (area3XO == O && area5XO == O && area7XO == O))
			{
				cout << "O WON" << endl;
				break;
			}
			else if (area1 == true && area2 == true && area3 == true && area4 == true && area5 == true && area6 == true && area7 == true && area8 == true && area9 == true)
			{
				cout << "NOBODY HAS WON :(" << endl;
				break;
			}
			while (true)
			{
				drawBoard(area1XO, area2XO, area3XO, area4XO, area5XO, area6XO, area7XO, area8XO, area9XO);
				cout << "X: ";
				cin >> action;
				if (action == 1)
				{
					if (area1 == false)
					{
						area1XO = X;
						area1 = true;
						break;
					}
				}
				else if (action == 2)
				{
					if (area2 == false)
					{
						area2XO = X;
						area2 = true;
						break;
					}
				}
				else if (action == 3)
				{
					if (area3 == false)
					{
						area3XO = X;
						area3 = true;
						break;
					}
				}
				else if (action == 4)
				{
					if (area4 == false)
					{
						area4XO = X;
						area4 = true;
						break;
					}
				}
				else if (action == 5)
				{
					if (area5 == false)
					{
						area5XO = X;
						area5 = true;
						break;
					}
				}
				else if (action == 6)
				{
					if (area6 == false)
					{
						area6XO = X;
						area6 = true;
						break;
					}
				}
				else if (action == 7)
				{
					if (area7 == false)
					{
						area7XO = X;
						area7 = true;
						break;
					}
				}
				else if (action == 8)
				{
					if (area8 == false)
					{
						area8XO = X;
						area8 = true;
						break;
					}
				}
				else if (action == 9)
				{
					if (area9 == false)
					{
						area9XO = X;
						area9 = true;
						break;
					}
				}
			}
			drawBoard(area1XO, area2XO, area3XO, area4XO, area5XO, area6XO, area7XO, area8XO, area9XO);
			if ((area1XO == X && area2XO == X && area3XO == X) || (area4XO == X && area5XO == X && area6XO == X) || (area7XO == X && area8XO == X && area9XO == X) || (area1XO == X && area4XO == X && area7XO == X) || (area2XO == X && area6XO == X && area8XO == X) || (area3XO == X && area7XO == X && area9XO == X) || (area1XO == X && area5XO == X && area9XO == X) || (area3XO == X && area5XO == X && area7XO == X))
			{
				cout << "X WON" << endl;
				break;
			}
			else if ((area1XO == O && area2XO == O && area3XO == O) || (area4XO == O && area5XO == O && area6XO == O) || (area7XO == O && area8XO == O && area9XO == O) || (area1XO == O && area4XO == O && area7XO == O) || (area2XO == O && area6XO == O && area8XO == O) || (area3XO == O && area7XO == O && area9XO == O) || (area1XO == O && area5XO == O && area9XO == O) || (area3XO == O && area5XO == O && area7XO == O))
			{
				cout << "O WON" << endl;
				break;
			}
			else if (area1 == true && area2 == true && area3 == true && area4 == true && area5 == true && area6 == true && area7 == true && area8 == true && area9 == true)
			{
				cout << "NOBODY HAS WON :(" << endl;
				break;
			}
			while (true)
			{
				drawBoard(area1XO, area2XO, area3XO, area4XO, area5XO, area6XO, area7XO, area8XO, area9XO);
				cout << "O: ";
				cin >> action;
				if (action == 1)
				{
					if (area1 == false)
					{
						area1XO = O;
						area1 = true;
						break;
					}
				}
				else if (action == 2)
				{
					if (area2 == false)
					{
						area2XO = O;
						area2 = true;
						break;
					}
				}
				else if (action == 3)
				{
					if (area3 == false)
					{
						area3XO = O;
						area3 = true;
						break;
					}
				}
				else if (action == 4)
				{
					if (area4 == false)
					{
						area4XO = O;
						area4 = true;
						break;
					}
				}
				else if (action == 5)
				{
					if (area5 == false)
					{
						area5XO = O;
						area5 = true;
						break;
					}
				}
				else if (action == 6)
				{
					if (area6 == false)
					{
						area6XO = O;
						area6 = true;
						break;
					}
				}
				else if (action == 7)
				{
					if (area7 == false)
					{
						area7XO = O;
						area7 = true;
						break;
					}
				}
				else if (action == 8)
				{
					if (area8 == false)
					{
						area8XO = O;
						area8 = true;
						break;
					}
				}
				else if (action == 9)
				{
					if (area9 == false)
					{
						area9XO = O;
						area9 = true;
						break;
					}
				}
			}
		}
	return 0;
}