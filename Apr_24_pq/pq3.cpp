#include<iostream>
#include <vector>
using namespace std;

bool num_check (char test){
	if (test >= '0' && test <= '9'){
		return true;
	}
	else {
		return false;
	}
}

int main (){

	string input;

	cin >> input;



	for (int i=0; i<input.size(); i++){
		if (input[i] == '+'){
			cout << " tighten ";
		}
		
		else if (input[i] == '-'){
			cout << " loosen ";
		}

		else {
			cout << input[i];
		}
		
		if (num_check(input[i]) == true && num_check(input[i+1]) == false && i != input.size()){
			cout << endl;
		}
	}
		
}
