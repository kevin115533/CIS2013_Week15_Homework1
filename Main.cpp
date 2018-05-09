#include <iostream>
#include "Cards.h"
#include "Player.h"
using namespace std;

int main() {
	int x, y;
	char stay;

	cin >> x >> y;

	Card user(x,y);

	user.printCard(x,y);

	cin >> stay;
	return 0;
}
