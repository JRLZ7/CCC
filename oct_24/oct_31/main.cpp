#include <iostream>
using namespace std;
int main()
{
	/*
	int numOne;
	cin >> numOne;

	if (numOne>0){
		cout << "positive" <<endl;
	}
	else if (numOne==0){
		cout << "neutral" <<endl;
	}
	else {
		cout << "negative" <<endl;
	}
	*/

	double jWeight;
	double jHeight;
	double jBMI;

	cout << "Enter weight: ";
	cin >> jWeight;
	cout << "Enter height: ";
	cin >> jHeight;

	jBMI= jWeight/(jHeight*jHeight);
	cout << jBMI << endl;
	
	if (jBMI > 25){
		cout << "Overweight\n";
	}
	else if (jBMI >= 18.5){
		cout << "Normal weight\n";
	}
	else {
		cout << "Underweight\n";
	}

}

