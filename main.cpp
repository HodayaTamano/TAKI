#include "Game.h"
int main() {
	srand(time(NULL));
	Game game;
	game.start();
	return 0;
}


/*
Player.cpp: In member function ‘void Player::changeCurrent(const Card&, Player&)’:
Player.cpp:47:34: error: passing ‘const Card’ as ‘this’ argument discards qualifiers [-fpermissive]
             current = p.myCards[i];
                                  ^
In file included from Player.h:5:0,
                 from Player.cpp:1:
Card.h:18:8: note:   in call to ‘Card& Card::operator=(const Card&)’
  Card& operator=(const Card& card) {clr = card.clr; s = card.s; return *this;}; //operator= 
  
  */