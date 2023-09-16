#include <iostream>

using namespace std;

void dpa(int n){
	int add=1;
	for (int m=2; m<n-1; m++){
		if (n%m==0){
			add += m;
		}
	}

	if (add == n){
		cout << n << " is a perfect number.\n";
	}

	else if (add > n){
		cout << n << " is an abundant number.\n";
	}

	else{
		cout << n << " is a deficient number.\n";
	}
}

int main(){

	int j=0;
	int n=0;

	cin >> j;

	for (int i=0; i<j; i++){
		cin >> n;
		
		dpa(n);

	}
}
