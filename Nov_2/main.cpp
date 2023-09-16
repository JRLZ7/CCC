#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> const &input){
	cout << endl;
	for (int i = 0; i < input.size(); i++) {
        cout << input.at(i) << ' ';
    }
	cout << endl <<endl;
}

int main(){
	vector<int> testV;
	int actualV;
	int askV;

	cout << "\nHow many numbers would you want to type?\n";
	cin >> askV;
	cout << endl;
	for (int i=1; i<=askV; i++){
		cout << "Insert number.\n";
		cin >> actualV;
		testV.push_back(actualV);
	}
	
	print(testV);

}

