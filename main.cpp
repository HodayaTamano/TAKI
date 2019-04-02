#include "Game.h"
int main() {
	srand(time(NULL));
	Game game;
	game.start();
	return 0;
}


/*
how many players?
2
how many cards?
5
player number 1 name?
q
player number 2 name?
w

current: 7
q, your turn -
Your cards:     (1)2    (2)6    (3)STP    (4)9    (5)7
1
You can't put 2 on 7
2
You can't put 6 on 7
3
You can't put STP on 7
4

current: 9
w, your turn -
Your cards:     (1)+    (2)TAKI    (3)5    (4)2    (5)TAKI
5
You can't put TAKI on 9
4
You can't put 2 on 9
3
You can't put 5 on 9
2
You can't put TAKI on 9
1
You can't put + on 9
7
(1)TAKI    (2)5    (3)2    (4)TAKI    (5)1
current changed to: 1 // why??????????????
  */