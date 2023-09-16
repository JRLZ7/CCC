#include <iostream>
#include <vector>

using namespace std;

void factors(int n, vector<int> &pos, vector<int> &neg){

	for (int i=1; i<n/2; i++){

		if (n%i == 0){
			pos.push_back(i+(n/i));
			neg.push_back((n/i)-i);
		}

	}

}

int main(){

	int j;
	int l;

	cin >> j;

	for (int i=0; i<j; i++){
		cin >> l;
	
		vector<int> pos;
		vector<int> neg;
	
		factors(l, pos, neg);
		
		bool flag = false;

		for (int i=0; i<pos.size() && flag == false; i++){
			
			for (int m=0; m<neg.size() && flag == false; m++){
				
				if (neg[m] == pos[i]){
					cout << l << " is nasty\n";
					flag = true;
				}
			}
		}
		
		if (flag == false){
			cout << l << " is not nasty\n";
		}

	}

}
