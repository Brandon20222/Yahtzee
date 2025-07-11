#ifndef DIE
#define DIE
#include <iostream>
using namespace std;


class Die {
private:
	int numberOfSides;
	int faceValue;
public:
	Die();
	void setNumberOfSides(int n);
	void setFaceValue(int face);

	int getNumberOfSides()const;
	int getFaceValue()const;

	void roll();
	string results();
};




#endif