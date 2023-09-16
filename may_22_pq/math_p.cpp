#include <iostream>
using namespace std;

int GCF (int a, int b){
	int c=0;

	if (b>a){
		c=a;
		a=b;
		b=c;
	}

	for (int i=b; i>0; i--){
		if (b%i==0 && a%i==0){
			return i;
		}
	}

	return 0;
}

int LCM (int a, int b){

	int c=0;

	if (b>a){
		c=a;
		a=b;
		b=c;
	}


	for (int i=1; i<=b; i++){
		if ((a*i)%b==0){
			return a*i;
		}
	}

	return 0;
}
void simplify(int a, int b, int &a2, int &b2){
	
	int c = GCF(a,b);
	a = a/c;
	b = b/c;
	a2 = a;
	b2 = b;
}

void fraction_add(int n1, int d1, int n2, int d2, int &n, int &d) {

	d = LCM(d1, d2);

	n1 = n1 * (d / d1);
	n2 = n2 * (d / d2);

	n = n1 + n2;

	simplify(n,d,n,d);

}

int main (){
	int n1;
	int d1;
	int n2;
	int d2;

	int n;
	int d;

	cout << "n1/d1 + n2/d2\n";

	cout << "n1: ";
	cin >> n1;

	cout << "d1: ";
	cin >> d1;

	cout << "n2: ";
	cin >> n2;

	cout << "d2: ";
	cin >> d2;

	// cout << LCM(a,b) <<endl;
	// cout << GCF(a,b) << endl; 

	fraction_add(n1, d1, n2, d2, n, d);

	int m=0;

	if (d==1){
		cout << n <<endl;
	}

	else if (n>d){
		m = n/d;
		cout << m << " and " << n-(m*d) << "/" << d <<endl;
	}

	else if (n==d){
		cout << "1\n";
	}

	else {
		cout << n << "/" << d <<endl;
	}


}
