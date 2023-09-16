#include <iostream>
#include <vector>

using namespace std;

bool is_prime(int n){
	for (int i = 2; i<n; i++){
		if (n%i==0){
			return false;
		}
	}
	return true;
}

void factorize(int n, vector<int> &factors){
	
	for (int i=2; i<n; i++){
		if (n%i == 0){
			if (is_prime(i) == true){
				factors.push_back(i);
			}

			else {
				factorize (i, factors);
			}

			if (is_prime(n/i) == true){
				factors.push_back(n/i);
			}

			else {
				factorize (n/i, factors);
			}

			break;

		}
	}

}

int main(){

	int n;

	vector<int> factors;

	cin >> n;

	factorize(n, factors);

	sort(factors.begin(), factors.end());

	for (int i = 0; i<factors.size(); i++){
		if (i+1 != factors.size()){
			cout << factors[i] << ", ";
		}
		else{
			cout << factors[i] << endl;
		}
	}
}
