#include <iostream>
using namespace std;

bool is_prime(int n) {
	
	for (int i=2; i<n; i++){
		if (n%i == 0){
			return false;
		}
	}
	return true;
}

int main() {

	int n;
	cin >> n;

	for (int i=0; i<n; i++){
		if (is_prime(i)){
			cout << i <<endl;
		}
	}

	is_prime(n);
}