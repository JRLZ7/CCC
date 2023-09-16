#include <iostream>
using namespace std;

int h = 0;
// height limit
// h is global variable, anything done in one function can be done anywhere else
// good for coding comp, bad for software engineer

// spend more time on paper
// keep variables consistent - it will affect the formula

int print_row(int r) {

	int n = 2*r-1;

	int m = 2*h-2*n;

	if (r <= h/2 + 1){

		for (int i=0; i<n; i++){
			cout << "*";
		}

		for (int i=0; i<m; i++){
			cout << " ";
		}

		for (int i=0; i<n; i++){
			cout << "*";
		}

		cout << endl;

	}

	else {
		print_row (h+1-r);
	}

}

int main() {

	cout << "Enter height: \n";
	cin >> h;

	for (int i=1; i<=h; i++){
		print_row(i);
	}

	/*
	   for (int hn=0; hn<h; hn++) {

	   cout << n;
	   cout << m;
	   cout << n;
	   cout << endl;
	   n += 2;

	   }
	 */

}

// if n = height, start decreasing until it reaches 1

