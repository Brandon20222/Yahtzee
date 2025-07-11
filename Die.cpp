#include "Die.h"
#include <iostream>
#include <string>
using namespace std;

void Die::setNumberOfSides(int n) {
	numberOfSides = n;
}
void Die::setFaceValue(int face) {
	faceValue = face;
}

int Die::getNumberOfSides()const {
	return numberOfSides;
}
int Die::getFaceValue()const {
	return faceValue;
}

void Die::roll() {
	faceValue = rand() % numberOfSides + 1;
}

string Die::results() {
	return "The result of rolling one die with a number of sides equaling  " + to_string(numberOfSides) + " and the value of rolling that die was " + to_string(faceValue);

}

Die::Die(): numberOfSides(6),faceValue(1){
}