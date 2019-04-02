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

void Player :: myTurn(Card &c){
    
    cout << "\n";    
    cout << "current: " << c << "\n";
    cout << this->name << ", your turn - \nYour cards:     ";

    for (int i = 0; i < this->myCards.size(); i++){
        cout << "(" << i+1 << ")" << this->myCards[i] << "    ";
    }
    cout << "\n";
}

void Player :: changeCurrent(Card &current, Player &p){

    int choise;
    cin >> choise;
    int myCards = this->myCards.size()+1;


    if (choise > this->myCards.size() || choise <= 0){
        Card deck; //kupa
        deck = this->extraCard.generate_card();
        p.myCards.push_back(deck);

        // Player's cards after generated card from the deck.
        for (int i = 1; i < myCards; i++){
            cout << "(" << i << ")" << this->myCards[i] << "    ";
        }
        cout << "\n";
    }

    else{   
        int i = 1;  
        while(i < p.myCards.size() && choise != i) i++;

        bool flag = true;

        while(!current.is_legal(p.myCards[i]) && flag){
            cout << "You can't put " << p.myCards[i-1] << " on " << current << "\n";
            cin >> choise;

            if (choise > myCards || choise <= 0){
                Card deck; //kupa
                deck = this->extraCard.generate_card();
                p.myCards.push_back(deck);

                // Player's cards after generated card from the deck.
                for (int i = 1; i < myCards; i++){
                    cout << "(" << i << ")" << this->myCards[i] << "    ";
                }
                cout << "\n";

                flag = false;
            }

            i = 1;  
            while(i < p.myCards.size() && choise != i) i++;
            if (current.is_legal(p.myCards[i])){
                current = p.myCards[i-1];
                flag = false;
            }
        }
        current = p.myCards[i-1];
    }
}



