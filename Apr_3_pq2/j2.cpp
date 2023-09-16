#include <iostream>
using namespace std;

int main (){

	int total;

	cin >> total;

	int x;
	int y;

	int coef_x = 2;
	int coef_y = 3;

	for (x = 0; coef_x*x <= 100; x++){
		for (y = 0; coef_y*y + coef_x*x <= 100; y++){
			if (coef_x*x + coef_y*y == 100){
				cout << coef_x << "(" << x << ") + " << coef_y << "(" << y << ") = " << total << endl;
			}
		}
	}

}
