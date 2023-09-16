#include <iostream>
#include <vector>
using namespace std;

// Vectors are a template class
// vector<data_type> variable_name;

// functions: <name>.push_back(), adds a number to the back
// <name>.size(), tells size starting from 1
// for each loop is for how many variables in an array

int main() {
	vector<int> v;

	v.push_back(1);
	v.push_back(-20);
	v.push_back(3);
	v.push_back(5123);

	cout << v[0] <<endl;
	cout << v[1] <<endl;
	cout << v[2] <<endl;
	cout << v[3] <<endl;

	for (int i=0; i<v.size(); i++){
		v[i]=v[i]+1;
	}

	for (int i=0; i<v.size(); i++){
		cout << v[i];
	}

	for (int &e:v) {
		e=e+1;
		// this is a for each loop
		// e is a copy of v, so it can't change v
	}
	cout << v[0];
}
