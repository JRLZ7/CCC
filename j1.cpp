#include <iostream>
using namespace std;

void print_space(int v){
	for (int i=0; i<v; i++){
		cout << " ";
	}
}

void print_ast(int v){
	for (int i=0; i<v; i++){
		cout << "*";
	}
}

int main() {

	int t;
	int s;
	int h;

	cout << "Enter tine length:" <<endl;
	cin >> t;
	cout << "Enter tine spacing:" <<endl;
	cin >> s;
	cout << "Enter handle length:" <<endl;
	cin >> h;

	for (int i=0; i<t; i++){
		cout << "*";
		print_space(s);
		cout << "*";
		print_space(s);
		cout << "*" <<endl;
	}

	for (int i=0; i<2*s+3; i++){
		cout << "*";
	}
	cout << endl;

	for (int i=0; i<h; i++){
		cout << " ";
		print_space(s);
		cout << "*" <<endl;
	}


}
