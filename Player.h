#include <string>
using namespace std;

class Player {
private:
	string name1, name2;
public:
	Player(string name1, string name2);

	void setName(string a, string b);

	void getName();
};
