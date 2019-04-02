#include "Player.h"

using namespace std;

void Player::setName (string name){
    this->name=name;
}
void Player::setNum (int n){
    this->num_of_cards=n;
}

void Player::setMyCards(int n){
    for (int i=0; i < n; i++){
        Card c;
        this->myCards.push_back(c.generate_card()); 
    }
}


void Player :: myTurn(const Card &c){
    
    cout << "\n";    
    cout << "current: " << c << "\n";
    cout << this->name << ", your turn - \nYour cards:     ";

    for (int i = 1; i < this->myCards.size(); i++){
        cout << "(" << i << ")" << this->myCards[i] << "    ";
    }
    cout << "\n";
}


void Player :: changeCurrent(const Card &current, Player &p){

    int choise;
    cin >> choise;

    if (choise > p.myCards.size() && choise <= 0){
        Card deck; //kupa
        deck.generate_card();
        p.myCards.push_back(deck);
    }
    else {
        int i = 1;  
        while(i < p.myCards.size() && choise != i) i++;
        if (current.is_legal(p.myCards[i]))
            current = p.myCards[i];
        else
            cout << "You can't put " << p.myCards[i] << " on " << current << "\n";
    }

    

}



// ostream& operator << (ostream& os, Player& p){
//     ;os << "Name: " << p.name << "\nNumber of cards: " << p.num_of_cards << "  The cards are: ";
//     for (int i=1; i<p.myCards.size(); i++){
//     // for (int i=1; i<; i++){
//         os <<i << " ";
//     } 
//     // os << "The end";
//     return os;
// }

// void Player :: addCard (const Card c){
// this->myCards.
// }

