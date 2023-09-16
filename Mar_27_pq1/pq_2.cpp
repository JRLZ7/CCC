#include <iostream>
#include <vector>
using namespace std;

// avoid pointers in (for each) loops. One is from C, and the other is from C++.
// pure arrays also don't work well with C++ standard library (STL)

void print_n (vector<string> lol){
	for (auto& e:lol){
		cout << e <<endl;
	}
}

int main (){

	cout << "Select int 0-9" << endl;

	int in;
	string oxxxo = " *** ";
	string xooox = "*   *";
	string ooooo = "     ";
	string oooox = "    *";
	string xoooo = "*    ";

	cin >> in;

	vector<string> zero = {
		oxxxo,
		xooox,
		xooox,
		xooox,
		ooooo,
		xooox,
		xooox,
		xooox,
		oxxxo,
	};

	vector<string> one = {
		ooooo,
		oooox,
		oooox,
		oooox,
		ooooo,
		oooox,
		oooox,
		oooox,
		ooooo,
	};

	vector<string> two = {
		oxxxo,
		oooox,
		oooox,
		oooox,
		oxxxo,
		xoooo,
		xoooo,
		xoooo,
		oxxxo,
	};

	vector<string> three = {
		oxxxo,
		oooox,
		oooox,
		oooox,
		oxxxo,
		oooox,
		oooox,
		oooox,
		oxxxo,
	};

	vector<string> four = {
		ooooo,
		xooox,
		xooox,
		xooox,
		oxxxo,
		oooox,
		oooox,
		oooox,
		ooooo,
	};
	
	vector<string> five = {
		oxxxo,
		xoooo,
		xoooo,
		xoooo,
		oxxxo,
		oooox,
		oooox,
		oooox,
		oxxxo,
	};

	vector<string> six = {
		oxxxo,
		xoooo,
		xoooo,
		xoooo,
		oxxxo,
		xooox,
		xooox,
		xooox,
		oxxxo,
	};

	vector<string> seven = {
		oxxxo,
		oooox,
		oooox,
		oooox,
		ooooo,
		oooox,
		oooox,
		oooox,
		ooooo,
	};

	vector<string> eight = {
		oxxxo,
		xooox,
		xooox,
		xooox,
		oxxxo,
		xooox,
		xooox,
		xooox,
		oxxxo,
	};

	vector<string> nine = {
		oxxxo,
		xooox,
		xooox,
		xooox,
		oxxxo,
		oooox,
		oooox,
		oooox,
		oxxxo,
	};
	
	vector<vector<string>> select {zero, one, two, three, four, five, six, seven, eight, nine};

	print_n(select[in]);
}


