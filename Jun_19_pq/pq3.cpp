#include <iostream>

using namespace std;

// hw: do subtraction

int c2i (char n){
	return n - '0';
}

char i2c (int n){
	return n + '0';
}

string add(string a, string b){

	string output = "";

	for (int i = a.length(); i > 0; i--){
		
		int cross = 0;

		if (c2i(a[i]) + c2i(b[i]) + cross >= 10){
			cross++;
			output = i2c((c2i(a[i]) + c2i(b[i]) + cross)%10) + output;
		}

		else{
			output = i2c((c2i(a[i]) + c2i(b[i]) + cross)%10) + output;
		}
// add cross somewhere
	}

	return output;
}

int main () {
	string a = "199";
	string b = "101";

	cout << add(a,b) << endl;


}
