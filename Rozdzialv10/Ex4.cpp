#include <iostream>

using namespace std;

void startGame(char Board[][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			Board[i][j] = '-';
		}
	}
}

void markBoard(char sigh, char Board[][3],bool& area1, bool& area2, bool& area3, bool& area4, bool& area5, bool& area6, bool& area7, bool& area8, bool& area9)
{
	int area;
	while (true)
	{
		cin >> area;
		if (area == 1 && area1 !=false)
		{
			if (sigh == 'X')
			{
				Board[0][0] = 'X';
				area1 = false;
				break;
			}
			else if (sigh == 'Y')
			{
				Board[0][0] = 'Y';
				area1 = false;
				break;
			}
		}
		else if (area == 2 && area2 != false)
		{
			if (sigh == 'X')
			{
				Board[0][1] = 'X';
				area2 = false;
				break;
			}
			else if (sigh == 'Y')
			{
				Board[0][1] = 'Y';
				area2 = false;
				break;
			}
		}
		else if (area == 3 && area3 != false)
		{
			if (sigh == 'X')
			{
				Board[0][2] = 'X';
				area3 = false;
				break;
			}
			else if (sigh == 'Y')
			{
				Board[0][2] = 'Y';
				area3 = false;
				break;
			}
		}
		else if (area == 4 && area4 != false)
		{
			if (sigh == 'X')
			{
				Board[1][0] = 'X';
				area4 = false;
				break;
			}
			else if (sigh == 'Y')
			{
				Board[1][0] = 'Y';
				area4 = false;
				break;
			}
		}
		else if (area == 5 && area5 != false)
		{
			if (sigh == 'X')
			{
				Board[1][1] = 'X';
				area5 = false;
				break;
			}
			else if (sigh == 'Y')
			{
				Board[1][1] = 'Y';
				area5 = false;
				break;
			}
		}
		else if (area == 6 && area6 != false)
		{
			if (sigh == 'X')
			{
				Board[1][2] = 'X';
				area6 = false;
				break;
			}
			else if (sigh == 'Y')
			{
				Board[1][2] = 'Y';
				area6 = false;
				break;
			}
		}
		else if (area == 7 && area7 != false)
		{
			if (sigh == 'X')
			{
				Board[2][0] = 'X';
				area7 = false;
				break;
			}
			else if (sigh == 'Y')
			{
				Board[2][0] = 'Y';
				area7 = false;
				break;
			}
		}
		else if (area == 8 && area8 != false)
		{
			if (sigh == 'X')
			{
				Board[2][1] = 'X';
				area8 = false;
				break;
			}
			else if (sigh == 'Y')
			{
				Board[2][1] = 'Y';
				area8 = false;
				break;
			}
		}
		else if (area == 9 && area9 != false)
		{
			if (sigh == 'X')
			{
				Board[2][2] = 'X';
				area9 = false;
				break;
			}
			else if (sigh == 'Y')
			{
				Board[2][2] = 'Y';
				area9 = false;
				break;
			}
		}
	}
}

bool checkIfWin(char Board[][3])
{
	if (Board[0][0] == Board[1][0] && Board[1][0] == Board[2][0] && Board[0][0] != '-')
	{
		cout << "The " << Board[0][0] << " has WON";
		return true;
	}
	else if (Board[0][1] == Board[1][1] && Board[1][1] == Board[2][1] && Board[0][1] != '-')
	{
		cout << "The " << Board[0][1] << " has WON";
		return true;
	}
	else if (Board[0][2] == Board[1][2] && Board[1][2] == Board[2][2] && Board[0][2] != '-')
	{
		cout << "The " << Board[0][2] << " has WON";
		return true;
	}
	else if (Board[0][0] == Board[0][1] && Board[0][1] == Board[0][2] && Board[0][2] != '-')
	{
		cout << "The " << Board[0][2] << " has WON";
		return true;
	}
	else if (Board[1][0] == Board[1][1] && Board[1][1] == Board[1][2] && Board[1][2] != '-')
	{
		cout << "The " << Board[1][2] << " has WON";
		return true;
	}
	else if (Board[2][0] == Board[2][1] && Board[2][1] == Board[2][2] && Board[2][2] != '-')
	{
		cout << "The " << Board[2][2] << " has WON";
		return true;
	}
	else if (Board[0][0] == Board[1][1] && Board[1][1] == Board[2][2] && Board[2][2] != '-')
	{
		cout << "The " << Board[2][2] << " has WON";
		return true;
	}
	else if (Board[0][2] == Board[1][1] && Board[1][1] == Board[2][0] && Board[2][0] != '-')
	{
		cout << "The " << Board[0][2] << " has WON";
		return true;
	}
	else if (Board[0][0] != '-' && Board[0][1] != '-' && Board[0][2] != '-' && Board[1][0] != '-' && Board[1][1] != '-' && Board[1][2] != '-' && Board[2][0] != '-' && Board[2][1] != '-' && Board[2][2] != '-')
	{
		cout << "Nobody has won";
		return true;
	}
	else return false;
}

void showBoard(char Board[][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << Board[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	bool area1=true;
	bool area2=true;
	bool area3 = true;
	bool area4 = true;
	bool area5 = true;
	bool area6 = true;
	bool area7 = true;
	bool area8 = true;
	bool area9 = true;
	bool win = false;
	char Board[3][3];
	startGame(Board);
	int area;
	while (true)
	{
		showBoard(Board);
		win = checkIfWin(Board);
		if (win == true)
			break;
		while (true)
		{
			cout << "X: ";
			markBoard('X', Board, area1,area2,area3,area4,area5,area6,area7,area8,area9);
			break;
		}
		showBoard(Board);
		checkIfWin(Board);
		if (win == true)
			break;
		while (true)
		{
			cout << "Y: ";
			cin >> area;
			markBoard('Y', Board,area1,area2,area3,area4,area5,area6,area7,area8,area9);
			break;
		}
	}
	return 0;
}