#include <iostream>
#include <vector>

using namespace std;

int main(){

	int n;
	int subject;
	int verb;
	int object;
	vector<string> list;
	string q;

	cin >> n;

	for (int j=0; j<n; j++){

		cin >> subject;
		cin >> verb;
		cin >> object;
		cin.ignore (101, '\n');
		for (int i=0; i<(subject+verb+object); i++){
			getline(cin, q);
			list.push_back(q);
			// getline (cin, to where);

			if (i == subject){
				sort(list.begin(), list.begin() + i);
			}

			else if (i == (subject+verb)){
				sort (list.begin() + subject, list.begin() + i);
			}

			else if (i == (subject+verb+object)){
				sort (list.begin() + subject + verb, list.end());
			}

		}

		for (int m=0; m<subject; m++){
			cout << list[m];
			cout << " ";

			for (int n=0; n<verb; n++){
				if (n==0){
					cout << list[n+subject];
					cout << " ";
				}

				else{
					cout << list[m] << " ";
					cout << list[n+subject];
					cout << " ";
				}

				for (int h=0; h<object; h++){
					if (h==0){
						cout << list[h+subject+verb];
						cout << ".\n";
					}

					else{
						cout << list[m] << " ";
						cout << list[n+subject] << " ";
						cout << list[h+subject+verb];
						cout << ".\n";
					}
				}	
			}
		}

		cout << endl;
		list.clear();
	}


}
