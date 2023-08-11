#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void drawCards(string& firstCard, string& secondCard, string& thirdCard, string& fourthCard, string& fivethCard, bool& spadeAce, bool& heartAce, bool& diamondAce, bool& clubAce, bool& spade2, bool& heart2, bool& diamond2, bool& club2, bool& spade3, bool& heart3, bool& diamond3, bool& club3, bool& spade4, bool& heart4, bool& diamond4, bool& club4, bool& spade5, bool& heart5, bool& diamond5, bool& club5, bool& spade6, bool& heart6, bool& diamond6, bool& club6, bool& spade7, bool& heart7, bool& diamond7, bool& club7, bool& spade8, bool& heart8, bool& diamond8, bool& club8, bool& spade9, bool& heart9, bool& diamond9, bool& club9, bool& spade10, bool& heart10, bool& diamond10, bool& club10, bool& spadeJack, bool& heartJack, bool& diamondJack, bool& clubJack, bool& spadeQueen, bool& heartQueen, bool& diamondQueen, bool& clubQueen, bool& spadeKing, bool& heartKing, bool& diamondKing, bool& clubKing, bool fstCard, bool sndCard, bool trdCard, bool fthCard, bool fftCard)
{
	int chance;
	int chanceColor;

	while (fstCard == true)
	{
	chance = rand() % 13 + 1;
	chanceColor = rand() % 4 + 1;
		if (chance == 1)
		{
			if (chanceColor == 1 && spadeAce == true)
			{
				firstCard = "SPADE ACE";
				spadeAce = false;
				break;
			}
			else if (chanceColor == 2 && heartAce == true)
			{
				firstCard = "HEART ACE";
				heartAce = false;
				break;
			}
			else if (chanceColor == 3 && diamondAce == true)
			{
				firstCard = "DIAMOND ACE";
				diamondAce = false;
				break;
			}
			else if (chanceColor == 4 && clubAce == true)
			{
				firstCard = "CLUB ACE";
				clubAce = false;
				break;
			}	
		}
		if (chance == 2)
		{
			if (chanceColor == 1 && spadeAce == true)
			{
				firstCard = "SPADE 2";
				spade2 = false;
				break;
			}
			else if (chanceColor == 2 && heartAce == true)
			{
				firstCard = "HEART 2";
				heart2 = false;
				break;
			}
			else if (chanceColor == 3 && diamondAce == true)
			{
				firstCard = "DIAMOND 2";
				diamond2 = false;
				break;
			}
			else if (chanceColor == 4 && clubAce == true)
			{
				firstCard = "CLUB 2";
				club2 = false;
				break;
			}
		}
		if (chance == 3)
		{
			if (chanceColor == 1 && spade3 == true)
			{
				firstCard = "SPADE 3";
				spade3 = false;
				break;
			}
			else if (chanceColor == 2 && heart3 == true)
			{
				firstCard = "HEART 3";
				heart3 = false;
				break;
			}
			else if (chanceColor == 3 && diamond3 == true)
			{
				firstCard = "DIAMOND 3";
				diamond3 = false;
				break;
			}
			else if (chanceColor == 4 && club3 == true)
			{
				firstCard = "CLUB 3";
				club3 = false;
				break;
			}
		}
		if (chance == 4)
		{
			if (chanceColor == 1 && spade4 == true)
			{
				firstCard = "SPADE 4";
				spade4 = false;
				break;
			}
			else if (chanceColor == 2 && heart4 == true)
			{
				firstCard = "HEART 4";
				heart4 = false;
				break;
			}
			else if (chanceColor == 3 && diamond4 == true)
			{
				firstCard = "DIAMOND 4";
				diamond4 = false;
				break;
			}
			else if (chanceColor == 4 && club4 == true)
			{
				firstCard = "CLUB 4";
				club4 = false;
				break;
			}
		}
		if (chance == 5)
		{
			if (chanceColor == 1 && spade5 == true)
			{
				firstCard = "SPADE 5";
				spade5 = false;
				break;
			}
			else if (chanceColor == 2 && heart5 == true)
			{
				firstCard = "HEART 5";
				heart5 = false;
				break;
			}
			else if (chanceColor == 3 && diamond5 == true)
			{
				firstCard = "DIAMOND 5";
				diamond5 = false;
				break;
			}
			else if (chanceColor == 4 && club5 == true)
			{
				firstCard = "CLUB 5";
				club5 = false;
				break;
			}
		}
		if (chance == 6)
		{
			if (chanceColor == 1 && spade6 == true)
			{
				firstCard = "SPADE 6";
				spade6 = false;
				break;
			}
			else if (chanceColor == 2 && heart6 == true)
			{
				firstCard = "HEART 6";
				heart6 = false;
				break;
			}
			else if (chanceColor == 3 && diamond6 == true)
			{
				firstCard = "DIAMOND 6";
				diamond6 = false;
				break;
			}
			else if (chanceColor == 4 && club6 == true)
			{
				firstCard = "CLUB 6";
				club6 = false;
				break;
			}
		}
		if (chance == 7)
		{
			if (chanceColor == 1 && spade7 == true)
			{
				firstCard = "SPADE 7";
				spade7 = false;
				break;
			}
			else if (chanceColor == 2 && heart7 == true)
			{
				firstCard = "HEART 7";
				heart7 = false;
				break;
			}
			else if (chanceColor == 3 && diamond7 == true)
			{
				firstCard = "DIAMOND 7";
				diamond7 = false;
				break;
			}
			else if (chanceColor == 4 && club7 == true)
			{
				firstCard = "CLUB 7";
				club7 = false;
				break;
			}
		}
		if (chance == 8)
		{
			if (chanceColor == 1 && spade8 == true)
			{
				firstCard = "SPADE 8";
				spade8 = false;
				break;
			}
			else if (chanceColor == 2 && heart8 == true)
			{
				firstCard = "HEART 8";
				heart8 = false;
				break;
			}
			else if (chanceColor == 3 && diamond8 == true)
			{
				firstCard = "DIAMOND 8";
				diamond8 = false;
				break;
			}
			else if (chanceColor == 4 && club8 == true)
			{
				firstCard = "CLUB 8";
				club8 = false;
				break;
			}
		}
		if (chance == 9)
		{
			if (chanceColor == 1 && spade9 == true)
			{
				firstCard = "SPADE 9";
				spade9 = false;
				break;
			}
			else if (chanceColor == 2 && heart9 == true)
			{
				firstCard = "HEART 9";
				heart9 = false;
				break;
			}
			else if (chanceColor == 3 && diamond9 == true)
			{
				firstCard = "DIAMOND 9";
				diamond9 = false;
				break;
			}
			else if (chanceColor == 4 && club9 == true)
			{
				firstCard = "CLUB 9";
				club9 = false;
				break;
			}
		}
		if (chance == 10)
		{
			if (chanceColor == 1 && spade10 == true)
			{
				firstCard = "SPADE 10";
				spade10 = false;
				break;
			}
			else if (chanceColor == 2 && heart10 == true)
			{
				firstCard = "HEART 10";
				heart10 = false;
				break;
			}
			else if (chanceColor == 3 && diamond10 == true)
			{
				firstCard = "DIAMOND 10";
				diamond10 = false;
				break;
			}
			else if (chanceColor == 4 && club10 == true)
			{
				firstCard = "CLUB 10";
				club10 = false;
				break;
			}
		}
		if (chance == 11)
		{
			if (chanceColor == 1 && spadeJack == true)
			{
				firstCard = "SPADE JACK";
				spadeJack = false;
				break;
			}
			else if (chanceColor == 2 && heartJack == true)
			{
				firstCard = "HEART JACK";
				heartJack = false;
				break;
			}
			else if (chanceColor == 3 && diamondJack == true)
			{
				firstCard = "DIAMOND JACK";
				diamondJack = false;
				break;
			}
			else if (chanceColor == 4 && clubJack == true)
			{
				firstCard = "CLUB JACK";
				clubJack = false;
				break;
			}
		}
		if (chance == 12)
		{
			if (chanceColor == 1 && spadeQueen == true)
			{
				firstCard = "SPADE QUEEN";
				spadeQueen = false;
				break;
			}
			else if (chanceColor == 2 && heartQueen == true)
			{
				firstCard = "HEART QUEEN";
				heartQueen = false;
				break;
			}
			else if (chanceColor == 3 && diamondQueen == true)
			{
				firstCard = "DIAMOND QUEEN";
				diamondQueen = false;
				break;
			}
			else if (chanceColor == 4 && clubQueen == true)
			{
				firstCard = "CLUB QUEEN";
				clubQueen = false;
				break;
			}
		}
		if (chance == 13)
		{
			if (chanceColor == 1 && spadeKing == true)
			{
				firstCard = "SPADE KING";
				spadeKing = false;
				break;
			}
			else if (chanceColor == 2 && heartKing == true)
			{
				firstCard = "HEART KING";
				heartKing = false;
				break;
			}
			else if (chanceColor == 3 && diamondKing == true)
			{
				firstCard = "DIAMOND KING";
				diamondKing = false;
				break;
			}
			else if (chanceColor == 4 && clubKing == true)
			{
				firstCard = "CLUB KING";
				clubKing = false;
				break;
			}
		}
	}
	while (sndCard==true)
	{
		chance = rand() % 13 + 1;
		chanceColor = rand() % 4 + 1;
		if (chance == 1)
		{
			if (chanceColor == 1 && spadeAce == true)
			{
				secondCard = "SPADE ACE";
				spadeAce = false;
				break;
			}
			else if (chanceColor == 2 && heartAce == true)
			{
				secondCard = "HEART ACE";
				heartAce = false;
				break;
			}
			else if (chanceColor == 3 && diamondAce == true)
			{
				secondCard = "DIAMOND ACE";
				diamondAce = false;
				break;
			}
			else if (chanceColor == 4 && clubAce == true)
			{
				secondCard = "CLUB ACE";
				clubAce = false;
				break;
			}
		}
		if (chance == 2)
		{
			if (chanceColor == 1 && spadeAce == true)
			{
				secondCard = "SPADE 2";
				spade2 = false;
				break;
			}
			else if (chanceColor == 2 && heartAce == true)
			{
				secondCard = "HEART 2";
				heart2 = false;
				break;
			}
			else if (chanceColor == 3 && diamondAce == true)
			{
				secondCard = "DIAMOND 2";
				diamond2 = false;
				break;
			}
			else if (chanceColor == 4 && clubAce == true)
			{
				secondCard = "CLUB 2";
				club2 = false;
				break;
			}
		}
		if (chance == 3)
		{
			if (chanceColor == 1 && spade3 == true)
			{
				secondCard = "SPADE 3";
				spade3 = false;
				break;
			}
			else if (chanceColor == 2 && heart3 == true)
			{
				secondCard = "HEART 3";
				heart3 = false;
				break;
			}
			else if (chanceColor == 3 && diamond3 == true)
			{
				secondCard = "DIAMOND 3";
				diamond3 = false;
				break;
			}
			else if (chanceColor == 4 && club3 == true)
			{
				secondCard = "CLUB 3";
				club3 = false;
				break;
			}
		}
		if (chance == 4)
		{
			if (chanceColor == 1 && spade4 == true)
			{
				secondCard = "SPADE 4";
				spade4 = false;
				break;
			}
			else if (chanceColor == 2 && heart4 == true)
			{
				secondCard = "HEART 4";
				heart4 = false;
				break;
			}
			else if (chanceColor == 3 && diamond4 == true)
			{
				secondCard = "DIAMOND 4";
				diamond4 = false;
				break;
			}
			else if (chanceColor == 4 && club4 == true)
			{
				secondCard = "CLUB 4";
				club4 = false;
				break;
			}
		}
		if (chance == 5)
		{
			if (chanceColor == 1 && spade5 == true)
			{
				secondCard = "SPADE 5";
				spade5 = false;
				break;
			}
			else if (chanceColor == 2 && heart5 == true)
			{
				secondCard = "HEART 5";
				heart5 = false;
				break;
			}
			else if (chanceColor == 3 && diamond5 == true)
			{
				secondCard = "DIAMOND 5";
				diamond5 = false;
				break;
			}
			else if (chanceColor == 4 && club5 == true)
			{
				secondCard = "CLUB 5";
				club5 = false;
				break;
			}
		}
		if (chance == 6)
		{
			if (chanceColor == 1 && spade6 == true)
			{
				secondCard = "SPADE 6";
				spade6 = false;
				break;
			}
			else if (chanceColor == 2 && heart6 == true)
			{
				secondCard = "HEART 6";
				heart6 = false;
				break;
			}
			else if (chanceColor == 3 && diamond6 == true)
			{
				secondCard = "DIAMOND 6";
				diamond6 = false;
				break;
			}
			else if (chanceColor == 4 && club6 == true)
			{
				secondCard = "CLUB 6";
				club6 = false;
				break;
			}
		}
		if (chance == 7)
		{
			if (chanceColor == 1 && spade7 == true)
			{
				secondCard = "SPADE 7";
				spade7 = false;
				break;
			}
			else if (chanceColor == 2 && heart7 == true)
			{
				secondCard = "HEART 7";
				heart7 = false;
				break;
			}
			else if (chanceColor == 3 && diamond7 == true)
			{
				secondCard = "DIAMOND 7";
				diamond7 = false;
				break;
			}
			else if (chanceColor == 4 && club7 == true)
			{
				secondCard = "CLUB 7";
				club7 = false;
				break;
			}
		}
		if (chance == 8)
		{
			if (chanceColor == 1 && spade8 == true)
			{
				secondCard = "SPADE 8";
				spade8 = false;
				break;
			}
			else if (chanceColor == 2 && heart8 == true)
			{
				secondCard = "HEART 8";
				heart8 = false;
				break;
			}
			else if (chanceColor == 3 && diamond8 == true)
			{
				secondCard = "DIAMOND 8";
				diamond8 = false;
				break;
			}
			else if (chanceColor == 4 && club8 == true)
			{
				secondCard = "CLUB 8";
				club8 = false;
				break;
			}
		}
		if (chance == 9)
		{
			if (chanceColor == 1 && spade9 == true)
			{
				secondCard = "SPADE 9";
				spade9 = false;
				break;
			}
			else if (chanceColor == 2 && heart9 == true)
			{
				secondCard = "HEART 9";
				heart9 = false;
				break;
			}
			else if (chanceColor == 3 && diamond9 == true)
			{
				secondCard = "DIAMOND 9";
				diamond9 = false;
				break;
			}
			else if (chanceColor == 4 && club9 == true)
			{
				secondCard = "CLUB 9";
				club9 = false;
				break;
			}
		}
		if (chance == 10)
		{
			if (chanceColor == 1 && spade10 == true)
			{
				secondCard = "SPADE 10";
				spade10 = false;
				break;
			}
			else if (chanceColor == 2 && heart10 == true)
			{
				secondCard = "HEART 10";
				heart10 = false;
				break;
			}
			else if (chanceColor == 3 && diamond10 == true)
			{
				secondCard = "DIAMOND 10";
				diamond10 = false;
				break;
			}
			else if (chanceColor == 4 && club10 == true)
			{
				secondCard = "CLUB 10";
				club10 = false;
				break;
			}
		}
		if (chance == 11)
		{
			if (chanceColor == 1 && spadeJack == true)
			{
				secondCard = "SPADE JACK";
				spadeJack = false;
				break;
			}
			else if (chanceColor == 2 && heartJack == true)
			{
				secondCard = "HEART JACK";
				heartJack = false;
				break;
			}
			else if (chanceColor == 3 && diamondJack == true)
			{
				secondCard = "DIAMOND JACK";
				diamondJack = false;
				break;
			}
			else if (chanceColor == 4 && clubJack == true)
			{
				secondCard = "CLUB JACK";
				clubJack = false;
				break;
			}
		}
		if (chance == 12)
		{
			if (chanceColor == 1 && spadeQueen == true)
			{
				secondCard = "SPADE QUEEN";
				spadeQueen = false;
				break;
			}
			else if (chanceColor == 2 && heartQueen == true)
			{
				secondCard = "HEART QUEEN";
				heartQueen = false;
				break;
			}
			else if (chanceColor == 3 && diamondQueen == true)
			{
				secondCard = "DIAMOND QUEEN";
				diamondQueen = false;
				break;
			}
			else if (chanceColor == 4 && clubQueen == true)
			{
				secondCard = "CLUB QUEEN";
				clubQueen = false;
				break;
			}
		}
		if (chance == 13)
		{
			if (chanceColor == 1 && spadeKing == true)
			{
				secondCard = "SPADE KING";
				spadeKing = false;
				break;
			}
			else if (chanceColor == 2 && heartKing == true)
			{
				secondCard = "HEART KING";
				heartKing = false;
				break;
			}
			else if (chanceColor == 3 && diamondKing == true)
			{
				secondCard = "DIAMOND KING";
				diamondKing = false;
				break;
			}
			else if (chanceColor == 4 && clubKing == true)
			{
				secondCard = "CLUB KING";
				clubKing = false;
				break;
			}
		}
	}
	while (trdCard==true)
	{
		chance = rand() % 13 + 1;
		chanceColor = rand() % 4 + 1;
		if (chance == 1)
		{
			if (chanceColor == 1 && spadeAce == true)
			{
				thirdCard = "SPADE ACE";
				spadeAce = false;
				break;
			}
			else if (chanceColor == 2 && heartAce == true)
			{
				thirdCard = "HEART ACE";
				heartAce = false;
				break;
			}
			else if (chanceColor == 3 && diamondAce == true)
			{
				thirdCard = "DIAMOND ACE";
				diamondAce = false;
				break;
			}
			else if (chanceColor == 4 && clubAce == true)
			{
				thirdCard = "CLUB ACE";
				clubAce = false;
				break;
			}
		}
		if (chance == 2)
		{
			if (chanceColor == 1 && spadeAce == true)
			{
				thirdCard = "SPADE 2";
				spade2 = false;
				break;
			}
			else if (chanceColor == 2 && heartAce == true)
			{
				thirdCard = "HEART 2";
				heart2 = false;
				break;
			}
			else if (chanceColor == 3 && diamondAce == true)
			{
				thirdCard = "DIAMOND 2";
				diamond2 = false;
				break;
			}
			else if (chanceColor == 4 && clubAce == true)
			{
				thirdCard = "CLUB 2";
				club2 = false;
				break;
			}
		}
		if (chance == 3)
		{
			if (chanceColor == 1 && spade3 == true)
			{
				thirdCard = "SPADE 3";
				spade3 = false;
				break;
			}
			else if (chanceColor == 2 && heart3 == true)
			{
				thirdCard = "HEART 3";
				heart3 = false;
				break;
			}
			else if (chanceColor == 3 && diamond3 == true)
			{
				thirdCard = "DIAMOND 3";
				diamond3 = false;
				break;
			}
			else if (chanceColor == 4 && club3 == true)
			{
				thirdCard = "CLUB 3";
				club3 = false;
				break;
			}
		}
		if (chance == 4)
		{
			if (chanceColor == 1 && spade4 == true)
			{
				thirdCard = "SPADE 4";
				spade4 = false;
				break;
			}
			else if (chanceColor == 2 && heart4 == true)
			{
				thirdCard = "HEART 4";
				heart4 = false;
				break;
			}
			else if (chanceColor == 3 && diamond4 == true)
			{
				thirdCard = "DIAMOND 4";
				diamond4 = false;
				break;
			}
			else if (chanceColor == 4 && club4 == true)
			{
				thirdCard = "CLUB 4";
				club4 = false;
				break;
			}
		}
		if (chance == 5)
		{
			if (chanceColor == 1 && spade5 == true)
			{
				thirdCard = "SPADE 5";
				spade5 = false;
				break;
			}
			else if (chanceColor == 2 && heart5 == true)
			{
				thirdCard = "HEART 5";
				heart5 = false;
				break;
			}
			else if (chanceColor == 3 && diamond5 == true)
			{
				thirdCard = "DIAMOND 5";
				diamond5 = false;
				break;
			}
			else if (chanceColor == 4 && club5 == true)
			{
				thirdCard = "CLUB 5";
				club5 = false;
				break;
			}
		}
		if (chance == 6)
		{
			if (chanceColor == 1 && spade6 == true)
			{
				thirdCard = "SPADE 6";
				spade6 = false;
				break;
			}
			else if (chanceColor == 2 && heart6 == true)
			{
				thirdCard = "HEART 6";
				heart6 = false;
				break;
			}
			else if (chanceColor == 3 && diamond6 == true)
			{
				thirdCard = "DIAMOND 6";
				diamond6 = false;
				break;
			}
			else if (chanceColor == 4 && club6 == true)
			{
				thirdCard = "CLUB 6";
				club6 = false;
				break;
			}
		}
		if (chance == 7)
		{
			if (chanceColor == 1 && spade7 == true)
			{
				thirdCard = "SPADE 7";
				spade7 = false;
				break;
			}
			else if (chanceColor == 2 && heart7 == true)
			{
				thirdCard = "HEART 7";
				heart7 = false;
				break;
			}
			else if (chanceColor == 3 && diamond7 == true)
			{
				thirdCard = "DIAMOND 7";
				diamond7 = false;
				break;
			}
			else if (chanceColor == 4 && club7 == true)
			{
				thirdCard = "CLUB 7";
				club7 = false;
				break;
			}
		}
		if (chance == 8)
		{
			if (chanceColor == 1 && spade8 == true)
			{
				thirdCard = "SPADE 8";
				spade8 = false;
				break;
			}
			else if (chanceColor == 2 && heart8 == true)
			{
				thirdCard = "HEART 8";
				heart8 = false;
				break;
			}
			else if (chanceColor == 3 && diamond8 == true)
			{
				thirdCard = "DIAMOND 8";
				diamond8 = false;
				break;
			}
			else if (chanceColor == 4 && club8 == true)
			{
				thirdCard = "CLUB 8";
				club8 = false;
				break;
			}
		}
		if (chance == 9)
		{
			if (chanceColor == 1 && spade9 == true)
			{
				thirdCard = "SPADE 9";
				spade9 = false;
				break;
			}
			else if (chanceColor == 2 && heart9 == true)
			{
				thirdCard = "HEART 9";
				heart9 = false;
				break;
			}
			else if (chanceColor == 3 && diamond9 == true)
			{
				thirdCard = "DIAMOND 9";
				diamond9 = false;
				break;
			}
			else if (chanceColor == 4 && club9 == true)
			{
				thirdCard = "CLUB 9";
				club9 = false;
				break;
			}
		}
		if (chance == 10)
		{
			if (chanceColor == 1 && spade10 == true)
			{
				thirdCard = "SPADE 10";
				spade10 = false;
				break;
			}
			else if (chanceColor == 2 && heart10 == true)
			{
				thirdCard = "HEART 10";
				heart10 = false;
				break;
			}
			else if (chanceColor == 3 && diamond10 == true)
			{
				thirdCard = "DIAMOND 10";
				diamond10 = false;
				break;
			}
			else if (chanceColor == 4 && club10 == true)
			{
				thirdCard = "CLUB 10";
				club10 = false;
				break;
			}
		}
		if (chance == 11)
		{
			if (chanceColor == 1 && spadeJack == true)
			{
				thirdCard = "SPADE JACK";
				spadeJack = false;
				break;
			}
			else if (chanceColor == 2 && heartJack == true)
			{
				thirdCard = "HEART JACK";
				heartJack = false;
				break;
			}
			else if (chanceColor == 3 && diamondJack == true)
			{
				thirdCard = "DIAMOND JACK";
				diamondJack = false;
				break;
			}
			else if (chanceColor == 4 && clubJack == true)
			{
				thirdCard = "CLUB JACK";
				clubJack = false;
				break;
			}
		}
		if (chance == 12)
		{
			if (chanceColor == 1 && spadeQueen == true)
			{
				thirdCard = "SPADE QUEEN";
				spadeQueen = false;
				break;
			}
			else if (chanceColor == 2 && heartQueen == true)
			{
				thirdCard = "HEART QUEEN";
				heartQueen = false;
				break;
			}
			else if (chanceColor == 3 && diamondQueen == true)
			{
				thirdCard = "DIAMOND QUEEN";
				diamondQueen = false;
				break;
			}
			else if (chanceColor == 4 && clubQueen == true)
			{
				thirdCard = "CLUB QUEEN";
				clubQueen = false;
				break;
			}
		}
		if (chance == 13)
		{
			if (chanceColor == 1 && spadeKing == true)
			{
				thirdCard = "SPADE KING";
				spadeKing = false;
				break;
			}
			else if (chanceColor == 2 && heartKing == true)
			{
				thirdCard = "HEART KING";
				heartKing = false;
				break;
			}
			else if (chanceColor == 3 && diamondKing == true)
			{
				thirdCard = "DIAMOND KING";
				diamondKing = false;
				break;
			}
			else if (chanceColor == 4 && clubKing == true)
			{
				thirdCard = "CLUB KING";
				clubKing = false;
				break;
			}
		}
	}
	while (fthCard==true)
	{
		chance = rand() % 13 + 1;
		chanceColor = rand() % 4 + 1;
		if (chance == 1)
		{
			if (chanceColor == 1 && spadeAce == true)
			{
				fourthCard = "SPADE ACE";
				spadeAce = false;
				break;
			}
			else if (chanceColor == 2 && heartAce == true)
			{
				fourthCard = "HEART ACE";
				heartAce = false;
				break;
			}
			else if (chanceColor == 3 && diamondAce == true)
			{
				fourthCard = "DIAMOND ACE";
				diamondAce = false;
				break;
			}
			else if (chanceColor == 4 && clubAce == true)
			{
				fourthCard = "CLUB ACE";
				clubAce = false;
				break;
			}
		}
		if (chance == 2)
		{
			if (chanceColor == 1 && spadeAce == true)
			{
				fourthCard = "SPADE 2";
				spade2 = false;
				break;
			}
			else if (chanceColor == 2 && heartAce == true)
			{
				fourthCard = "HEART 2";
				heart2 = false;
				break;
			}
			else if (chanceColor == 3 && diamondAce == true)
			{
				fourthCard = "DIAMOND 2";
				diamond2 = false;
				break;
			}
			else if (chanceColor == 4 && clubAce == true)
			{
				fourthCard = "CLUB 2";
				club2 = false;
				break;
			}
		}
		if (chance == 3)
		{
			if (chanceColor == 1 && spade3 == true)
			{
				fourthCard = "SPADE 3";
				spade3 = false;
				break;
			}
			else if (chanceColor == 2 && heart3 == true)
			{
				fourthCard = "HEART 3";
				heart3 = false;
				break;
			}
			else if (chanceColor == 3 && diamond3 == true)
			{
				fourthCard = "DIAMOND 3";
				diamond3 = false;
				break;
			}
			else if (chanceColor == 4 && club3 == true)
			{
				fourthCard = "CLUB 3";
				club3 = false;
				break;
			}
		}
		if (chance == 4)
		{
			if (chanceColor == 1 && spade4 == true)
			{
				fourthCard = "SPADE 4";
				spade4 = false;
				break;
			}
			else if (chanceColor == 2 && heart4 == true)
			{
				fourthCard = "HEART 4";
				heart4 = false;
				break;
			}
			else if (chanceColor == 3 && diamond4 == true)
			{
				fourthCard = "DIAMOND 4";
				diamond4 = false;
				break;
			}
			else if (chanceColor == 4 && club4 == true)
			{
				fourthCard = "CLUB 4";
				club4 = false;
				break;
			}
		}
		if (chance == 5)
		{
			if (chanceColor == 1 && spade5 == true)
			{
				fourthCard = "SPADE 5";
				spade5 = false;
				break;
			}
			else if (chanceColor == 2 && heart5 == true)
			{
				fourthCard = "HEART 5";
				heart5 = false;
				break;
			}
			else if (chanceColor == 3 && diamond5 == true)
			{
				fourthCard = "DIAMOND 5";
				diamond5 = false;
				break;
			}
			else if (chanceColor == 4 && club5 == true)
			{
				fourthCard = "CLUB 5";
				club5 = false;
				break;
			}
		}
		if (chance == 6)
		{
			if (chanceColor == 1 && spade6 == true)
			{
				fourthCard = "SPADE 6";
				spade6 = false;
				break;
			}
			else if (chanceColor == 2 && heart6 == true)
			{
				fourthCard = "HEART 6";
				heart6 = false;
				break;
			}
			else if (chanceColor == 3 && diamond6 == true)
			{
				fourthCard = "DIAMOND 6";
				diamond6 = false;
				break;
			}
			else if (chanceColor == 4 && club6 == true)
			{
				fourthCard = "CLUB 6";
				club6 = false;
				break;
			}
		}
		if (chance == 7)
		{
			if (chanceColor == 1 && spade7 == true)
			{
				fourthCard = "SPADE 7";
				spade7 = false;
				break;
			}
			else if (chanceColor == 2 && heart7 == true)
			{
				fourthCard = "HEART 7";
				heart7 = false;
				break;
			}
			else if (chanceColor == 3 && diamond7 == true)
			{
				fourthCard = "DIAMOND 7";
				diamond7 = false;
				break;
			}
			else if (chanceColor == 4 && club7 == true)
			{
				fourthCard = "CLUB 7";
				club7 = false;
				break;
			}
		}
		if (chance == 8)
		{
			if (chanceColor == 1 && spade8 == true)
			{
				fourthCard = "SPADE 8";
				spade8 = false;
				break;
			}
			else if (chanceColor == 2 && heart8 == true)
			{
				fourthCard = "HEART 8";
				heart8 = false;
				break;
			}
			else if (chanceColor == 3 && diamond8 == true)
			{
				fourthCard = "DIAMOND 8";
				diamond8 = false;
				break;
			}
			else if (chanceColor == 4 && club8 == true)
			{
				fourthCard = "CLUB 8";
				club8 = false;
				break;
			}
		}
		if (chance == 9)
		{
			if (chanceColor == 1 && spade9 == true)
			{
				fourthCard = "SPADE 9";
				spade9 = false;
				break;
			}
			else if (chanceColor == 2 && heart9 == true)
			{
				fourthCard = "HEART 9";
				heart9 = false;
				break;
			}
			else if (chanceColor == 3 && diamond9 == true)
			{
				fourthCard = "DIAMOND 9";
				diamond9 = false;
				break;
			}
			else if (chanceColor == 4 && club9 == true)
			{
				fourthCard = "CLUB 9";
				club9 = false;
				break;
			}
		}
		if (chance == 10)
		{
			if (chanceColor == 1 && spade10 == true)
			{
				fourthCard = "SPADE 10";
				spade10 = false;
				break;
			}
			else if (chanceColor == 2 && heart10 == true)
			{
				fourthCard = "HEART 10";
				heart10 = false;
				break;
			}
			else if (chanceColor == 3 && diamond10 == true)
			{
				fourthCard = "DIAMOND 10";
				diamond10 = false;
				break;
			}
			else if (chanceColor == 4 && club10 == true)
			{
				fourthCard = "CLUB 10";
				club10 = false;
				break;
			}
		}
		if (chance == 11)
		{
			if (chanceColor == 1 && spadeJack == true)
			{
				fourthCard = "SPADE JACK";
				spadeJack = false;
				break;
			}
			else if (chanceColor == 2 && heartJack == true)
			{
				fourthCard = "HEART JACK";
				heartJack = false;
				break;
			}
			else if (chanceColor == 3 && diamondJack == true)
			{
				fourthCard = "DIAMOND JACK";
				diamondJack = false;
				break;
			}
			else if (chanceColor == 4 && clubJack == true)
			{
				fourthCard = "CLUB JACK";
				clubJack = false;
				break;
			}
		}
		if (chance == 12)
		{
			if (chanceColor == 1 && spadeQueen == true)
			{
				fourthCard = "SPADE QUEEN";
				spadeQueen = false;
				break;
			}
			else if (chanceColor == 2 && heartQueen == true)
			{
				fourthCard = "HEART QUEEN";
				heartQueen = false;
				break;
			}
			else if (chanceColor == 3 && diamondQueen == true)
			{
				fourthCard = "DIAMOND QUEEN";
				diamondQueen = false;
				break;
			}
			else if (chanceColor == 4 && clubQueen == true)
			{
				fourthCard = "CLUB QUEEN";
				clubQueen = false;
				break;
			}
		}
		if (chance == 13)
		{
			if (chanceColor == 1 && spadeKing == true)
			{
				fourthCard = "SPADE KING";
				spadeKing = false;
				break;
			}
			else if (chanceColor == 2 && heartKing == true)
			{
				fourthCard = "HEART KING";
				heartKing = false;
				break;
			}
			else if (chanceColor == 3 && diamondKing == true)
			{
				fourthCard = "DIAMOND KING";
				diamondKing = false;
				break;
			}
			else if (chanceColor == 4 && clubKing == true)
			{
				fourthCard = "CLUB KING";
				clubKing = false;
				break;
			}
		}
	}
	while (fftCard==true)
	{
		chance = rand() % 13 + 1;
		chanceColor = rand() % 4 + 1;
		if (chance == 1)
		{
			if (chanceColor == 1 && spadeAce == true)
			{
				fivethCard = "SPADE ACE";
				spadeAce = false;
				break;
			}
			else if (chanceColor == 2 && heartAce == true)
			{
				fivethCard = "HEART ACE";
				heartAce = false;
				break;
			}
			else if (chanceColor == 3 && diamondAce == true)
			{
				fivethCard = "DIAMOND ACE";
				diamondAce = false;
				break;
			}
			else if (chanceColor == 4 && clubAce == true)
			{
				fivethCard = "CLUB ACE";
				clubAce = false;
				break;
			}
		}
		if (chance == 2)
		{
			if (chanceColor == 1 && spadeAce == true)
			{
				fivethCard = "SPADE 2";
				spade2 = false;
				break;
			}
			else if (chanceColor == 2 && heartAce == true)
			{
				fivethCard = "HEART 2";
				heart2 = false;
				break;
			}
			else if (chanceColor == 3 && diamondAce == true)
			{
				fivethCard = "DIAMOND 2";
				diamond2 = false;
				break;
			}
			else if (chanceColor == 4 && clubAce == true)
			{
				fivethCard = "CLUB 2";
				club2 = false;
				break;
			}
		}
		if (chance == 3)
		{
			if (chanceColor == 1 && spade3 == true)
			{
				fivethCard = "SPADE 3";
				spade3 = false;
				break;
			}
			else if (chanceColor == 2 && heart3 == true)
			{
				fivethCard = "HEART 3";
				heart3 = false;
				break;
			}
			else if (chanceColor == 3 && diamond3 == true)
			{
				fivethCard = "DIAMOND 3";
				diamond3 = false;
				break;
			}
			else if (chanceColor == 4 && club3 == true)
			{
				fivethCard = "CLUB 3";
				club3 = false;
				break;
			}
		}
		if (chance == 4)
		{
			if (chanceColor == 1 && spade4 == true)
			{
				fivethCard = "SPADE 4";
				spade4 = false;
				break;
			}
			else if (chanceColor == 2 && heart4 == true)
			{
				fivethCard = "HEART 4";
				heart4 = false;
				break;
			}
			else if (chanceColor == 3 && diamond4 == true)
			{
				fivethCard = "DIAMOND 4";
				diamond4 = false;
				break;
			}
			else if (chanceColor == 4 && club4 == true)
			{
				fivethCard = "CLUB 4";
				club4 = false;
				break;
			}
		}
		if (chance == 5)
		{
			if (chanceColor == 1 && spade5 == true)
			{
				fivethCard = "SPADE 5";
				spade5 = false;
				break;
			}
			else if (chanceColor == 2 && heart5 == true)
			{
				fivethCard = "HEART 5";
				heart5 = false;
				break;
			}
			else if (chanceColor == 3 && diamond5 == true)
			{
				fivethCard = "DIAMOND 5";
				diamond5 = false;
				break;
			}
			else if (chanceColor == 4 && club5 == true)
			{
				fivethCard = "CLUB 5";
				club5 = false;
				break;
			}
		}
		if (chance == 6)
		{
			if (chanceColor == 1 && spade6 == true)
			{
				fivethCard = "SPADE 6";
				spade6 = false;
				break;
			}
			else if (chanceColor == 2 && heart6 == true)
			{
				fivethCard = "HEART 6";
				heart6 = false;
				break;
			}
			else if (chanceColor == 3 && diamond6 == true)
			{
				fivethCard = "DIAMOND 6";
				diamond6 = false;
				break;
			}
			else if (chanceColor == 4 && club6 == true)
			{
				fivethCard = "CLUB 6";
				club6 = false;
				break;
			}
		}
		if (chance == 7)
		{
			if (chanceColor == 1 && spade7 == true)
			{
				fivethCard = "SPADE 7";
				spade7 = false;
				break;
			}
			else if (chanceColor == 2 && heart7 == true)
			{
				fivethCard = "HEART 7";
				heart7 = false;
				break;
			}
			else if (chanceColor == 3 && diamond7 == true)
			{
				fivethCard = "DIAMOND 7";
				diamond7 = false;
				break;
			}
			else if (chanceColor == 4 && club7 == true)
			{
				fivethCard = "CLUB 7";
				club7 = false;
				break;
			}
		}
		if (chance == 8)
		{
			if (chanceColor == 1 && spade8 == true)
			{
				fivethCard = "SPADE 8";
				spade8 = false;
				break;
			}
			else if (chanceColor == 2 && heart8 == true)
			{
				fivethCard = "HEART 8";
				heart8 = false;
				break;
			}
			else if (chanceColor == 3 && diamond8 == true)
			{
				fivethCard = "DIAMOND 8";
				diamond8 = false;
				break;
			}
			else if (chanceColor == 4 && club8 == true)
			{
				fivethCard = "CLUB 8";
				club8 = false;
				break;
			}
		}
		if (chance == 9)
		{
			if (chanceColor == 1 && spade9 == true)
			{
				fivethCard = "SPADE 9";
				spade9 = false;
				break;
			}
			else if (chanceColor == 2 && heart9 == true)
			{
				fivethCard = "HEART 9";
				heart9 = false;
				break;
			}
			else if (chanceColor == 3 && diamond9 == true)
			{
				fivethCard = "DIAMOND 9";
				diamond9 = false;
				break;
			}
			else if (chanceColor == 4 && club9 == true)
			{
				fivethCard = "CLUB 9";
				club9 = false;
				break;
			}
		}
		if (chance == 10)
		{
			if (chanceColor == 1 && spade10 == true)
			{
				fivethCard = "SPADE 10";
				spade10 = false;
				break;
			}
			else if (chanceColor == 2 && heart10 == true)
			{
				fivethCard = "HEART 10";
				heart10 = false;
				break;
			}
			else if (chanceColor == 3 && diamond10 == true)
			{
				fivethCard = "DIAMOND 10";
				diamond10 = false;
				break;
			}
			else if (chanceColor == 4 && club10 == true)
			{
				fivethCard = "CLUB 10";
				club10 = false;
				break;
			}
		}
		if (chance == 11)
		{
			if (chanceColor == 1 && spadeJack == true)
			{
				fivethCard = "SPADE JACK";
				spadeJack = false;
				break;
			}
			else if (chanceColor == 2 && heartJack == true)
			{
				fivethCard = "HEART JACK";
				heartJack = false;
				break;
			}
			else if (chanceColor == 3 && diamondJack == true)
			{
				fivethCard = "DIAMOND JACK";
				diamondJack = false;
				break;
			}
			else if (chanceColor == 4 && clubJack == true)
			{
				fivethCard = "CLUB JACK";
				clubJack = false;
				break;
			}
		}
		if (chance == 12)
		{
			if (chanceColor == 1 && spadeQueen == true)
			{
				fivethCard = "SPADE QUEEN";
				spadeQueen = false;
				break;
			}
			else if (chanceColor == 2 && heartQueen == true)
			{
				fivethCard = "HEART QUEEN";
				heartQueen = false;
				break;
			}
			else if (chanceColor == 3 && diamondQueen == true)
			{
				fivethCard = "DIAMOND QUEEN";
				diamondQueen = false;
				break;
			}
			else if (chanceColor == 4 && clubQueen == true)
			{
				fivethCard = "CLUB QUEEN";
				clubQueen = false;
				break;
			}
		}
		if (chance == 13)
		{
			if (chanceColor == 1 && spadeKing == true)
			{
				fivethCard = "SPADE KING";
				spadeKing = false;
				break;
			}
			else if (chanceColor == 2 && heartKing == true)
			{
				fivethCard = "HEART KING";
				heartKing = false;
				break;
			}
			else if (chanceColor == 3 && diamondKing == true)
			{
				fivethCard = "DIAMOND KING";
				diamondKing = false;
				break;
			}
			else if (chanceColor == 4 && clubKing == true)
			{
				fivethCard = "CLUB KING";
				clubKing = false;
				break;
			}
		}
	}
}

void transformCardsName(string &cardName)
{
	if (cardName == "SPADE ACE")
		cardName = "ACE";
	if (cardName == "HEART ACE")
		cardName = "ACE";
	if (cardName == "DIAMOND ACE")
		cardName = "ACE";
	if (cardName == "CLUB ACE")
		cardName = "ACE";

	if (cardName == "SPADE 2")
		cardName = "2";
	if (cardName == "HEART 2")
		cardName = "2";
	if (cardName == "DIAMOND 2")
		cardName = "2";
	if (cardName == "CLUB 2")
		cardName = "2";

	if (cardName == "SPADE 3")
		cardName = "3";
	if (cardName == "HEART 3")
		cardName = "3";
	if (cardName == "DIAMOND 3")
		cardName = "3";
	if (cardName == "CLUB 3")
		cardName = "3";

	if (cardName == "SPADE 4")
		cardName = "4";
	if (cardName == "HEART 4")
		cardName = "4";
	if (cardName == "DIAMOND 4")
		cardName = "4";
	if (cardName == "CLUB 4")
		cardName = "4";

	if (cardName == "SPADE 5")
		cardName = "5";
	if (cardName == "HEART 5")
		cardName = "5";
	if (cardName == "DIAMOND 5")
		cardName = "5";
	if (cardName == "CLUB 5")
		cardName = "5";

	if (cardName == "SPADE 6")
		cardName = "6";
	if (cardName == "HEART 6")
		cardName = "6";
	if (cardName == "DIAMOND 6")
		cardName = "6";
	if (cardName == "CLUB 6")
		cardName = "6";

	if (cardName == "SPADE 7")
		cardName = "7";
	if (cardName == "HEART 7")
		cardName = "7";
	if (cardName == "DIAMOND 7")
		cardName = "7";
	if (cardName == "CLUB 7")
		cardName = "7";

	if (cardName == "SPADE 8")
		cardName = "8";
	if (cardName == "HEART 8")
		cardName = "8";
	if (cardName == "DIAMOND 8")
		cardName = "8";
	if (cardName == "CLUB 8")
		cardName = "8";

	if (cardName == "SPADE 9")
		cardName = "9";
	if (cardName == "HEART 9")
		cardName = "9";
	if (cardName == "DIAMOND 9")
		cardName = "9";
	if (cardName == "CLUB 9")
		cardName = "9";

	if (cardName == "SPADE 10")
		cardName = "10";
	if (cardName == "HEART 10")
		cardName = "10";
	if (cardName == "DIAMOND 10")
		cardName = "10";
	if (cardName == "CLUB 10")
		cardName = "10";

	if (cardName == "SPADE JACK")
		cardName = "JACK";
	if (cardName == "HEART JACK")
		cardName = "JACK";
	if (cardName == "DIAMOND JACK")
		cardName = "JACK";
	if (cardName == "CLUB JACK")
		cardName = "JACK";

	if (cardName == "SPADE QUEEN")
		cardName = "QUEEN";
	if (cardName == "HEART QUEEN")
		cardName = "QUEEN";
	if (cardName == "DIAMOND QUEEN")
		cardName = "QUEEN";
	if (cardName == "CLUB QUEEN")
		cardName = "QUEEN";

	if (cardName == "SPADE KING")
		cardName = "KING";
	if (cardName == "HEART KING")
		cardName = "KING";
	if (cardName == "DIAMOND KING")
		cardName = "KING";
	if (cardName == "CLUB KING")
		cardName = "KING";
}

void transformCardsColor(string cardName)
{
	if (cardName == "SPADE ACE")
		cardName = "SPADE";
	if (cardName == "HEART ACE")
		cardName = "HEART";
	if (cardName == "DIAMOND ACE")
		cardName = "DIAMOND";
	if (cardName == "CLUB ACE")
		cardName = "CLUB";

	if (cardName == "SPADE 2")
		cardName = "SPADE";
	if (cardName == "HEART 2")
		cardName = "HEART";
	if (cardName == "DIAMOND 2")
		cardName = "DIAMOND";
	if (cardName == "CLUB 2")
		cardName = "CLUB";

	if (cardName == "SPADE 3")
		cardName = "SPADE";
	if (cardName == "HEART 3")
		cardName = "HEART";
	if (cardName == "DIAMOND 3")
		cardName = "DIAMOND";
	if (cardName == "CLUB 3")
		cardName = "CLUB";

	if (cardName == "SPADE 4")
		cardName = "SPADE";
	if (cardName == "HEART 4")
		cardName = "HEART";
	if (cardName == "DIAMOND 4")
		cardName = "DIAMOND";
	if (cardName == "CLUB 4")
		cardName = "CLUB";

	if (cardName == "SPADE 5")
		cardName = "SPADE";
	if (cardName == "HEART 5")
		cardName = "HEART";
	if (cardName == "DIAMOND 5")
		cardName = "DIAMOND";
	if (cardName == "CLUB 5")
		cardName = "CLUB";

	if (cardName == "SPADE 6")
		cardName = "SPADE";
	if (cardName == "HEART 6")
		cardName = "HEART";
	if (cardName == "DIAMOND 6")
		cardName = "DIAMOND";
	if (cardName == "CLUB 6")
		cardName = "CLUB";

	if (cardName == "SPADE 7")
		cardName = "SPADE";
	if (cardName == "HEART 7")
		cardName = "HEART";
	if (cardName == "DIAMOND 7")
		cardName = "DIAMOND";
	if (cardName == "CLUB 7")
		cardName = "CLUB";

	if (cardName == "SPADE 8")
		cardName = "SPADE";
	if (cardName == "HEART 8")
		cardName = "HEART";
	if (cardName == "DIAMOND 8")
		cardName = "DIAMOND";
	if (cardName == "CLUB 8")
		cardName = "CLUB";

	if (cardName == "SPADE 9")
		cardName = "SPADE";
	if (cardName == "HEART 9")
		cardName = "HEART";
	if (cardName == "DIAMOND 9")
		cardName = "DIAMOND";
	if (cardName == "CLUB 9")
		cardName = "CLUB";

	if (cardName == "SPADE 10")
		cardName = "SPADE";
	if (cardName == "HEART 10")
		cardName = "HEART";
	if (cardName == "DIAMOND 10")
		cardName = "DIAMOND";
	if (cardName == "CLUB 10")
		cardName = "CLUB";

	if (cardName == "SPADE JACK")
		cardName = "SPADE";
	if (cardName == "HEART JACK")
		cardName = "HEART";
	if (cardName == "DIAMOND JACK")
		cardName = "DIAMOND";
	if (cardName == "CLUB JACK")
		cardName = "CLUB";

	if (cardName == "SPADE QUEEN")
		cardName = "SPADE";
	if (cardName == "HEART QUEEN")
		cardName = "HEART";
	if (cardName == "DIAMOND QUEEN")
		cardName = "DIAMOND";
	if (cardName == "CLUB QUEEN")
		cardName = "CLUB";

	if (cardName == "SPADE KING")
		cardName = "SPADE";
	if (cardName == "HEART KING")
		cardName = "HEART";
	if (cardName == "DIAMOND KING")
		cardName = "DIAMOND";
	if (cardName == "CLUB KING")
		cardName = "CLUB";
}

void checkCardsDifferentColor(string firstCard, string secondCard, string thirdCard, string fourthCard, string fivethCard, int& counter)
{
	bool wasTwoPair = false;

	if ((firstCard == secondCard && thirdCard == fourthCard) || (firstCard == secondCard && thirdCard == fivethCard) || (secondCard == thirdCard && firstCard == fourthCard) || (secondCard == thirdCard && firstCard == fivethCard) || (thirdCard == fourthCard && firstCard == secondCard) || (thirdCard == fourthCard && firstCard == fivethCard) || (fourthCard == fivethCard && firstCard == secondCard) || (fourthCard == fivethCard && firstCard == thirdCard))
	{
		cout << endl << "TWO PAIR" << endl;
		counter++;
		wasTwoPair = true;
	}
	if (firstCard == secondCard || firstCard == thirdCard || firstCard == fourthCard || firstCard == fivethCard || secondCard == thirdCard || secondCard == fourthCard || secondCard == fivethCard || thirdCard == fourthCard || thirdCard == fivethCard || fourthCard == fivethCard)
	{
		if (wasTwoPair == false)
		{
			cout << endl << "ONE PAIR" << endl;
			counter++;
		}
	}
	if ((firstCard == secondCard && firstCard == thirdCard && fourthCard != fivethCard) || (firstCard == thirdCard && firstCard == fourthCard && secondCard != fivethCard) || (firstCard == fourthCard && firstCard == fivethCard && secondCard != thirdCard) || (secondCard == firstCard && secondCard == thirdCard && fourthCard != fivethCard) || (secondCard == thirdCard && secondCard == fourthCard && firstCard != fivethCard) || (secondCard == fourthCard && secondCard == fivethCard && firstCard != thirdCard))
	{
		cout << endl << "THREE OF KIND" << endl;
		counter++;
	}
	if (((firstCard != secondCard && secondCard != thirdCard && thirdCard != fourthCard && fourthCard != fivethCard && fivethCard != firstCard) && (firstCard == "2" || firstCard == "3" || firstCard == "4" || firstCard == "5" || firstCard == "6") && (secondCard == "2" || secondCard == "3" || secondCard == "4" || secondCard == "5" || secondCard == "6") && (thirdCard == "2" || thirdCard == "3" || thirdCard == "4" || thirdCard == "5" || thirdCard == "6") && (fourthCard == "2" || fourthCard == "3" || fourthCard == "4" || fourthCard == "5" || fourthCard == "6") && (fivethCard == "2" || fivethCard == "3" || fivethCard == "4" || fivethCard == "5" || fivethCard == "6")) || ((firstCard != secondCard && secondCard != thirdCard && thirdCard != fourthCard && fourthCard != fivethCard && fivethCard != firstCard) && (firstCard == "3" || firstCard == "4" || firstCard == "5" || firstCard == "6" || firstCard == "7") && (secondCard == "3" || secondCard == "4" || secondCard == "5" || secondCard == "6" || secondCard == "7") && (thirdCard == "3" || thirdCard == "4" || thirdCard == "5" || thirdCard == "6" || thirdCard == "7") && (fourthCard == "3" || fourthCard == "4" || fourthCard == "5" || fourthCard == "6" || fourthCard == "7") && (fivethCard == "3" || fivethCard == "4" || fivethCard == "5" || fivethCard == "6" || fivethCard == "7")) || ((firstCard != secondCard && secondCard != thirdCard && thirdCard != fourthCard && fourthCard != fivethCard && fivethCard != firstCard) && (firstCard == "4" || firstCard == "5" || firstCard == "6" || firstCard == "7" || firstCard == "8") && (secondCard == "4" || secondCard == "5" || secondCard == "6" || secondCard == "7" || secondCard == "8") && (thirdCard == "4" || thirdCard == "5" || thirdCard == "6" || thirdCard == "7" || thirdCard == "8") && (fourthCard == "4" || fourthCard == "5" || fourthCard == "6" || fourthCard == "7" || fourthCard == "8") && (fivethCard == "4" || fivethCard == "5" || fivethCard == "6" || fivethCard == "7" || fivethCard == "8")) || ((firstCard != secondCard && secondCard != thirdCard && thirdCard != fourthCard && fourthCard != fivethCard && fivethCard != firstCard) && (firstCard == "5" || firstCard == "6" || firstCard == "7" || firstCard == "8" || firstCard == "9") && (secondCard == "5" || secondCard == "6" || secondCard == "7" || secondCard == "8" || secondCard == "9") && (thirdCard == "5" || thirdCard == "6" || thirdCard == "7" || thirdCard == "8" || thirdCard == "9") && (fourthCard == "5" || fourthCard == "6" || fourthCard == "7" || fourthCard == "8" || fourthCard == "9") && (fivethCard == "5" || fivethCard == "6" || fivethCard == "7" || fivethCard == "8" || fivethCard == "9")) || ((firstCard != secondCard && secondCard != thirdCard && thirdCard != fourthCard && fourthCard != fivethCard && fivethCard != firstCard) && (firstCard == "6" || firstCard == "7" || firstCard == "8" || firstCard == "9" || firstCard == "10") && (secondCard == "6" || secondCard == "7" || secondCard == "8" || secondCard == "9" || secondCard == "10") && (thirdCard == "6" || thirdCard == "7" || thirdCard == "8" || thirdCard == "9" || thirdCard == "10") && (fourthCard == "6" || fourthCard == "7" || fourthCard == "8" || fourthCard == "9" || fourthCard == "10") && (fivethCard == "6" || fivethCard == "7" || fivethCard == "8" || fivethCard == "9" || fivethCard == "10")) || ((firstCard != secondCard && secondCard != thirdCard && thirdCard != fourthCard && fourthCard != fivethCard && fivethCard != firstCard) && (firstCard == "7" || firstCard == "8" || firstCard == "9" || firstCard == "10" || firstCard == "JACK") && (secondCard == "7" || secondCard == "8" || secondCard == "9" || secondCard == "10" || secondCard == "JACK") && (thirdCard == "7" || thirdCard == "8" || thirdCard == "9" || thirdCard == "10" || thirdCard == "JACK") && (fourthCard == "7" || fourthCard == "8" || fourthCard == "9" || fourthCard == "10" || fourthCard == "JACK") && (fivethCard == "7" || fivethCard == "8" || fivethCard == "9" || fivethCard == "10" || fivethCard == "JACK")) || ((firstCard != secondCard && secondCard != thirdCard && thirdCard != fourthCard && fourthCard != fivethCard && fivethCard != firstCard) && (firstCard == "8" || firstCard == "9" || firstCard == "10" || firstCard == "JACK" || firstCard == "QUEEN") && (secondCard == "8" || secondCard == "9" || secondCard == "10" || secondCard == "JACK" || secondCard == "QUEEN") && (thirdCard == "8" || thirdCard == "9" || thirdCard == "10" || thirdCard == "JACK" || thirdCard == "QUEEN") && (fourthCard == "8" || fourthCard == "9" || fourthCard == "10" || fourthCard == "JACK" || fourthCard == "QUEEN") && (fivethCard == "8" || fivethCard == "9" || fivethCard == "10" || fivethCard == "JACK" || fivethCard == "QUEEN")) || ((firstCard != secondCard && secondCard != thirdCard && thirdCard != fourthCard && fourthCard != fivethCard && fivethCard != firstCard) && (firstCard == "9" || firstCard == "10" || firstCard == "JACK" || firstCard == "QUEEN" || firstCard == "KING") && (secondCard == "9" || secondCard == "10" || secondCard == "JACK" || secondCard == "QUEEN" || secondCard == "KING") && (thirdCard == "9" || thirdCard == "10" || thirdCard == "JACK" || thirdCard == "QUEEN" || thirdCard == "KING") && (fourthCard == "9" || fourthCard == "10" || fourthCard == "JACK" || fourthCard == "QUEEN" || fourthCard == "KING") && (fivethCard == "9" || fivethCard == "10" || fivethCard == "JACK" || fivethCard == "QUEEN" || fivethCard == "KING")) || ((firstCard != secondCard && secondCard != thirdCard && thirdCard != fourthCard && fourthCard != fivethCard && fivethCard != firstCard) && (firstCard == "10" || firstCard == "JACK" || firstCard == "QUEEN" || firstCard == "KING" || firstCard == "ACE") && (secondCard == "10" || secondCard == "JACK" || secondCard == "QUEEN" || secondCard == "KING" || secondCard == "ACE") && (thirdCard == "10" || thirdCard == "JACK" || thirdCard == "QUEEN" || thirdCard == "KING" || thirdCard == "ACE") && (fourthCard == "10" || fourthCard == "JACK" || fourthCard == "QUEEN" || fourthCard == "KING" || fourthCard == "ACE") && (fivethCard == "10" || fivethCard == "JACK" || fivethCard == "QUEEN" || fivethCard == "KING" || fivethCard == "ACE")))
	{
		cout << "STREIGH" << endl;
		counter++;
	}
	if ((firstCard == secondCard && secondCard == thirdCard && fourthCard == fivethCard) || (firstCard == thirdCard && thirdCard == fourthCard && secondCard == fivethCard) || (firstCard == fourthCard && fourthCard == fivethCard && secondCard == thirdCard) || (secondCard == thirdCard && thirdCard == fourthCard && firstCard == fivethCard) || (secondCard == fourthCard && fourthCard == fivethCard && firstCard == thirdCard) || (thirdCard == fourthCard && fourthCard == fivethCard && firstCard == secondCard))
	{
		cout << "FULL HOUSE" << endl;
		counter++;
	}
	if ((firstCard == secondCard && secondCard == thirdCard && thirdCard == fourthCard) || (firstCard == thirdCard && thirdCard == fourthCard && fourthCard == fivethCard) || (secondCard == thirdCard && thirdCard == fourthCard && fourthCard == fivethCard) || (firstCard == secondCard && secondCard == fourthCard && fourthCard == fivethCard) || (firstCard == secondCard && secondCard == thirdCard && thirdCard == fivethCard))
	{
		cout << "FOUR OF KIND" << endl;
		counter++;
	}
}

void checkCardsSameColor(string firstCard, string secondCard, string thirdCard, string fourthCard, string fivethCard, int& counter)
{
	if (firstCard==secondCard&&secondCard==thirdCard&&thirdCard==fourthCard&&fivethCard==firstCard)
	{
		cout << "FLUSH" << endl;
		counter++;
	}
}

void checkCards(string firstCard, string secondCard, string thirdCard, string fourthCard, string fivethCard, int& counter)
{
	if (((firstCard == "SPADE ACE" || firstCard == "SPADE KING" || firstCard == "SPADE QUEEN" || firstCard == "SPADE JACK" || firstCard == "SPADE 10") && (secondCard == "SPADE ACE" || secondCard == "SPADE KING" || secondCard == "SPADE QUEEN" || secondCard == "SPADE JACK" || secondCard == "SPADE 10") && (thirdCard == "SPADE ACE" || thirdCard == "SPADE KING" || thirdCard == "SPADE QUEEN" || thirdCard == "SPADE JACK" || thirdCard == "SPADE 10") && (fourthCard == "SPADE ACE" || fourthCard == "SPADE KING" || fourthCard == "SPADE QUEEN" || fourthCard == "SPADE JACK" || fourthCard == "SPADE 10") && (fivethCard == "SPADE ACE" || fivethCard == "SPADE KING" || fivethCard == "SPADE QUEEN" || fivethCard == "SPADE JACK" || fivethCard == "SPADE 10")) || ((firstCard == "HEART ACE" || firstCard == "HEART KING" || firstCard == "HEART QUEEN" || firstCard == "HEART JACK" || firstCard == "HEART 10") && (secondCard == "HEART ACE" || secondCard == "HEART KING" || secondCard == "HEART QUEEN" || secondCard == "HEART JACK" || secondCard == "HEART 10") && (thirdCard == "HEART ACE" || thirdCard == "HEART KING" || thirdCard == "HEART QUEEN" || thirdCard == "HEART JACK" || thirdCard == "HEART 10") && (fourthCard == "HEART ACE" || fourthCard == "HEART KING" || fourthCard == "HEART QUEEN" || fourthCard == "HEART JACK" || fourthCard == "HEART 10") && (fivethCard == "HEART ACE" || fivethCard == "HEART KING" || fivethCard == "HEART QUEEN" || fivethCard == "HEART JACK" || fivethCard == "HEART 10")) || ((firstCard == "DIAMOND ACE" || firstCard == "DIAMOND KING" || firstCard == "DIAMOND QUEEN" || firstCard == "DIAMOND JACK" || firstCard == "DIAMOND 10") && (secondCard == "DIAMOND ACE" || secondCard == "DIAMOND KING" || secondCard == "DIAMOND QUEEN" || secondCard == "DIAMOND JACK" || secondCard == "DIAMOND 10") && (thirdCard == "DIAMOND ACE" || thirdCard == "DIAMOND KING" || thirdCard == "DIAMOND QUEEN" || thirdCard == "DIAMOND JACK" || thirdCard == "DIAMOND 10") && (fourthCard == "DIAMOND ACE" || fourthCard == "DIAMOND KING" || fourthCard == "DIAMOND QUEEN" || fourthCard == "DIAMOND JACK" || fourthCard == "DIAMOND 10") && (fivethCard == "DIAMOND ACE" || fivethCard == "DIAMOND KING" || fivethCard == "DIAMOND QUEEN" || fivethCard == "DIAMOND JACK" || fivethCard == "DIAMOND 10")) || ((firstCard == "CLUB ACE" || firstCard == "CLUB KING" || firstCard == "CLUB QUEEN" || firstCard == "CLUB JACK" || firstCard == "CLUB 10") && (secondCard == "CLUB ACE" || secondCard == "CLUB KING" || secondCard == "CLUB QUEEN" || secondCard == "CLUB JACK" || secondCard == "CLUB 10") && (thirdCard == "CLUB ACE" || thirdCard == "CLUB KING" || thirdCard == "CLUB QUEEN" || thirdCard == "CLUB JACK" || thirdCard == "CLUB 10") && (fourthCard == "CLUB ACE" || fourthCard == "CLUB KING" || fourthCard == "CLUB QUEEN" || fourthCard == "CLUB JACK" || fourthCard == "CLUB 10") && (fivethCard == "CLUB ACE" || fivethCard == "CLUB KING" || fivethCard == "CLUB QUEEN" || fivethCard == "CLUB JACK" || fivethCard == "CLUB 10")))
	{
		cout << "ROYAL FLUSH" << endl;
		counter++;
	}
	if (((firstCard == "SPADE 2" || firstCard == "SPADE 3" || firstCard == "SPADE 4" || firstCard == "SPADE 5" || firstCard == "SPADE 6") && (secondCard == "SPADE 2" || secondCard == "SPADE 3" || secondCard == "SPADE 4" || secondCard == "SPADE 5" || secondCard == "SPADE 6") && (thirdCard == "SPADE 2" || thirdCard == "SPADE 3" || thirdCard == "SPADE 4" || thirdCard == "SPADE 5" || thirdCard == "SPADE 6") && (fourthCard == "SPADE 2" || fourthCard == "SPADE 3" || fourthCard == "SPADE 4" || fourthCard == "SPADE 5" || fourthCard == "SPADE 6") && (fivethCard == "SPADE 2" || fivethCard == "SPADE 3" || fivethCard == "SPADE 4" || fivethCard == "SPADE 5" || fivethCard == "SPADE 6")) || ((firstCard == "SPADE 3" || firstCard == "SPADE 4" || firstCard == "SPADE 5" || firstCard == "SPADE 6" || firstCard == "SPADE 7") && (secondCard == "SPADE 3" || secondCard == "SPADE 4" || secondCard == "SPADE 5" || secondCard == "SPADE 6" || secondCard == "SPADE 7") && (thirdCard == "SPADE 3" || thirdCard == "SPADE 4" || thirdCard == "SPADE 5" || thirdCard == "SPADE 6" || thirdCard == "SPADE 7") && (fourthCard == "SPADE 3" || fourthCard == "SPADE 4" || fourthCard == "SPADE 5" || fourthCard == "SPADE 6" || fourthCard == "SPADE 7") && (fivethCard == "SPADE 3" || fivethCard == "SPADE 4" || fivethCard == "SPADE 5" || fivethCard == "SPADE 6" || fivethCard == "SPADE 7")) || ((firstCard == "SPADE 4" || firstCard == "SPADE 5" || firstCard == "SPADE 6" || firstCard == "SPADE 7" || firstCard == "SPADE 8") && (secondCard == "SPADE 4" || secondCard == "SPADE 5" || secondCard == "SPADE 6" || secondCard == "SPADE 7" || secondCard == "SPADE 8") && (thirdCard == "SPADE 4" || thirdCard == "SPADE 5" || thirdCard == "SPADE 6" || thirdCard == "SPADE 7" || thirdCard == "SPADE 8") && (fourthCard == "SPADE 4" || fourthCard == "SPADE 5" || fourthCard == "SPADE 6" || fourthCard == "SPADE 7" || fourthCard == "SPADE 8") && (fivethCard == "SPADE 4" || fivethCard == "SPADE 5" || fivethCard == "SPADE 6" || fivethCard == "SPADE 7" || fivethCard == "SPADE 8")) || ((firstCard == "SPADE 6" || firstCard == "SPADE 7" || firstCard == "SPADE 8" || firstCard == "SPADE 9" || firstCard == "SPADE 10") && (secondCard == "SPADE 6" || secondCard == "SPADE 7" || secondCard == "SPADE 8" || secondCard == "SPADE 9" || secondCard == "SPADE 10") && (thirdCard == "SPADE 6" || thirdCard == "SPADE 7" || thirdCard == "SPADE 8" || thirdCard == "SPADE 9" || thirdCard == "SPADE 10") && (fourthCard == "SPADE 6" || fourthCard == "SPADE 7" || fourthCard == "SPADE 8" || fourthCard == "SPADE 9" || fourthCard == "SPADE 10") && (fivethCard == "SPADE 6" || fivethCard == "SPADE 7" || fivethCard == "SPADE 8" || fivethCard == "SPADE 9" || fivethCard == "SPADE 10")) || ((firstCard == "SPADE 7" || firstCard == "SPADE 8" || firstCard == "SPADE 9" || firstCard == "SPADE 10" || firstCard == "SPADE JACK") && (secondCard == "SPADE 7" || secondCard == "SPADE 8" || secondCard == "SPADE 9" || secondCard == "SPADE 10" || secondCard == "SPADE JACK") && (thirdCard == "SPADE 7" || thirdCard == "SPADE 8" || thirdCard == "SPADE 9" || thirdCard == "SPADE 10" || thirdCard == "SPADE JACK") && (fourthCard == "SPADE 8" || fourthCard == "SPADE 9" || fourthCard == "SPADE 10" || fourthCard == "SPADE JACK") && (fivethCard == "SPADE 7" || fivethCard == "SPADE 8" || fivethCard == "SPADE 9" || fivethCard == "SPADE 10" || fivethCard == "SPADE JACK")) || ((firstCard == "SPADE 8" || firstCard == "SPADE 9" || firstCard == "SPADE 10" || firstCard == "SPADE JACK" || firstCard == "SPADE QUEEN") && (secondCard == "SPADE 8" || secondCard == "SPADE 9" || secondCard == "SPADE 10" || secondCard == "SPADE JACK" || secondCard == "SPADE QUEEN") && (thirdCard == "SPADE 8" || thirdCard == "SPADE 9" || thirdCard == "SPADE 10" || thirdCard == "SPADE JACK" || thirdCard == "SPADE QUEEN") && (fourthCard == "SPADE 9" || fourthCard == "SPADE 10" || fourthCard == "SPADE JACK" || fourthCard == "SPADE QUEEN") && (fivethCard == "SPADE 8" || fivethCard == "SPADE 9" || fivethCard == "SPADE 10" || fivethCard == "SPADE JACK" || fivethCard == "SPADE QUEEN")) || ((firstCard == "SPADE 9" || firstCard == "SPADE 10" || firstCard == "SPADE JACK" || firstCard == "SPADE QUEEN" || firstCard == "SPADE KING") && (secondCard == "SPADE 9" || secondCard == "SPADE 10" || secondCard == "SPADE JACK" || secondCard == "SPADE QUEEN" || secondCard == "SPADE KING") && (thirdCard == "SPADE 9" || thirdCard == "SPADE 10" || thirdCard == "SPADE JACK" || thirdCard == "SPADE QUEEN" || thirdCard == "SPADE KING") && (fourthCard == "SPADE 10" || fourthCard == "SPADE JACK" || fourthCard == "SPADE QUEEN" || fourthCard == "SPADE KING") && (fivethCard == "SPADE 9" || fivethCard == "SPADE 10" || fivethCard == "SPADE JACK" || fivethCard == "SPADE QUEEN" || fivethCard == "SPADE KING")) || ((firstCard == "HEART 2" || firstCard == "HEART 3" || firstCard == "HEART 4" || firstCard == "HEART 5" || firstCard == "HEART 6") && (secondCard == "HEART 2" || secondCard == "HEART 3" || secondCard == "HEART 4" || secondCard == "HEART 5" || secondCard == "HEART 6") && (thirdCard == "HEART 2" || thirdCard == "HEART 3" || thirdCard == "HEART 4" || thirdCard == "HEART 5" || thirdCard == "HEART 6") && (fourthCard == "HEART 2" || fourthCard == "HEART 3" || fourthCard == "HEART 4" || fourthCard == "HEART 5" || fourthCard == "HEART 6") && (fivethCard == "HEART 2" || fivethCard == "HEART 3" || fivethCard == "HEART 4" || fivethCard == "HEART 5" || fivethCard == "HEART 6")) || ((firstCard == "HEART 3" || firstCard == "HEART 4" || firstCard == "HEART 5" || firstCard == "HEART 6" || firstCard == "HEART 7") && (secondCard == "HEART 3" || secondCard == "HEART 4" || secondCard == "HEART 5" || secondCard == "HEART 6" || secondCard == "HEART 7") && (thirdCard == "HEART 3" || thirdCard == "HEART 4" || thirdCard == "HEART 5" || thirdCard == "HEART 6" || thirdCard == "HEART 7") && (fourthCard == "HEART 3" || fourthCard == "HEART 4" || fourthCard == "HEART 5" || fourthCard == "HEART 6" || fourthCard == "HEART 7") && (fivethCard == "HEART 3" || fivethCard == "HEART 4" || fivethCard == "HEART 5" || fivethCard == "HEART 6" || fivethCard == "HEART 7")) || ((firstCard == "HEART 4" || firstCard == "HEART 5" || firstCard == "HEART 6" || firstCard == "HEART 7" || firstCard == "HEART 8") && (secondCard == "HEART 4" || secondCard == "HEART 5" || secondCard == "HEART 6" || secondCard == "HEART 7" || secondCard == "HEART 8") && (thirdCard == "HEART 4" || thirdCard == "HEART 5" || thirdCard == "HEART 6" || thirdCard == "HEART 7" || thirdCard == "HEART 8") && (fourthCard == "HEART 4" || fourthCard == "HEART 5" || fourthCard == "HEART 6" || fourthCard == "HEART 7" || fourthCard == "HEART 8") && (fivethCard == "HEART 4" || fivethCard == "HEART 5" || fivethCard == "HEART 6" || fivethCard == "HEART 7" || fivethCard == "HEART 8")) || ((firstCard == "HEART 6" || firstCard == "HEART 7" || firstCard == "HEART 8" || firstCard == "HEART 9" || firstCard == "HEART 10") && (secondCard == "HEART 6" || secondCard == "HEART 7" || secondCard == "HEART 8" || secondCard == "HEART 9" || secondCard == "HEART 10") && (thirdCard == "HEART 6" || thirdCard == "HEART 7" || thirdCard == "HEART 8" || thirdCard == "HEART 9" || thirdCard == "HEART 10") && (fourthCard == "HEART 6" || fourthCard == "HEART 7" || fourthCard == "HEART 8" || fourthCard == "HEART 9" || fourthCard == "HEART 10") && (fivethCard == "HEART 6" || fivethCard == "HEART 7" || fivethCard == "HEART 8" || fivethCard == "HEART 9" || fivethCard == "HEART 10")) || ((firstCard == "HEART 7" || firstCard == "HEART 8" || firstCard == "HEART 9" || firstCard == "HEART 10" || firstCard == "HEART JACK") && (secondCard == "HEART 7" || secondCard == "HEART 8" || secondCard == "HEART 9" || secondCard == "HEART 10" || secondCard == "HEART JACK") && (thirdCard == "HEART 7" || thirdCard == "HEART 8" || thirdCard == "HEART 9" || thirdCard == "HEART 10" || thirdCard == "HEART JACK") && (fourthCard == "HEART 8" || fourthCard == "HEART 9" || fourthCard == "HEART 10" || fourthCard == "HEART JACK") && (fivethCard == "HEART 7" || fivethCard == "HEART 8" || fivethCard == "HEART 9" || fivethCard == "HEART 10" || fivethCard == "HEART JACK")) || ((firstCard == "HEART 8" || firstCard == "HEART 9" || firstCard == "HEART 10" || firstCard == "HEART JACK" || firstCard == "HEART QUEEN") && (secondCard == "HEART 8" || secondCard == "HEART 9" || secondCard == "HEART 10" || secondCard == "HEART JACK" || secondCard == "HEART QUEEN") && (thirdCard == "HEART 8" || thirdCard == "HEART 9" || thirdCard == "HEART 10" || thirdCard == "HEART JACK" || thirdCard == "HEART QUEEN") && (fourthCard == "HEART 9" || fourthCard == "HEART 10" || fourthCard == "HEART JACK" || fourthCard == "HEART QUEEN") && (fivethCard == "HEART 8" || fivethCard == "HEART 9" || fivethCard == "HEART 10" || fivethCard == "HEART JACK" || fivethCard == "HEART QUEEN")) || ((firstCard == "HEART 9" || firstCard == "HEART 10" || firstCard == "HEART JACK" || firstCard == "HEART QUEEN" || firstCard == "HEART KING") && (secondCard == "HEART 9" || secondCard == "HEART 10" || secondCard == "HEART JACK" || secondCard == "HEART QUEEN" || secondCard == "HEART KING") && (thirdCard == "HEART 9" || thirdCard == "HEART 10" || thirdCard == "HEART JACK" || thirdCard == "HEART QUEEN" || thirdCard == "HEART KING") && (fourthCard == "HEART 10" || fourthCard == "HEART JACK" || fourthCard == "HEART QUEEN" || fourthCard == "HEART KING") && (fivethCard == "HEART 9" || fivethCard == "HEART 10" || fivethCard == "HEART JACK" || fivethCard == "HEART QUEEN" || fivethCard == "HEART KING")) || ((firstCard == "DIAMOND 2" || firstCard == "DIAMOND 3" || firstCard == "DIAMOND 4" || firstCard == "DIAMOND 5" || firstCard == "DIAMOND 6") && (secondCard == "DIAMOND 2" || secondCard == "DIAMOND 3" || secondCard == "DIAMOND 4" || secondCard == "DIAMOND 5" || secondCard == "DIAMOND 6") && (thirdCard == "DIAMOND 2" || thirdCard == "DIAMOND 3" || thirdCard == "DIAMOND 4" || thirdCard == "DIAMOND 5" || thirdCard == "DIAMOND 6") && (fourthCard == "DIAMOND 2" || fourthCard == "DIAMOND 3" || fourthCard == "DIAMOND 4" || fourthCard == "DIAMOND 5" || fourthCard == "DIAMOND 6") && (fivethCard == "DIAMOND 2" || fivethCard == "DIAMOND 3" || fivethCard == "DIAMOND 4" || fivethCard == "DIAMOND 5" || fivethCard == "DIAMOND 6")) || ((firstCard == "DIAMOND 3" || firstCard == "DIAMOND 4" || firstCard == "DIAMOND 5" || firstCard == "DIAMOND 6" || firstCard == "DIAMOND 7") && (secondCard == "DIAMOND 3" || secondCard == "DIAMOND 4" || secondCard == "DIAMOND 5" || secondCard == "DIAMOND 6" || secondCard == "DIAMOND 7") && (thirdCard == "DIAMOND 3" || thirdCard == "DIAMOND 4" || thirdCard == "DIAMOND 5" || thirdCard == "DIAMOND 6" || thirdCard == "DIAMOND 7") && (fourthCard == "DIAMOND 3" || fourthCard == "DIAMOND 4" || fourthCard == "DIAMOND 5" || fourthCard == "DIAMOND 6" || fourthCard == "DIAMOND 7") && (fivethCard == "DIAMOND 3" || fivethCard == "DIAMOND 4" || fivethCard == "DIAMOND 5" || fivethCard == "DIAMOND 6" || fivethCard == "DIAMOND 7")) || ((firstCard == "DIAMOND 4" || firstCard == "DIAMOND 5" || firstCard == "DIAMOND 6" || firstCard == "DIAMOND 7" || firstCard == "DIAMOND 8") && (secondCard == "DIAMOND 4" || secondCard == "DIAMOND 5" || secondCard == "DIAMOND 6" || secondCard == "DIAMOND 7" || secondCard == "DIAMOND 8") && (thirdCard == "DIAMOND 4" || thirdCard == "DIAMOND 5" || thirdCard == "DIAMOND 6" || thirdCard == "DIAMOND 7" || thirdCard == "DIAMOND 8" ) && (fourthCard == "DIAMOND 4" || fourthCard == "DIAMOND 5" || fourthCard == "DIAMOND 6" || fourthCard == "DIAMOND 7" || fourthCard == "DIAMOND 8") && (fivethCard == "DIAMOND 4" || fivethCard == "DIAMOND 5" || fivethCard == "DIAMOND 6" || fivethCard == "DIAMOND 7" || fivethCard == "DIAMOND 8")) || ((firstCard == "DIAMOND 6" || firstCard == "DIAMOND 7" || firstCard == "DIAMOND 8" || firstCard == "DIAMOND 9" || firstCard == "DIAMOND 10") && (secondCard == "DIAMOND 6" || secondCard == "DIAMOND 7" || secondCard == "DIAMOND 8" || secondCard == "DIAMOND 9" || secondCard == "DIAMOND 10") && (thirdCard == "DIAMOND 6" || thirdCard == "DIAMOND 7" || thirdCard == "DIAMOND 8" || thirdCard == "DIAMOND 9" || thirdCard == "DIAMOND 10") && (fourthCard == "DIAMOND 6" || fourthCard == "DIAMOND 7" || fourthCard == "DIAMOND 8" || fourthCard == "DIAMOND 9" || fourthCard == "DIAMOND 10") && (fivethCard == "DIAMOND 6" || fivethCard == "DIAMOND 7" || fivethCard == "DIAMOND 8" || fivethCard == "DIAMOND 9" || fivethCard == "DIAMOND 10")) || ((firstCard == "DIAMOND 7" || firstCard == "DIAMOND 8" || firstCard == "DIAMOND 9" || firstCard == "DIAMOND 10" || firstCard == "DIAMOND JACK") && (secondCard == "DIAMOND 7" || secondCard == "DIAMOND 8" || secondCard == "DIAMOND 9" || secondCard == "DIAMOND 10" || secondCard == "DIAMOND JACK") && (thirdCard == "DIAMOND 7" || thirdCard == "DIAMOND 8" || thirdCard == "DIAMOND 9" || thirdCard == "DIAMOND 10" || thirdCard == "DIAMOND JACK") && (fourthCard == "DIAMOND 8" || fourthCard == "DIAMOND 9" || fourthCard == "DIAMOND 10" || fourthCard == "DIAMOND JACK") && (fivethCard == "DIAMOND 7" || fivethCard == "DIAMOND 8" || fivethCard == "DIAMOND 9" || fivethCard == "DIAMOND 10" || fivethCard == "DIAMOND JACK")) || ((firstCard == "DIAMOND 8" || firstCard == "DIAMOND 9" || firstCard == "DIAMOND 10" || firstCard == "DIAMOND JACK" || firstCard == "DIAMOND QUEEN") && (secondCard == "DIAMOND 8" || secondCard == "DIAMOND 9" || secondCard == "DIAMOND 10" || secondCard == "DIAMOND JACK" || secondCard == "DIAMOND QUEEN") && (thirdCard == "DIAMOND 8" || thirdCard == "DIAMOND 9" || thirdCard == "DIAMOND 10" || thirdCard == "DIAMOND JACK" || thirdCard == "DIAMOND QUEEN") && (fourthCard == "DIAMOND 9" || fourthCard == "DIAMOND 10" || fourthCard == "DIAMOND JACK" || fourthCard == "DIAMOND QUEEN") && (fivethCard == "DIAMOND 8" || fivethCard == "DIAMOND 9" || fivethCard == "DIAMOND 10" || fivethCard == "DIAMOND JACK" || fivethCard == "DIAMOND QUEEN")) || ((firstCard == "DIAMOND 9" || firstCard == "DIAMOND 10" || firstCard == "DIAMOND JACK" || firstCard == "DIAMOND QUEEN" || firstCard == "DIAMOND KING") && (secondCard == "DIAMOND 9" || secondCard == "DIAMOND 10" || secondCard == "DIAMOND JACK" || secondCard == "DIAMOND QUEEN" || secondCard == "DIAMOND KING") && (thirdCard == "DIAMOND 9" || thirdCard == "DIAMOND 10" || thirdCard == "DIAMOND JACK" || thirdCard == "DIAMOND QUEEN" || thirdCard == "DIAMOND KING") && (fourthCard == "DIAMOND 10" || fourthCard == "DIAMOND JACK" || fourthCard == "DIAMOND QUEEN" || fourthCard == "DIAMOND KING") && (fivethCard == "DIAMOND 9" || fivethCard == "DIAMOND 10" || fivethCard == "DIAMOND JACK" || fivethCard == "DIAMOND QUEEN" || fivethCard == "DIAMOND KING")) || ((firstCard == "CLUB 2" || firstCard == "CLUB 3" || firstCard == "CLUB 4" || firstCard == "CLUB 5" || firstCard == "CLUB 6") && (secondCard == "CLUB 2" || secondCard == "CLUB 3" || secondCard == "CLUB 4" || secondCard == "CLUB 5" || secondCard == "CLUB 6") && (thirdCard == "CLUB 2" || thirdCard == "CLUB 3" || thirdCard == "CLUB 4" || thirdCard == "CLUB 5" || thirdCard == "CLUB 6") && (fourthCard == "CLUB 2" || fourthCard == "CLUB 3" || fourthCard == "CLUB 4" || fourthCard == "CLUB 5" || fourthCard == "CLUB 6") && (fivethCard == "CLUB 2" || fivethCard == "CLUB 3" || fivethCard == "CLUB 4" || fivethCard == "CLUB 5" || fivethCard == "CLUB 6")) || ((firstCard == "CLUB 3" || firstCard == "CLUB 4" || firstCard == "CLUB 5" || firstCard == "CLUB 6" || firstCard == "CLUB 7") && (secondCard == "CLUB 3" || secondCard == "CLUB 4" || secondCard == "CLUB 5" || secondCard == "CLUB 6" || secondCard == "CLUB 7") && (thirdCard == "CLUB 3" || thirdCard == "CLUB 4" || thirdCard == "CLUB 5" || thirdCard == "CLUB 6" || thirdCard == "CLUB 7") && (fourthCard == "CLUB 3" || fourthCard == "CLUB 4" || fourthCard == "CLUB 5" || fourthCard == "CLUB 6" || fourthCard == "CLUB 7") && (fivethCard == "CLUB 3" || fivethCard == "CLUB 4" || fivethCard == "CLUB 5" || fivethCard == "CLUB 6" || fivethCard == "CLUB 7")) || ((firstCard == "CLUB 4" || firstCard == "CLUB 5" || firstCard == "CLUB 6" || firstCard == "CLUB 7" || firstCard == "CLUB 8") && (secondCard == "CLUB 4" || secondCard == "CLUB 5" || secondCard == "CLUB 6" || secondCard == "CLUB 7" || secondCard == "CLUB 8") && (thirdCard == "CLUB 4" || thirdCard == "CLUB 5" || thirdCard == "CLUB 6" || thirdCard == "CLUB 7" || thirdCard == "CLUB 8") && (fourthCard == "CLUB 4" || fourthCard == "CLUB 5" || fourthCard == "CLUB 6" || fourthCard == "CLUB 7" || fourthCard == "CLUB 8") && (fivethCard == "CLUB 4" || fivethCard == "CLUB 5" || fivethCard == "CLUB 6" || fivethCard == "CLUB 7" || fivethCard == "CLUB 8")) || ((firstCard == "CLUB 6" || firstCard == "CLUB 7" || firstCard == "CLUB 8" || firstCard == "CLUB 9" || firstCard == "CLUB 10") && (secondCard == "CLUB 6" || secondCard == "CLUB 7" || secondCard == "CLUB 8" || secondCard == "CLUB 9" || secondCard == "CLUB 10") && (thirdCard == "CLUB 6" || thirdCard == "CLUB 7" || thirdCard == "CLUB 8" || thirdCard == "CLUB 9" || thirdCard == "CLUB 10") && (fourthCard == "CLUB 6" || fourthCard == "CLUB 7" || fourthCard == "CLUB 8" || fourthCard == "CLUB 9" || fourthCard == "CLUB 10") && (fivethCard == "CLUB 6" || fivethCard == "CLUB 7" || fivethCard == "CLUB 8" || fivethCard == "CLUB 9" || fivethCard == "CLUB 10")) || ((firstCard == "CLUB 7" || firstCard == "CLUB 8" || firstCard == "CLUB 9" || firstCard == "CLUB 10" || firstCard == "CLUB JACK") && (secondCard == "CLUB 7" || secondCard == "CLUB 8" || secondCard == "CLUB 9" || secondCard == "CLUB 10" || secondCard == "CLUB JACK") && (thirdCard == "CLUB 7" || thirdCard == "CLUB 8" || thirdCard == "CLUB 9" || thirdCard == "CLUB 10" || thirdCard == "CLUB JACK") && (fourthCard == "CLUB 8" || fourthCard == "CLUB 9" || fourthCard == "CLUB 10" || fourthCard == "CLUB JACK") && (fivethCard == "CLUB 7" || fivethCard == "CLUB 8" || fivethCard == "CLUB 9" || fivethCard == "CLUB 10" || fivethCard == "CLUB JACK")) || ((firstCard == "CLUB 8" || firstCard == "CLUB 9" || firstCard == "CLUB 10" || firstCard == "CLUB JACK" || firstCard == "CLUB QUEEN") && (secondCard == "CLUB 8" || secondCard == "CLUB 9" || secondCard == "CLUB 10" || secondCard == "CLUB JACK" || secondCard == "CLUB QUEEN") && (thirdCard == "CLUB 8" || thirdCard == "CLUB 9" || thirdCard == "CLUB 10" || thirdCard == "CLUB JACK" || thirdCard == "CLUB QUEEN") && (fourthCard == "CLUB 9" || fourthCard == "CLUB 10" || fourthCard == "CLUB JACK" || fourthCard == "CLUB QUEEN") && (fivethCard == "CLUB 8" || fivethCard == "CLUB 9" || fivethCard == "CLUB 10" || fivethCard == "CLUB JACK" || fivethCard == "CLUB QUEEN")) || ((firstCard == "CLUB 9" || firstCard == "CLUB 10" || firstCard == "CLUB JACK" || firstCard == "CLUB QUEEN" || firstCard == "CLUB KING") && (secondCard == "CLUB 9" || secondCard == "CLUB 10" || secondCard == "CLUB JACK" || secondCard == "CLUB QUEEN" || secondCard == "CLUB KING") && (thirdCard == "CLUB 9" || thirdCard == "CLUB 10" || thirdCard == "CLUB JACK" || thirdCard == "CLUB QUEEN" || thirdCard == "CLUB KING") && (fourthCard == "CLUB 10" || fourthCard == "CLUB JACK" || fourthCard == "CLUB QUEEN" || fourthCard == "CLUB KING") && (fivethCard == "CLUB 9" || fivethCard == "CLUB 10" || fivethCard == "CLUB JACK" || fivethCard == "CLUB QUEEN" || fivethCard == "CLUB KING")))
	{
		cout << "STRAIGHT FLUSH" << endl;
		counter++;
	}
}

int main()
{
	bool game = true;
	while (game == true)
	{
		srand(time(NULL));
		string firstCard;
		string firstCard_;
		string firstCard__;
		string secondCard;
		string secondCard_;
		string secondCard__;
		string thirdCard;
		string thirdCard_;
		string thirdCard__;
		string fourthCard;
		string fourthCard_;
		string fourthCard__;
		string fivethCard;
		string fivethCard_;
		string fivethCard__;
		string answer;

		bool spadeAce = true;
		bool heartAce = true;
		bool diamondAce = true;
		bool clubAce = true;
		bool spade2 = true;
		bool heart2 = true;
		bool diamond2 = true;
		bool club2 = true;
		bool spade3 = true;
		bool heart3 = true;
		bool diamond3 = true;
		bool club3 = true;
		bool spade4 = true;
		bool heart4 = true;
		bool diamond4 = true;
		bool club4 = true;
		bool spade5 = true;
		bool heart5 = true;
		bool diamond5 = true;
		bool club5 = true;
		bool spade6 = true;
		bool heart6 = true;
		bool diamond6 = true;
		bool club6 = true;
		bool spade7 = true;
		bool heart7 = true;
		bool diamond7 = true;
		bool club7 = true;
		bool spade8 = true;
		bool heart8 = true;
		bool diamond8 = true;
		bool club8 = true;
		bool spade9 = true;
		bool heart9 = true;
		bool diamond9 = true;
		bool club9 = true;
		bool spade10 = true;
		bool heart10 = true;
		bool diamond10 = true;
		bool club10 = true;
		bool spadeJack = true;
		bool heartJack = true;
		bool diamondJack = true;
		bool clubJack = true;
		bool spadeQueen = true;
		bool heartQueen = true;
		bool diamondQueen = true;
		bool clubQueen = true;
		bool spadeKing = true;
		bool heartKing = true;
		bool diamondKing = true;
		bool clubKing = true;

		bool fstCard = true;
		bool sndCard = true;
		bool trdCard = true;
		bool fthCard = true;
		bool fftCard = true;

		int counter = 0;

		while (true)
		{

			drawCards(firstCard, secondCard, thirdCard, fourthCard, fivethCard, spadeAce, heartAce, diamondAce, clubAce, spade2, heart2, diamond2, club2, spade3, heart3, diamond3, club3, spade4, heart4, diamond4, club4, spade5, heart5, diamond5, club5, spade6, heart6, diamond6, club6, spade7, heart7, diamond7, club7, spade8, heart8, diamond8, club8, spade9, heart9, diamond9, club9, spade10, heart10, diamond10, club10, spadeJack, heartJack, diamondJack, clubJack, spadeQueen, heartQueen, diamondQueen, clubQueen, spadeKing, heartKing, diamondKing, clubKing, fstCard, sndCard, trdCard, fthCard,fftCard);

			cout << "Yours cards: " << firstCard << " | " << secondCard << " | " << thirdCard << " | " << fourthCard << " | " << fivethCard << endl;

			cout << "Do you want to draw cards? yes/no" << endl;
			cin >> answer;
			if (answer == "yes")
			{
				while (true)
				{
					cout << endl << "Do you want to draw first card?: yes/no" << endl;
					cin >> answer;
					if (answer == "yes")
					{
						break;
					}
					else if (answer == "no")
					{
						fstCard = false;
						break;
					}
					else
					{
						cout << "wrong command..." << endl;
					}
				}
				while (true)
				{
					cout << endl << "Do you want to draw second card?: yes/no" << endl;
					cin >> answer;
					if (answer == "yes")
					{
						break;
					}
					else if (answer == "no")
					{
						sndCard = false;
						break;
					}
					else
					{
						cout << "wrong command..." << endl;
					}
				}
				while (true)
				{
					cout << endl << "Do you want to draw third card?: yes/no" << endl;
					cin >> answer;
					if (answer == "yes")
					{
						break;
					}
					else if (answer == "no")
					{
						trdCard = false;
						break;
					}
					else
					{
						cout << "wrong command..." << endl;
					}
				}
				while (true)
				{
					cout << endl << "Do you want to draw fourth card?: yes/no" << endl;
					cin >> answer;
					if (answer == "yes")
					{
						break;
					}
					else if (answer == "no")
					{
						fthCard = false;
						break;
					}
					else
					{
						cout << "wrong command..." << endl;
					}
				}
				while (true)
				{
					cout << endl << "Do you want to draw fiveth card?: yes/no" << endl;
					cin >> answer;
					if (answer == "yes")
					{
						break;
					}
					else if (answer == "no")
					{
						fftCard = false;
						break;
					}
					else
					{
						cout << "wrong command..." << endl;
					}
				}
				
				drawCards(firstCard, secondCard, thirdCard, fourthCard, fivethCard, spadeAce, heartAce, diamondAce, clubAce, spade2, heart2, diamond2, club2, spade3, heart3, diamond3, club3, spade4, heart4, diamond4, club4, spade5, heart5, diamond5, club5, spade6, heart6, diamond6, club6, spade7, heart7, diamond7, club7, spade8, heart8, diamond8, club8, spade9, heart9, diamond9, club9, spade10, heart10, diamond10, club10, spadeJack, heartJack, diamondJack, clubJack, spadeQueen, heartQueen, diamondQueen, clubQueen, spadeKing, heartKing, diamondKing, clubKing, fstCard, sndCard, trdCard, fthCard, fftCard);

				cout  << endl << "Yours cards: " << firstCard << " | " << secondCard << " | " << thirdCard << " | " << fourthCard << " | " << fivethCard << endl;

				answer = "no";
			}
			if (answer == "no")
			{
				checkCards(firstCard, secondCard, thirdCard, fourthCard, fivethCard, counter);

				firstCard_ = firstCard;
				secondCard_ = secondCard;
				thirdCard_ = thirdCard;
				fourthCard_ = fourthCard;
				fivethCard_ = fivethCard;


				transformCardsName(firstCard_);
				transformCardsName(secondCard_);
				transformCardsName(thirdCard_);
				transformCardsName(fourthCard_);
				transformCardsName(fivethCard_);

				checkCardsDifferentColor(firstCard_, secondCard_, thirdCard_, fourthCard_, fivethCard_, counter);

				firstCard__ = firstCard;
				secondCard__ = secondCard;
				thirdCard__ = thirdCard;
				fourthCard__ = fourthCard;
				fivethCard__ = fivethCard;

				transformCardsColor(firstCard__);
				transformCardsColor(secondCard__);
				transformCardsColor(thirdCard__);
				transformCardsColor(fourthCard__);
				transformCardsColor(fivethCard__);

				checkCardsSameColor(firstCard__, secondCard__, thirdCard__, fourthCard__, fivethCard__, counter);

				if (counter < 1)
				{
					cout << "NOTHING" << endl;
				}
				break;
			}
			else
			{
				cout << "wrong command..." << endl;
			}
		}
		while (true)
		{
			cout << endl << "Do you want to play again? yes/no" << endl;
			cin >> answer;
			if (answer == "no")
			{
				game = false;
				break;
			}
			else if (answer != "yes")
			{
				cout << "wrong command..." << endl;
			}
			else if (answer == "yes")
			{
				cout << endl;
				break;
			}
		}
	}
}