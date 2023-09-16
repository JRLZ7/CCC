#include <iostream>
#include <vector>

using namespace std;


// anonymous functions or lambda:
// functions without a name
// uses square brackets

// for_each()

// function is a "first-class citizen" in C++, but not in C

/*
bool f(int x, int y) {

	return x>y;
	// reverses

	// return x<y;
	// sorts

}
*/

int main() {

	vector<int> v {2,4,4,2,4,54,1,2,4,51,2,34};

	sort(v.begin(), v.end());
	// simplified version, two paramters


	sort(v.begin(), v.end(), [](int x, int y){ 
		return x>y;		
			});

	// overloaded version, (begin, end, function)
	// just name function name

	for (auto e:v){
		cout << e;
		cout << endl;
	}
	/*

	for_each (v.begin(),v.end(),[](int e){
			
			if (e%2==0){
				cout << e <<endl;
			}

			});
	// for each (beginning and end), apply function f
	*/

	for_each (v.begin(), v.end(), [](int& e) {

			if (e%2==0) {
				e++;
			}
		});
	
	for_each (v.begin(), v.end(), [](int e){
				
			cout << e << endl;
		});
	
	cout << endl;

	vector<int> v2 = {1,2,3,4,5,6,7,8,9};

	int m = 10;
	// can't use "m" function in the for_each below bcuz it's specified in the "int main" function
	// needs to put "[=]" in, called "capture"
	// captures all available variables in the function so it could be used

	for_each (v2.begin(), v2.end(), [=](int& e){
			e = e*m;
			});
	
	// [=] is a "closure" function, which can reference variables defined outside of the anonymous function
	// [&] could also be used if u want to change a variable inside the anoynmous function (not commonly used)

	for (int e:v2){
		cout << e <<endl;
	}
}










