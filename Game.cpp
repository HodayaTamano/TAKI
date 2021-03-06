#include "Game.h"
#include "Card.h"


using namespace std;


void Game :: start(){
    string name;
    int ncard;
    Card tempC;
    tempC = this->currentCard.generate_card();
    

    cout << "how many players?\n";
    cin >> this->numOfPlayers;

    if (numOfPlayers <= 0){
        cout << "The input for the number of players has to be greater than 0. Please start over!" << endl;
        exit(EXIT_FAILURE); //This terminates the program properly, including cleanup!

    }

    cout << "how many cards?\n";
    cin >> ncard;

    if (ncard <= 0){
        cout << "The input for the number of players has to be greater than 0. Please start over!" << endl;
        exit(EXIT_FAILURE); //This terminates the program properly, including cleanup!

    }

    for (int i = 1; i <= this->numOfPlayers; i++){
        Player p;
        cout << "player number " << i << " name?\n";
        cin >> name;
        p.setName(name);
        p.setNum(ncard);
        p.setMyCards(ncard);
        this->players.push_back(p);
        
    } 
    for (int i = 0; i < this->numOfPlayers; i++){
        Player p;
        p = this->players[i];
        // p.myTurn(tempC);
    }

    play(tempC);
}

void Game :: play (Card &current){

    int i = 0;
    Player winner;

    this->players[i].myTurn(current); 
    this->players[i].changeCurrent(current, this->players[i]);

    i++;

    this->players[i].myTurn(current); 
    this->players[i].changeCurrent(current, this->players[i]);

    cout << "current changed to: " << current;

    // while (this->players.size() == numOfPlayers){ // if any player wins, numOfPlayers--

    //     i++;

    //     if (current)
    //     // this->players[i].myTurn(current);                               
    //     // this->players[i].changeCurrent(current, this->players[i]);

    // }

}





