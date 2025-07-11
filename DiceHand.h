#ifndef DIEHAND
#define DIEHAND
#include "Die.h"
#include <iostream>
using namespace std;


class DiceHand {
private:
	Die* dice;
	int sizeOfHand;
public:
	DiceHand();
	void setDice(Die* d);
	void setSizeOfHand(int h);

	Die* getDice()const;
	int getSizeOfHand()const;

	string displayDieHand();
	void rollDie(int dieNum);
	void rollAllDice();

};




#endif