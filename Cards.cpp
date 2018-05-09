#include <string>
#include <iostream>
#include "Cards.h"
using namespace std;

Card::Card() {
	setVal(1);
	setSuit(1);
}


Card::Card(int x, int y){
	setVal(x);
	setSuit(y);
	//setWeight();
}

Card::~Card() {
}


void Card::setVal(int x) {
	value[x];
	if (value[x] == "2") {
		weight = 2;
	}
	if (value[x] == "3") {
		weight = 3;
	}
	if (value[x] == "4") {
		weight = 4;
	}
	if (value[x] == "5") {
		weight = 5;
	}
	if (value[x] == "6") {
		weight = 6;
	}
	if (value[x] == "7") {
		weight = 7;
	}
	if (value[x] == "8") {
		weight = 8;
	}
	if (value[x] == "9") {
		weight = 9;
	}
	if (value[x] == "10") {
		weight = 10;
	}
	if (value[x] == "J") {
		weight = 10;
	}
	if (value[x] == "Q") {
		weight = 10;
	}
	if (value[x] == "K") {
		weight = 10;
	}
	if (value[x] == "A") {
		weight = 11;
	}
	
}

void Card::setSuit(int x) {
	suit[x];
}

//void Card::setWeight(int x,string y) {
//	value[x] = y;
//	if (y == "2") {
//		weight = 2;
//	}
//}

void Card::printCard(int x, int y) {
	cout << value[x] << " of " << suit[y] << " card weight is " << weight;
}
