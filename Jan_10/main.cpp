#include <iostream>
#include <math.h>

using namespace std;

struct personData {

	string name;
	int score;
	float personality;
	string hobbies;

};

void readInfo (personData& p){
	cout << p.name << "'s information:\n";
	cout << p.score <<endl;
	cout << p.personality <<endl;
	cout << p.hobbies <<endl;

}

int main() {

	personData Jason = {"Jason", 90, 95, "debate"};

	readInfo(Jason);

}
