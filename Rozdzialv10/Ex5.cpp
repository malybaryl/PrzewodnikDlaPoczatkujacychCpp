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
 for (int i=3; i<numberOfFields ; i++)
 {
    for (int j=0;i<numberOfFields;i++)
    {
        if(Board[i][j]=='X'&&Board[i-1][j]=='X'&&Board[i-2][j]=='X'&&Board[i-3][j]=='X')
        {
            std::cout << "X has won" << std::endl;
            gameIsOn=false;
        }
        else if(Board[i][j]=='X'&&Board[i][j+1]=='X'&&Board[i][j+2]=='X'&&Board[i][j+3]=='X')
        {
            std::cout << "X has won" << std::endl;
            gameIsOn=false;
        }
        else if(Board[i][j]=='X'&&Board[i-1][j-1]=='X'&&Board[i-2][j-2]=='X'&&Board[i-3][j-3]=='X')
        {
            std::cout << "X has won" << std::endl;
            gameIsOn=false;
        }
        else if(Board[i][j]=='X'&&Board[i-1][j+1]=='X'&&Board[i-2][j+2]=='X'&&Board[i-3][j+3]=='X')
        {
            std::cout << "X has won" << std::endl;
            gameIsOn=false;
        }
        else if(Board[i][j]=='O'&&Board[i-1][j]=='O'&&Board[i-2][j]=='O'&&Board[i-3][j]=='O')
        {
            std::cout << "O has won" << std::endl;
            gameIsOn=false;
        }
        else if(Board[i][j]=='O'&&Board[i][j+1]=='O'&&Board[i][j+2]=='O'&&Board[i][j+3]=='O')
        {
            std::cout << "O has won" << std::endl;
            gameIsOn=false;
        }
        else if(Board[i][j]=='O'&&Board[i-1][j-1]=='O'&&Board[i-2][j-2]=='O'&&Board[i-3][j-3]=='O')
        {
            std::cout << "O has won" << std::endl;
            gameIsOn=false;
        }
        else if(Board[i][j]=='O'&&Board[i-1][j+1]=='O'&&Board[i-2][j+2]=='O'&&Board[i-3][j+3]=='O')
        {
            std::cout << "O has won" << std::endl;
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
    bool goOn=true;
	while(goOn == true)
    {
        bool X;
        bool O;
        bool correct;
        bool gameIsOn=true;
        char decision=' ';
        int move;
        char Board[50][50];
        std::vector<int> moves;
        int numberOfFields = 0;
        startGame(Board,numberOfFields);
        int area;
	    while (gameIsOn==true)
        {
            checkIfWin(Board,numberOfFields,gameIsOn);
            if(gameIsOn==false)
            {
                break;
            }
            if(moves.size()==numberOfFields*numberOfFields)
            {
                std::cout << "DRAW" << std::endl;
            }
            X=false;
            O=false;
            correct = false;
            std::cout << std::endl;
            showBoard(Board,numberOfFields);
            while(correct == false)
            {
                int x = 0;
                int y = 0;
                std::cout << "X:";
                std::cin >> move;
                if(numberOfFields > 0 && move <= numberOfFields*numberOfFields)
                {
                    transformMove(move, numberOfFields,x,y);
                    X=true;
                    markField(Board,moves,numberOfFields,X,O,move,correct,x,y);
                    std::cout << std::endl;
                    showBoard(Board,numberOfFields);
                    X=false;    
                }
                else
                {
                    std::cout << "wrong range..." << std::endl;
                }

            }
            correct = false;
            checkIfWin(Board,numberOfFields,gameIsOn);
            if(gameIsOn==false)
            {
                break;
            }
            if(moves.size()==numberOfFields*numberOfFields)
            {
                std::cout << "DRAW" << std::endl;
                break;
            }
            while(correct == false)
            {
                int x = 0;
                int y = 0;
                std::cout << "O:";
                std::cin >> move;
                if(numberOfFields > 0 && move <= numberOfFields*numberOfFields)
                {
                    transformMove(move, numberOfFields,x,y);
                    O=true;
                    markField(Board,moves,numberOfFields,X,O,move,correct,x,y);
                    std::cout << std::endl;
                    showBoard(Board,numberOfFields);
                    O=false;
                }
                else
                {
                    std::cout << "wrong range..." << std::endl;
                }
            }
        }
        while (true)
        {
        std::cout << "Do you want to play again? y/n: ";
        std::cin >> decision;
        if(decision == 'n')
            {
                goOn = false;
                break;
            }
            else if(decision == 'y')
            {
                break;
            }
            else if (decision != 'y')
            {
            std::cout << "wrong commend..." << std::endl;
            break;
            }
        }
    }
    return 0;
}