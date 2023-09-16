#include <iostream>
using namespace std;

int main() {

	int n;
	int t = 0;
	string pepper;

	cin >> n;

	for (int i=0; i<n; i++){
		cin >> pepper;
		if (pepper == "Poblano"){
			t+=1500;
		}
		
		else if (pepper == "Mirasol"){
			t+=6000;
		}

		else if (pepper == "Serrano"){
			t+=15500;
		}

		else if (pepper == "Cayenne"){
			t+=40000;
		}

		else if (pepper == "Thai"){
			t+=75000;
		}

		else{
			t+=125000;
		}
	}

	cout << t <<endl;

}
