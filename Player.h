#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <vector>
#include "Card.h"

using namespace std;



class Player {
private:
	string name;
	int num_of_cards;
	vector <Card> myCards;


public:
	//bool play (&Card currentCard)

	void myTurn (const Card &c);
	void changeCurrent(const Card &current, Player &p);


	// SETTERS
	void setName(string name); 
	void setNum(int n); 
	void setMyCards(int num_of_cards);
	


	friend ostream& operator <<(ostream& os, Player& p);

	
};


#endif



