#include <iostream>

using namespace std;

void dayc (int &dn, string ans, int num) {

	if (ans[num] == 'Y'){
		dn++;
	}

	else {
	}



}

void output (int dayn, int dn, int j, int &counter){

	if (dn == j){
		if (counter > 0){
			cout << ",";
		}
		cout << dayn;
		counter++;
	}

}

int main () {


	int N;
	int d1 = 0;
	int d2 = 0;
	int d3 = 0;
	int d4 = 0;
	int d5 = 0;
	int counter = 0;
	string ans;

	cin >> N;

	for (int i=0; i<N; i++){
		cin >> ans;

		dayc (d1, ans, 0);
		dayc (d2, ans, 1);
		dayc (d3, ans, 2);
		dayc (d4, ans, 3);
		dayc (d5, ans, 4);

	}

	for (int j=N; j>0; j--){

		output(1, d1, j, counter);
		output(2, d2, j, counter);
		output(3, d3, j, counter);
		output(4, d4, j, counter);
		output(5, d5, j, counter);

		if (counter > 0){
			cout << endl;
			break;
		}

	}

		

}
