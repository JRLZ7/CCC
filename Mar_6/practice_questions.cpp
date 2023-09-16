#include <iostream>

#include <vector>

using namespace std;

// homework: finish CCC practice.png
// last element index

int main (){

	string input;

	cout << "Enter words to be translated: \n";

	while (input != "quit!"){
		cin >> input;

		if (input.size()>4){
			if (input[input.size()-1] == 'r' && input[input.size()-2] == 'o' && input[input.size()-3] != 'a' && input[input.size()-3] != 'e' && input[input.size()-3] != 'i' && input[input.size()-3] != 'o' && input[input.size()-3] != 'u' && input[input.size()-3] != 'y'){

				input.erase(input.size()-2, 2);
				input.append("our");

			}
		}
		if (input != "quit!"){
			cout << input << endl;
		}

	}
}



