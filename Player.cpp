#include "Player.h"

using namespace std;

void Player::setName (string name){
    this->name=name;
}
void Player::setNum (int n){
    this->num_of_cards=n;
}

void Player::setMyCards (vector <Card> c){
    for (int i=0; i < c.size(); i++){
        this->myCards[i]=c[i]; 
    }
}

ostream& operator << (ostream& os, Player& p){
    os << "Name: " << p.name << "\nNumber of cards: " << p.num_of_cards << "  The cards are: ";
    for (int i=1; i<p.myCards.size(); i++){
    // for (int i=1; i<; i++){
        os <<i << " ";
    } 
    // os << "The end";
    return os;
}

