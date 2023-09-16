#include <iostream>
using namespace std;



int main() {

	int n;
	int p;
	int f;
	int s;
	int g=0;

	cin >> n;

	for (int i=0; i<n; i++){
		cin >> p;
		cin >> f;

		s = (5*p) - (3*f);
		if (s > 40){
			g++;
		}	
	}

	cout << g;

	if (g==n){
		cout << "+";
	}

	cout << endl;
}







