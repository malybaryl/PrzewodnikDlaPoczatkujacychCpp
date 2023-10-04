#include <iostream>
#include <vector>

using namespace std;

void startGame(char Board[50][50],int& numberOfFields)
{
	while(true)
    {
    std::cout << "enter number of fields (4-50):";
    std::cin >> numberOfFields;
    if(numberOfFields>3&&numberOfFields<51)
    {
        break;
    }
    else
    {
        std::cout << "wrong range..." << std::endl;
    }
    
    }
    for (int i = 0; i < numberOfFields; i++)
	{
		for (int j = 0; j < numberOfFields; j++)
		{
			Board[i][j] = '-';
		}
	}
}

void checkIfWin(char Board[50][50],int numberOfFields,bool& gameIsOn)
{
 for (int i=0; i<numberOfFields ; i++)
 {
    for (int j=0;i<numberOfFields;i++)
    {
        if(Board[i][j]=='X'&&Board[i+1][j]=='X'&&Board[i+2][j]=='X'&&Board[i+3][j]=='X')
        {
            std::cout << "X has won" << std::endl;
            gameIsOn=false;
        }
    }
 }
}

void showBoard(char Board[50][50],int& numberOfFields)
{
	for (int i = 0; i < numberOfFields; i++)
	{
		for (int j = 0; j < numberOfFields; j++)
		{
			cout << Board[i][j] << " ";
		}
		cout << endl;
	}
}

bool checkMove(std::vector<int>& moves, int move)
{
    for(int i=0; i < moves.size(); i++)
    {
        if(moves[i]==move)
        {
            return false;
        }
    }
 moves.push_back(move);
 return true;
}

void markField(char Board[50][50],std::vector<int>& moves,int numberOfFields,bool X,bool O, int move, bool& correct,int x, int y)
{
    bool correct2 = false;
    correct2 = checkMove(moves, move);
    if(correct2 == true)
    {
        if(X==true)
        {
            Board[x][y]='X';
            correct = true;
        }
        else if (O==true)
        {
            Board[x][y]='O';
            correct = true;
        }
    }
}


void transformMove(int& move,int numberOfFields, int& x, int& y)
{
move--;
x = move / numberOfFields;
y = move%numberOfFields;
}

int main()
{
	bool X;
    bool O;
    bool correct;
    bool gameIsOn=true;
    int move;
	char Board[50][50];
    std::vector<int> moves;
    int numberOfFields = 0;
	startGame(Board,numberOfFields);
	int area;
	while (gameIsOn==true)
	{
		checkIfWin(Board,numberOfFields,gameIsOn);
        X=false;
        O=false;
        correct = false;
        showBoard(Board,numberOfFields);
        while(correct == false)
        {
            int x = 0;
            int y = 0;
            std::cout << "X:";
            std::cin >> move;
            transformMove(move, numberOfFields,x,y);
            X=true;
            markField(Board,moves,numberOfFields,X,O,move,correct,x,y);
            showBoard(Board,numberOfFields);
            X=false;
        }
        correct = false;
        checkIfWin(Board,numberOfFields,gameIsOn);
        while(correct == false)
        {
            int x = 0;
            int y = 0;
            std::cout << "O:";
            std::cin >> move;
            transformMove(move, numberOfFields,x,y);
            O=true;
            markField(Board,moves,numberOfFields,X,O,move,correct,x,y);
            showBoard(Board,numberOfFields);
            O=false;
        }
	}
	return 0;
}