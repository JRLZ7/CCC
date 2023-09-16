#include <iostream>
using namespace std;

int gcd(int a, int b){
	int max = a>b?a:b;
	int min = a<b?a:b;

	if (max%min == 0){
		return min;
	}

	return gcd(max%min, min);
}


int division(int num, int denom){
	int q = 0;
	for (int i=denom; i<=num; i+=denom){
		q++;
	}
	return q;
}

int main() {

	int n;
	int d;
	int max=1;


	cout << "Numerator" << endl;
	cin >> n;

	cout << "Denominator" << endl;
	cin >> d;

	int r = n%d;
/*
	for (int i=1; i<=r && i<= d; i++){
		if (r%i==0 && d%i==0){
			if (i>max){
				max = i;
			}
		}
	}
*/
	int gcd_ = gcd(r, d);
	if (n%d == 0){
		cout << n/d <<endl;
	}

	else {
	cout << n/d << " " << r/gcd_ << "/" << d/gcd_ <<endl;
	}
}
