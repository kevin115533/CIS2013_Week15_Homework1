#include "Player.h"
#include <iostream>

Player::Player(string name1, string name2) {
	setName(name1, name2);
};

void Player::setName(string a, string b) {
	name1 = a;
	name2 = b;
}

void Player::getName() {
	cout << name1 << " and " << name2;
}