#include <iostream>
using namespace std;

// String acts like an array.
// String = array of char(aracters)
// to find length of string, using string.length()
// char acts like integer, you could plus it to increase value.
// char uses 'x' instead of "x"

/*
int main(){
	string s="hello";

	for (int i=0; i<=s.length(); i++){
		cout << s[i];
	}
	cout <<endl;


}
*/

// ENCYRPTION

void encryptStuff (string cCypher, int numShift){
	numShift %= 26;


	for (int i=0; i<cCypher.length(); i++){

		if (cCypher[i]+numShift>'Z'){
			cCypher[i] += numShift-26;
		}

		else{
			cCypher[i] += numShift;
		}

	}
	cout << cCypher <<endl;
}

// DECRYPTION

void decryptStuff (string cCypher, int numShift){
	numShift %= 26;

	for (int i=0; i<cCypher.length(); i++){
		if (cCypher[i]-numShift<'A'){
			cCypher[i] -= numShift;
			cCypher[i] += 26;
		}
		else{
			cCypher[i] -= numShift;
		}
	}
	cout << cCypher <<endl;
}


int main (){
	string getAnswer;
	string cCypher;
	int numShift;
	
	cout << "Encrypt or Decrypt?\n";
	cin >> getAnswer;

	cout << "Please enter cypher string\n";
	cin >> cCypher;

	cout << "Please enter integer for number shift\n";
	cin >> numShift;

	
	if (getAnswer == "Encrypt"||getAnswer == "encrypt"||getAnswer == "ENCRYPT"){
		encryptStuff(cCypher, numShift);
	}

	if (getAnswer == "Decrypt"||getAnswer == "decrypt"||getAnswer == "DECRYPT"){
		decryptStuff(cCypher, numShift);
	}
}









