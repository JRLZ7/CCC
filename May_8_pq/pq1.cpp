#include <iostream>

using namespace std;

int main () {

	int n;
	int s=0;
	int e=0;
	string sentence;

	cin >> n;
	getline(cin, sentence);

	for (int i=0; i<n; i++){
		getline(cin, sentence);
		
		for (int i=0; i<sentence.size(); i++){

			if (i != sentence.size()-1){
				if (sentence[i+1] == ' '){
					
					e=i;
				}
			}

			if (i != 0) {
				if (sentence[i-1] == ' '){

					s=i;
				}
			}

			if (e-s+1 == 4){
				for (int j=s; j<=e; j++){
					sentence[j] = '*';
				}
			}

		}
		cout << sentence << endl;	
	}
}
