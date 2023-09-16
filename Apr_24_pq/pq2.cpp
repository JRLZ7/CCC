#include <iostream>
using namespace std;


int main() {

	string input[52];
	int high[52];

	int a = 0;
	int b = 0;

	for (int i=0; i<52; i++){
		cin >> input[i];

		if (input[i] == "jack" || input[i] == "queen" || input[i] == "king" || input[i] == "ace"){
			high[i] = 1;
		}

		else{
			high[i] = 0;
		}

	}

	for (int i=0; i<52; i++){
		if (i<48 && input[i] == "ace" && high[i+1] == 0 && high[i+2] == 0 && high[i+3] == 0 && high[i+4] == 0){
			if (i%2 == 0){
				cout << "Player A scores 4 point(s)." << endl;
				a=a+4;
			}
			else {
				cout << "Player B scores 4 point(s)." << endl;
				b=b+4;
			}

		}

		if (i<49 && input[i] == "king" && high[i+1] == 0 && high[i+2] == 0 && high[i+3] == 0){
			if (i%2 == 0){
				cout << "Player A scores 3 point(s)." << endl;
				a=a+3;
			}
			else {
				cout << "Player B scores 3 point(s)." << endl;
				b=b+3;
			}

		}

		if (i<50 && input [i] == "queen" && high[i+1] == 0 && high[i+2] == 0){
			if (i%2 == 0){
				cout << "Player A scores 2 point(s)." << endl;
				a=a+2;
			}
			else {
				cout << "Player B scores 2 point(s)." << endl;
				b=b+2;
			}
		}

		if (i<51 && input[i] == "jack" && high[i+1] == 0){

			if (i%2 == 0){
				cout << "Player A scores 1 point(s)." << endl;
				a=a+1;
			}
			else {
				cout << "Player B scores 1 point(s)." << endl;
				b=b+1;
			}
		}


	}

		cout << "Player A: " << a << " point(s)." << endl;
		cout << "Player B: " << b << " point(s)." << endl;
}
