#include <iostream>
using namespace std;

int a = 0;
int b = 0;

void score(int i, int n){

	if (i%2 == 0){
		cout << "Player A scores " << n << " point(s)." << endl;
		a=a+n;
	}

	else {
		cout << "Player B scores " << n << " point(s)." << endl;
		b=b+n;
	}

}

int main() {

	string input[52];
	int high[52];

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
			score(i, 4);
		}

		if (i<49 && input[i] == "king" && high[i+1] == 0 && high[i+2] == 0 && high[i+3] == 0){
			score(i, 3);
		}

		if (i<50 && input [i] == "queen" && high[i+1] == 0 && high[i+2] == 0){
			score(i, 2);
		}

		if (i<51 && input[i] == "jack" && high[i+1] == 0){
			score(i, 1);	
		}

	}

		cout << "Player A: " << a << " point(s)." << endl;
		cout << "Player B: " << b << " point(s)." << endl;
}
