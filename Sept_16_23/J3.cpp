#include <iostream>

using namespace std;

void dayc (int &dn, string ans, int num) {

	if (ans[num] == 'Y'){
		dn++;
	}

	else {
	}



}

int main () {


	int N;
	int d1;
	int d2;
	int d3;
	int d4;
	int d5;
	int counter = 0;
	string ans;

	cin >> N;

	for (int i=0; i<N; i++){
		cin >> ans;

		dayc (d1, ans, 1);
		dayc (d2, ans, 2);
		dayc (d3, ans, 3);
		dayc (d4, ans, 4);
		dayc (d5, ans, 5);

	}

	for (int j=N; j>0; j--){

		if (d1 == j){
			cout << d1 << endl;
			counter++;
		}

		if (d2 == j){
			cout << d2 << endl;
			counter++;
		}

		if (d3 == j){
			cout << d3 << endl;
			counter++;
		}

		if (d4 == j){
			cout << d4 << endl;
			counter++;
		}

		if (d5 == j){
			cout << d5 << endl;
			counter++;
		}

		if (counter > 0){
			break;
		}

	}

		

}
