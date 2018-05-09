using namespace std;

class Card {
private:
	string suit[4] = { "Heats", "Diamonds", "Clubs", "Spades" };
	string value[13] = { "2","3","4","5","6","7","8","9","10","J","Q","K","A" };
	int weight;
	bool isUsed;
public:
	Card();

	Card(int x, int y);

	~Card();

	void setVal(int x);

	void setSuit(int x);

	void setWeight(int x, string y);

	void printCard(int x, int y);



};
