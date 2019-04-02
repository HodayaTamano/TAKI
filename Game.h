#ifndef GAME_H
#define GAME_H
#include <vector>
#include <iostream>
#include "Player.h"
#include "Card.h"

using namespace std;

class Game {
private:
	//private members and functions
	int numOfPlayers;
	vector <Player> players;
	Card currentCard;
	Player currentPlayer;

public:
	//public members and functions
	Game(){};
	void start();
	void play (const Card &current);

};
#endif




