#include "Die.h"
#include "DiceHand.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	Die one, two, three;


	srand(time(0));



	one.setNumberOfSides(10);
	one.roll();
	cout << one.results() << endl;


	two.setNumberOfSides(7);
	two.roll();
	cout << two.results() << endl;


	three.setNumberOfSides(5);
	three.roll();
	cout << three.results() << endl;


	Die* diceA = new Die[5];


	DiceHand hand1;

	hand1.setSizeOfHand(5);
	hand1.setDice(diceA);
	cout << hand1.displayDieHand() << endl;

	hand1.rollAllDice();
	cout << hand1.displayDieHand() << endl;

	hand1.rollDie(0);
	hand1.rollDie(4);

	cout << hand1.displayDieHand();





	delete[]diceA;
	diceA = nullptr;

}