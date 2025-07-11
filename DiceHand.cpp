#include "DiceHand.h"
#include <iostream>
#include <string>
using namespace std;

void DiceHand::setDice(Die* d) {
	dice = d;
}
void DiceHand::setSizeOfHand(int h) {
	sizeOfHand = h;
}

Die* DiceHand::getDice()const {
	return dice;

}
int DiceHand::getSizeOfHand()const {
	return sizeOfHand;
}

string DiceHand::displayDieHand() {
	string display = "Dice hand:\n";
	for (int i = 0; i < sizeOfHand; i++) {
		display += "Die " + to_string(i + 1) + ": " + " " + to_string(dice[i].getFaceValue()) + "\n";
	}
	return display;
}
void DiceHand::rollDie(int dieNum) {
	if (dieNum >= 0 && dieNum < sizeOfHand) {
		dice[dieNum].roll();
	}
}
void DiceHand::rollAllDice() {
	for (int i = 0; i < sizeOfHand; i++) {
		rollDie(i);
	}
}

DiceHand::DiceHand() : dice(nullptr), sizeOfHand(0) {
}