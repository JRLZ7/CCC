#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int mode(vector<int> storage) {

	int counter_1 = 0;
	int counter_2 = 0;
	int n = storage.size();

	int mode = 0;

	for (int i=0; i<n; i++){

		for (int j=0; j<n; j++){

			if (j != i){
				if (storage[j] == storage[i]){
					counter_1++;
				}
			}
		}

		if (i == 1){
			counter_2 = counter_1;
		}

		if (counter_1 > counter_2){
			mode = storage[i];
			counter_2 = counter_1;
		}

	}

	return mode;

}

int median(vector<int> median) {

	int n = median.size();

	sort(median.begin(), median.end());

	int div = n/2;

	if (n%2==0){
		return (median[div-1] + median[div]) / 2;
	}

	else {
		return median[div];
	}

}

int main (){

	int n;
	int t;
	double mean=0.0;
	vector<int> storage;

	cin >> n;

	for (int i=0; i<n; i++){
		cin >> t;
		storage.push_back(t);
		mean += t;
	}

	cout << "Mean: " << mean/n << endl;

	cout << "Mode: " << mode(storage) << endl;

	cout << "Median: " << median(storage) << endl;
}
