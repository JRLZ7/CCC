#include <iostream>
using namespace std;

int main (){

	int n;
	string nameMax;
	int bidMax=0;

	cin >> n;

	for (int i=0;i<n;i++){
		
		int bidTemp;
		string nameTemp;

		cin >> nameTemp;
		cin >> bidTemp;

		if (bidTemp>bidMax){
			bidMax=bidTemp;
			nameMax=nameTemp;
		}

	}

	cout << nameMax <<endl;






}






/*
do while:
int main(){

	int i=5;

	// do while loop runs at least once
	do {
		cout << "hello\n";

	}while(i==5);


}
*/

/*
switch:
int main(){
	int i;
	cin >> i;

	switch (i){
		case 1: 
			cout << "Hello\n";
			break;
		case 2:
			cout << "Hi\n";
			break;
		case 3:
			cout << "Hey\n";
			break;
		default:
			// if i doesn't fit a case
			cout << "Not a case\n";
			break;
	}
}
*/
