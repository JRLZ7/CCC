#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

// auto as a data type lets compiler deduce data type.
// container is any collection of data (vectors, lists, arrays)
// iterators are a bridge between containers and algorithms

// so iterators need to  be used as parameters for sort functions, not containers

// algorithms: sort(), find()

//  HW: learn and review code (specifically vectors)

int main() {
	vector<int> l1;

	l1.push_back(134);
	l1.push_back(2);
	l1.push_back(23);
	l1.push_back(46);
	l1.push_back(5);
	l1.push_back(64);
	l1.push_back(37);
	l1.push_back(9);


	for (auto e:l1){
		// this loop could apply for list and vector (or any container, even array)
		cout << e;
		cout << endl;
		// e itself is an element, so it could be used for a list
	}

	cout << endl;

	sort(l1.begin(), l1.end());
	auto f = find(l1.begin(), l1.end(), 23);
	cout << "here " << *f <<endl;

	auto p = l1.begin();
	// the data type is name<data_type>::iterator
	cout << *p;
	cout << endl;

	
	for (p = l1.begin(); p != l1.end(); ++p){
		cout << *p;
		cout << endl;
	}

}
