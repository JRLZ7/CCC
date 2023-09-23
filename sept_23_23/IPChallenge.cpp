#include <iostream>
using namespace std;

// stoi([string]) = string to integer, returns integer
// [string].find([desired char.],[where to start]); returns the index of character.  
// [string].substr([start],[length])

int ip2int(string IPadr) {

	int start = 0;
	int pos;
	unsigned char c[4];
	// created 4 bytes. char = byte

	for (int i=0; i<4; i++){
		pos = IPadr.find('.',start);

		c[i] = (unsigned char) stoi(IPadr.substr(start,(pos-start)));
		// (unsigned char) = type conversion, different way to interpret value in memory.

		start = pos + 1;
	}

	for (int i=0; i<4; i++){
		cout << (int) c[i] <<endl;
	}

	unsigned int ip = *((unsigned int*) &c);
	return ip;

}

int main (){

	string IPa1 = "192.168.1.1";
	string IPa2 = "192.168.100.100";
	string mask = "255.255.0.0";

	int ip1 = ip2int(IPa1);
	int ip2 = ip2int(IPa2);
	int m = ip2int(mask);

	if ((ip1&m) == (ip2&m)){
		cout << "Same Network.\n";
	}

	else {
		cout << "Different Networks.\n";
	}
	
	// [x]&[y] = bitwise and

}
