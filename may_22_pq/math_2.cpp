#include <iostream>
using namespace std;

// find prime factorization

vector<int> factorize(){
	for ()
}

int main () {

	int counter;
	for (int i=1; i<=1000; i++){
		counter = 0;
		for (int j=1; j<i; j++){
			if (i%j==0){
				counter += j;
			}
		}

		if (counter == i){
			cout << i <<endl;
		}

	}

}
