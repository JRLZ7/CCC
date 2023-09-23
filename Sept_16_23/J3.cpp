#include <iostream>

using namespace std;

int main () {


	int N;
	int dn[] = {0,0,0,0,0};
	int max = 0;
	string ans;

	cin >> N;

	for (int i=0; i<N; i++){
		cin >> ans;

		for (int k=0; k<5; k++){
			if (ans[k] == 'Y'){
				dn[k]++;
			}
		}

	}


	for (int m=0; m<5; m++) {
		if (dn[m] > max){
			max =dn[m];
		}
	}

	int c = 0;
	
	for (int j=0; j<5; j++){
		if (dn[j] == max){
			if (c>0){
				cout << ",";
			}
			cout << j+1;
		   	c++;
		}
	}


}
