#include <iostream>
using namespace std;

bool is_perfect (int n){

	int factors = 0;

	for (int i = 2; i < n; i++){
		if ((i+1) != n){
			if (n%i == 0){
				factors += i;
			}

		}

		else{
			factors++;
		}
	}

	if (factors == n){
		return true;
	}

	else{
		return false;
	}

}

bool is_armstrong (int n){
	int da;
	int db;
	int dc;

	da = n/100;
	db = (n/10) - (da * 10);
	dc = (n) - (da * 100) - (db * 10);

	if ((da*da*da) + (db*db*db) + (dc*dc*dc) == n){
		return true;
	}

	else {
		return false;
	}

}

bool is_square (int n){

	for (int i = 1; i < (n/2); i++){
		if (i*i == n){
			return true;
		}
	}

	return false;
}

int main (){

	cout << "Perfect numbers:\n";

	for (int i = 1000; i <= 9999; i++){

		if (is_perfect(i) == true){
			cout << i <<endl;
		}

	}

	cout << "Armstrong numbers:\n";

	for (int i = 100; i<= 999; i++){

		if (is_armstrong(i) == true){
			cout << i << endl;
		}
	}

	cout << "Square numbers:\n";

	for (int i = 8000; i < 9000; i++){
		if (is_square(i) == true){
			cout << i << endl;
		}
	}

}
