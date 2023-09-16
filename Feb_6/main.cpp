#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// =G formats everything correctly
// algorithm:
// sort&search
// 1) Sort all elements and output in right order

// "selection" is the most simple algorithm, not most efficient. 
// 1) Find minimum element
// 2) Switch minimum element with first
// 3) Then go to second element and repeat search
// 4) Switch second minimum element with second
// 5) Repeat steps until completion

// There is also sort(<name>.begin(), <name>.end())
// You need to include <algorithm> with that^

void switchE(int& x,int& y){
	int z=0;
	z=x;
	x=y;
	y=z;
}

int main (){
	
	vector<int> v;
	v.push_back(3);
	v.push_back(5);
	v.push_back(6);
	v.push_back(2);
	v.push_back(1);

	sort(v.begin(),v.end());
	
// ^this line is equal to all code written beneath in comments.

/*
   for (int i=0; i<v.size(); i++){
		int min = v[i];
		int minIndex = i;
		for (int j=i+1;j<v.size(); j++){
			if (min > v[j]){
				minIndex = j;
				min = v[j];
			}
		}
		int t = v[i];
		v[i] = v[minIndex];
		v[minIndex] = t;
	}
*/

	for(int e : v){
		cout << e << ",";
	}
	cout << endl;

}

/*
int main() {

    vector<int> inputCollection;
    int userInput=0;

    do{
		cout << "Please type a number:\n";
		cin >> userInput;
		if (userInput!=0){
			inputCollection.push_back(userInput);
		}
	}while (userInput!=0);


	for (int i=0; i<inputCollection.size(); i++){
		cout << inputCollection[i] <<endl;
	}

}
*/
