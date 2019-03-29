#include "Game.h"
#include "Card.h"

using namespace std;


void Game :: start(){
    string name;
    int ncard;

    cout << "how many players?\n";
    cin >> this->numOfPlayers;
    cout << "how many cards?\n";
    cin >> ncard;

    for (int i = 1; i <= this->numOfPlayers; i++){
        Player p;
        cout << "player number " << i << " name?\n";
        cin >>name;
        p.setName(name);
        p.setNum(ncard);
        // players.push_back(p);
        
        // cout << p << endl;
        vector <Card> temp(ncard);
        for (int j = 0; j <=temp.size()-1; j++){
            Card c;
            temp.push_back(c.generate_card());
        }
        // p.myCards.push_back(c.generate_card());
        p.setMyCards(temp);
        players.push_back(p);
    } 
}

// void Game :: myTurn (){}