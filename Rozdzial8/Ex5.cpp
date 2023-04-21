#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void drawCards(string& firstCard, string& secondCard, string& thirdCard, string& fourthCard, string& fivethCard)
{
	int chance;
	
	chance = rand() % 52 + 1;
	
	if (chance == 1)
	{
		firstCard = "CLUB ACE";
	}
	else if (chance == 2)
	{
		firstCard = "CLUB 2";
	}
	else if (chance == 3)
	{
		firstCard = "CLUB 3";
	}
	else if (chance == 4)
	{
		firstCard = "CLUB 4";
	}
	else if (chance == 5)
	{
		firstCard = "CLUB 5";
	}
	else if (chance == 6)
	{
		firstCard = "CLUB 6";
	}
	else if (chance == 7)
	{
		firstCard = "CLUB 7";
	}
	else if (chance == 8)
	{
		firstCard = "CLUB 8";
	}
	else if (chance == 9)
	{
		firstCard = "CLUB 9";
	}
	else if (chance == 10)
	{
		firstCard = "CLUB 10";
	}
	else if (chance == 11)
	{
		firstCard = "CLUB JACK";
	}
	else if (chance == 12)
	{
		firstCard = "CLUB QUEEN";
	}
	else if (chance == 13)
	{
		firstCard = "CLUB KING";
	}

	if (chance == 14)
	{
		firstCard = "DIAMOND ACE";
	}
	else if (chance == 15)
	{
		firstCard = "DIAMOND 2";
	}
	else if (chance == 16)
	{
		firstCard = "DIAMOND 3";
	}
	else if (chance == 17)
	{
		firstCard = "DIAMOND 4";
	}
	else if (chance == 18)
	{
		firstCard = "DIAMOND 5";
	}
	else if (chance == 19)
	{
		firstCard = "DIAMOND 6";
	}
	else if (chance == 20)
	{
		firstCard = "DIAMOND 7";
	}
	else if (chance == 21)
	{
		firstCard = "DIAMOND 8";
	}
	else if (chance == 22)
	{
		firstCard = "DIAMOND 9";
	}
	else if (chance == 23)
	{
		firstCard = "DIAMOND 10";
	}
	else if (chance == 24)
	{
		firstCard = "DIAMOND JACK";
	}
	else if (chance == 25)
	{
		firstCard = "DIAMOND QUEEN";
	}
	else if (chance == 26)
	{
		firstCard = "DIAMOND KING";
	}

	if (chance == 27)
	{
		firstCard = "HEART ACE";
	}
	else if (chance == 28)
	{
		firstCard = "HEART 2";
	}
	else if (chance == 29)
	{
		firstCard = "HEART 3";
	}
	else if (chance == 30)
	{
		firstCard = "HEART 4";
	}
	else if (chance == 31)
	{
		firstCard = "HEART 5";
	}
	else if (chance == 32)
	{
		firstCard = "HEART 6";
	}
	else if (chance == 33)
	{
		firstCard = "HEART 7";
	}
	else if (chance == 34)
	{
		firstCard = "HEART 8";
	}
	else if (chance == 35)
	{
		firstCard = "HEART 9";
	}
	else if (chance == 36)
	{
		firstCard = "HEART 10";
	}
	else if (chance == 37)
	{
		firstCard = "HEART JACK";
	}
	else if (chance == 38)
	{
		firstCard = "HEART QUEEN";
	}
	else if (chance == 39)
	{
		firstCard = "HEART KING";
	}

	if (chance == 40)
	{
		firstCard = "SPADE ACE";
	}
	else if (chance == 41)
	{
		firstCard = "SPADE 2";
	}
	else if (chance == 42)
	{
		firstCard = "SPADE 3";
	}
	else if (chance == 43)
	{
		firstCard = "SPADE 4";
	}
	else if (chance == 44)
	{
		firstCard = "SPADE 5";
	}
	else if (chance == 45)
	{
		firstCard = "SPADE 6";
	}
	else if (chance == 46)
	{
		firstCard = "SPADE 7";
	}
	else if (chance == 47)
	{
		firstCard = "SPADE 8";
	}
	else if (chance == 48)
	{
		firstCard = "SPADE 9";
	}
	else if (chance == 49)
	{
		firstCard = "SPADE 10";
	}
	else if (chance == 50)
	{
		firstCard = "SPADE JACK";
	}
	else if (chance == 51)
	{
		firstCard = "SPADE QUEEN";
	}
	else if (chance == 52)
	{
		firstCard = "SPADE KING";
	}

	chance = rand() % 52 + 1;

	if (chance == 1)
	{
		secondCard = "CLUB ACE";
	}
	else if (chance == 2)
	{
		secondCard = "CLUB 2";
	}
	else if (chance == 3)
	{
		secondCard = "CLUB 3";
	}
	else if (chance == 4)
	{
		secondCard = "CLUB 4";
	}
	else if (chance == 5)
	{
		secondCard = "CLUB 5";
	}
	else if (chance == 6)
	{
		secondCard = "CLUB 6";
	}
	else if (chance == 7)
	{
		secondCard = "CLUB 7";
	}
	else if (chance == 8)
	{
		secondCard = "CLUB 8";
	}
	else if (chance == 9)
	{
		secondCard = "CLUB 9";
	}
	else if (chance == 10)
	{
		secondCard = "CLUB 10";
	}
	else if (chance == 11)
	{
		secondCard = "CLUB JACK";
	}
	else if (chance == 12)
	{
		secondCard = "CLUB QUEEN";
	}
	else if (chance == 13)
	{
		secondCard = "CLUB KING";
	}

	if (chance == 14)
	{
		secondCard = "DIAMOND ACE";
	}
	else if (chance == 15)
	{
		secondCard = "DIAMOND 2";
	}
	else if (chance == 16)
	{
		secondCard = "DIAMOND 3";
	}
	else if (chance == 17)
	{
		secondCard = "DIAMOND 4";
	}
	else if (chance == 18)
	{
		secondCard = "DIAMOND 5";
	}
	else if (chance == 19)
	{
		secondCard = "DIAMOND 6";
	}
	else if (chance == 20)
	{
		secondCard = "DIAMOND 7";
	}
	else if (chance == 21)
	{
		secondCard = "DIAMOND 8";
	}
	else if (chance == 22)
	{
		secondCard = "DIAMOND 9";
	}
	else if (chance == 23)
	{
		secondCard = "DIAMOND 10";
	}
	else if (chance == 24)
	{
		secondCard = "DIAMOND JACK";
	}
	else if (chance == 25)
	{
		secondCard = "DIAMOND QUEEN";
	}
	else if (chance == 26)
	{
		secondCard = "DIAMOND KING";
	}

	if (chance == 27)
	{
		secondCard = "HEART ACE";
	}
	else if (chance == 28)
	{
		secondCard = "HEART 2";
	}
	else if (chance == 29)
	{
		secondCard = "HEART 3";
	}
	else if (chance == 30)
	{
		secondCard = "HEART 4";
	}
	else if (chance == 31)
	{
		secondCard = "HEART 5";
	}
	else if (chance == 32)
	{
		secondCard = "HEART 6";
	}
	else if (chance == 33)
	{
		secondCard = "HEART 7";
	}
	else if (chance == 34)
	{
		secondCard = "HEART 8";
	}
	else if (chance == 35)
	{
		secondCard = "HEART 9";
	}
	else if (chance == 36)
	{
		secondCard = "HEART 10";
	}
	else if (chance == 37)
	{
		secondCard = "HEART JACK";
	}
	else if (chance == 38)
	{
		secondCard = "HEART QUEEN";
	}
	else if (chance == 39)
	{
		secondCard = "HEART KING";
	}

	if (chance == 40)
	{
		secondCard = "SPADE ACE";
	}
	else if (chance == 41)
	{
		secondCard = "SPADE 2";
	}
	else if (chance == 42)
	{
		secondCard = "SPADE 3";
	}
	else if (chance == 43)
	{
		secondCard = "SPADE 4";
	}
	else if (chance == 44)
	{
		secondCard = "SPADE 5";
	}
	else if (chance == 45)
	{
		secondCard = "SPADE 6";
	}
	else if (chance == 46)
	{
		secondCard = "SPADE 7";
	}
	else if (chance == 47)
	{
		secondCard = "SPADE 8";
	}
	else if (chance == 48)
	{
		secondCard = "SPADE 9";
	}
	else if (chance == 49)
	{
		secondCard = "SPADE 10";
	}
	else if (chance == 50)
	{
		secondCard = "SPADE JACK";
	}
	else if (chance == 51)
	{
		secondCard = "SPADE QUEEN";
	}
	else if (chance == 52)
	{
		secondCard = "SPADE KING";
	}

	chance = rand() % 52 + 1;

	if (chance == 1)
	{
		thirdCard = "CLUB ACE";
	}
	else if (chance == 2)
	{
		thirdCard = "CLUB 2";
	}
	else if (chance == 3)
	{
		thirdCard = "CLUB 3";
	}
	else if (chance == 4)
	{
		thirdCard = "CLUB 4";
	}
	else if (chance == 5)
	{
		thirdCard = "CLUB 5";
	}
	else if (chance == 6)
	{
		thirdCard = "CLUB 6";
	}
	else if (chance == 7)
	{
		thirdCard = "CLUB 7";
	}
	else if (chance == 8)
	{
		thirdCard = "CLUB 8";
	}
	else if (chance == 9)
	{
		thirdCard = "CLUB 9";
	}
	else if (chance == 10)
	{
		thirdCard = "CLUB 10";
	}
	else if (chance == 11)
	{
		thirdCard = "CLUB JACK";
	}
	else if (chance == 12)
	{
		thirdCard = "CLUB QUEEN";
	}
	else if (chance == 13)
	{
		thirdCard = "CLUB KING";
	}

	if (chance == 14)
	{
		thirdCard = "DIAMOND ACE";
	}
	else if (chance == 15)
	{
		thirdCard = "DIAMOND 2";
	}
	else if (chance == 16)
	{
		thirdCard = "DIAMOND 3";
	}
	else if (chance == 17)
	{
		thirdCard = "DIAMOND 4";
	}
	else if (chance == 18)
	{
		thirdCard = "DIAMOND 5";
	}
	else if (chance == 19)
	{
		thirdCard = "DIAMOND 6";
	}
	else if (chance == 20)
	{
		thirdCard = "DIAMOND 7";
	}
	else if (chance == 21)
	{
		thirdCard = "DIAMOND 8";
	}
	else if (chance == 22)
	{
		thirdCard = "DIAMOND 9";
	}
	else if (chance == 23)
	{
		thirdCard = "DIAMOND 10";
	}
	else if (chance == 24)
	{
		thirdCard = "DIAMOND JACK";
	}
	else if (chance == 25)
	{
		thirdCard = "DIAMOND QUEEN";
	}
	else if (chance == 26)
	{
		thirdCard = "DIAMOND KING";
	}

	if (chance == 27)
	{
		thirdCard = "HEART ACE";
	}
	else if (chance == 28)
	{
		thirdCard = "HEART 2";
	}
	else if (chance == 29)
	{
		thirdCard = "HEART 3";
	}
	else if (chance == 30)
	{
		thirdCard = "HEART 4";
	}
	else if (chance == 31)
	{
		thirdCard = "HEART 5";
	}
	else if (chance == 32)
	{
		thirdCard = "HEART 6";
	}
	else if (chance == 33)
	{
		thirdCard = "HEART 7";
	}
	else if (chance == 34)
	{
		thirdCard = "HEART 8";
	}
	else if (chance == 35)
	{
		thirdCard = "HEART 9";
	}
	else if (chance == 36)
	{
		thirdCard = "HEART 10";
	}
	else if (chance == 37)
	{
		thirdCard = "HEART JACK";
	}
	else if (chance == 38)
	{
		thirdCard = "HEART QUEEN";
	}
	else if (chance == 39)
	{
		thirdCard = "HEART KING";
	}

	if (chance == 40)
	{
		thirdCard = "SPADE ACE";
	}
	else if (chance == 41)
	{
		thirdCard = "SPADE 2";
	}
	else if (chance == 42)
	{
		thirdCard = "SPADE 3";
	}
	else if (chance == 43)
	{
		thirdCard = "SPADE 4";
	}
	else if (chance == 44)
	{
		thirdCard = "SPADE 5";
	}
	else if (chance == 45)
	{
		thirdCard = "SPADE 6";
	}
	else if (chance == 46)
	{
		thirdCard = "SPADE 7";
	}
	else if (chance == 47)
	{
		thirdCard = "SPADE 8";
	}
	else if (chance == 48)
	{
		thirdCard = "SPADE 9";
	}
	else if (chance == 49)
	{
		thirdCard = "SPADE 10";
	}
	else if (chance == 50)
	{
		thirdCard = "SPADE JACK";
	}
	else if (chance == 51)
	{
		thirdCard = "SPADE QUEEN";
	}
	else if (chance == 52)
	{
		thirdCard = "SPADE KING";
	}

	chance = rand() % 52 + 1;

	if (chance == 1)
	{
		fourthCard = "CLUB ACE";
	}
	else if (chance == 2)
	{
		fourthCard = "CLUB 2";
	}
	else if (chance == 3)
	{
		fourthCard = "CLUB 3";
	}
	else if (chance == 4)
	{
		fourthCard = "CLUB 4";
	}
	else if (chance == 5)
	{
		fourthCard = "CLUB 5";
	}
	else if (chance == 6)
	{
		fourthCard = "CLUB 6";
	}
	else if (chance == 7)
	{
		fourthCard = "CLUB 7";
	}
	else if (chance == 8)
	{
		fourthCard = "CLUB 8";
	}
	else if (chance == 9)
	{
	fourthCard = "CLUB 9";
	}
	else if (chance == 10)
	{
		fourthCard = "CLUB 10";
	}
	else if (chance == 11)
	{
		fourthCard = "CLUB JACK";
	}
	else if (chance == 12)
	{
		fourthCard = "CLUB QUEEN";
	}
	else if (chance == 13)
	{
		fourthCard = "CLUB KING";
	}

	if (chance == 14)
	{
		fourthCard = "DIAMOND ACE";
	}
	else if (chance == 15)
	{
		fourthCard = "DIAMOND 2";
	}
	else if (chance == 16)
	{
		fourthCard = "DIAMOND 3";
	}
	else if (chance == 17)
	{
		fourthCard = "DIAMOND 4";
	}
	else if (chance == 18)
	{
		fourthCard = "DIAMOND 5";
	}
	else if (chance == 19)
	{
		fourthCard = "DIAMOND 6";
	}
	else if (chance == 20)
	{
		fourthCard = "DIAMOND 7";
	}
	else if (chance == 21)
	{
		fourthCard = "DIAMOND 8";
	}
	else if (chance == 22)
	{
		fourthCard = "DIAMOND 9";
	}
	else if (chance == 23)
	{
		fourthCard = "DIAMOND 10";
	}
	else if (chance == 24)
	{
		fourthCard = "DIAMOND JACK";
	}
	else if (chance == 25)
	{
		fourthCard = "DIAMOND QUEEN";
	}
	else if (chance == 26)
	{
		fourthCard = "DIAMOND KING";
	}

	if (chance == 27)
	{
		fourthCard = "HEART ACE";
	}
	else if (chance == 28)
	{
		fourthCard = "HEART 2";
	}
	else if (chance == 29)
	{
		fourthCard = "HEART 3";
	}
	else if (chance == 30)
	{
		fourthCard = "HEART 4";
	}
	else if (chance == 31)
	{
		fourthCard = "HEART 5";
	}
	else if (chance == 32)
	{
		fourthCard = "HEART 6";
	}
	else if (chance == 33)
	{
		fourthCard = "HEART 7";
	}
	else if (chance == 34)
	{
		fourthCard = "HEART 8";
	}
	else if (chance == 35)
	{
		fourthCard = "HEART 9";
	}
	else if (chance == 36)
	{
		fourthCard = "HEART 10";
	}
	else if (chance == 37)
	{
		fourthCard = "HEART JACK";
	}
	else if (chance == 38)
	{
		fourthCard = "HEART QUEEN";
	}
	else if (chance == 39)
	{
		fourthCard = "HEART KING";
	}

	if (chance == 40)
	{
		fourthCard = "SPADE ACE";
	}
	else if (chance == 41)
	{
		fourthCard = "SPADE 2";
	}
	else if (chance == 42)
	{
		fourthCard = "SPADE 3";
	}
	else if (chance == 43)
	{
		fourthCard = "SPADE 4";
	}
	else if (chance == 44)
	{
		fourthCard = "SPADE 5";
	}
	else if (chance == 45)
	{
		fourthCard = "SPADE 6";
	}
	else if (chance == 46)
	{
		fourthCard = "SPADE 7";
	}
	else if (chance == 47)
	{
		fourthCard = "SPADE 8";
	}
	else if (chance == 48)
	{
		fourthCard = "SPADE 9";
	}
	else if (chance == 49)
	{
		fourthCard = "SPADE 10";
	}
	else if (chance == 50)
	{
		fourthCard = "SPADE JACK";
	}
	else if (chance == 51)
	{
		fourthCard = "SPADE QUEEN";
	}
	else if (chance == 52)
	{
		fourthCard = "SPADE KING";
	}

	chance = rand() % 52 + 1;

	if (chance == 1)
	{
		fivethCard = "CLUB ACE";
	}
	else if (chance == 2)
	{
		fivethCard = "CLUB 2";
	}
	else if (chance == 3)
	{
		fivethCard = "CLUB 3";
	}
	else if (chance == 4)
	{
		fivethCard = "CLUB 4";
	}
	else if (chance == 5)
	{
		fivethCard = "CLUB 5";
	}
	else if (chance == 6)
	{
		fivethCard = "CLUB 6";
	}
	else if (chance == 7)
	{
		fivethCard = "CLUB 7";
	}
	else if (chance == 8)
	{
		fivethCard = "CLUB 8";
	}
	else if (chance == 9)
	{
	fivethCard = "CLUB 9";
	}
	else if (chance == 10)
	{
		fivethCard = "CLUB 10";
	}
	else if (chance == 11)
	{
		fivethCard = "CLUB JACK";
	}
	else if (chance == 12)
	{
		fivethCard = "CLUB QUEEN";
	}
	else if (chance == 13)
	{
		fivethCard = "CLUB KING";
	}

	if (chance == 14)
	{
		fivethCard = "DIAMOND ACE";
	}
	else if (chance == 15)
	{
		fivethCard = "DIAMOND 2";
	}
	else if (chance == 16)
	{
		fivethCard = "DIAMOND 3";
	}
	else if (chance == 17)
	{
		fivethCard = "DIAMOND 4";
	}
	else if (chance == 18)
	{
		fivethCard = "DIAMOND 5";
	}
	else if (chance == 19)
	{
		fivethCard = "DIAMOND 6";
	}
	else if (chance == 20)
	{
		fivethCard = "DIAMOND 7";
	}
	else if (chance == 21)
	{
		fivethCard = "DIAMOND 8";
	}
	else if (chance == 22)
	{
		fivethCard = "DIAMOND 9";
	}
	else if (chance == 23)
	{
		fivethCard = "DIAMOND 10";
	}
	else if (chance == 24)
	{
		fivethCard = "DIAMOND JACK";
	}
	else if (chance == 25)
	{
		fivethCard = "DIAMOND QUEEN";
	}
	else if (chance == 26)
	{
		fivethCard = "DIAMOND KING";
	}

	if (chance == 27)
	{
		fivethCard = "HEART ACE";
	}
	else if (chance == 28)
	{
		fivethCard = "HEART 2";
	}
	else if (chance == 29)
	{
		fivethCard = "HEART 3";
	}
	else if (chance == 30)
	{
		fivethCard = "HEART 4";
	}
	else if (chance == 31)
	{
		fivethCard = "HEART 5";
	}
	else if (chance == 32)
	{
		fivethCard = "HEART 6";
	}
	else if (chance == 33)
	{
		fivethCard = "HEART 7";
	}
	else if (chance == 34)
	{
		fivethCard = "HEART 8";
	}
	else if (chance == 35)
	{
		fivethCard = "HEART 9";
	}
	else if (chance == 36)
	{
		fivethCard = "HEART 10";
	}
	else if (chance == 37)
	{
		fivethCard = "HEART JACK";
	}
	else if (chance == 38)
	{
		fivethCard = "HEART QUEEN";
	}
	else if (chance == 39)
	{
		fivethCard = "HEART KING";
	}

	if (chance == 40)
	{
		fivethCard = "SPADE ACE";
	}
	else if (chance == 41)
	{
		fivethCard = "SPADE 2";
	}
	else if (chance == 42)
	{
		fivethCard = "SPADE 3";
	}
	else if (chance == 43)
	{
		fivethCard = "SPADE 4";
	}
	else if (chance == 44)
	{
		fivethCard = "SPADE 5";
	}
	else if (chance == 45)
	{
		fivethCard = "SPADE 6";
	}
	else if (chance == 46)
	{
		fivethCard = "SPADE 7";
	}
	else if (chance == 47)
	{
		fivethCard = "SPADE 8";
	}
	else if (chance == 48)
	{
		fivethCard = "SPADE 9";
	}
	else if (chance == 49)
	{
		fivethCard = "SPADE 10";
	}
	else if (chance == 50)
	{
		fivethCard = "SPADE JACK";
	}
	else if (chance == 51)
	{
		fivethCard = "SPADE QUEEN";
	}
	else if (chance == 52)
	{
		fivethCard = "SPADE KING";
	}
}

void checkCards(string firstCard, string secondCard, string thirdCard, string fourthCard, string fivethCard)
{
	if (firstCard == secondCard || firstCard == thirdCard || firstCard == fourthCard || firstCard == fivethCard || secondCard == thirdCard || secondCard == fourthCard || secondCard == fivethCard || thirdCard == fourthCard || thirdCard == fivethCard || fourthCard == fivethCard)
	{
		cout << endl << "ONE PAIR" << endl;
	}
	if ((firstCard == secondCard && thirdCard == fourthCard) || (firstCard == secondCard && thirdCard == fivethCard) || (secondCard == thirdCard && firstCard == fourthCard) || (secondCard == thirdCard && firstCard == fivethCard) || (thirdCard == fourthCard && firstCard == secondCard) || (thirdCard == fourthCard && firstCard == fivethCard) || (fourthCard == fivethCard && firstCard == secondCard) || (fourthCard == fivethCard && firstCard == thirdCard))
	{
		cout << endl << "TWO PAIR" << endl;
	}
	if ((firstCard == secondCard && firstCard == thirdCard) || (firstCard == thirdCard && firstCard == fourthCard) || (firstCard == fourthCard && firstCard == fivethCard) || (secondCard == firstCard && secondCard == thirdCard) || (secondCard == thirdCard && secondCard == fourthCard) || (secondCard == fourthCard && secondCard == fivethCard))
	{
		cout << endl << "THREE OF KIND" << endl;
	}
}
int main()
{
	srand(time(NULL));
	string firstCard;
	string secondCard;
	string thirdCard;
	string fourthCard;
	string fivethCard;

	drawCards(firstCard, secondCard, thirdCard, fourthCard, fivethCard);

	cout << "POKER" << endl << endl
		<< "Yours cards: " << firstCard << " | " << secondCard << " | " << thirdCard << " | " << fourthCard << " | " << fivethCard << endl;

	checkCards(firstCard, secondCard, thirdCard, fourthCard, fivethCard);
}