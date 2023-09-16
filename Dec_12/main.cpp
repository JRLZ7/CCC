#include <iostream>
#include <cstdio>
using namespace std;

// Must include cstdio if use printf
// C uses printf, C++ uses cout
// printf is much more flexible, printf("%10d", array[r][c])
// 10d% means every number occupies 10 spaces. 

// HW: Do the decreasing diagonal, horizontal, vertical. 

void printArray(int array[4][4]) {
	
	for (int r=0; r<4; r++){
		for (int c=0; c<4; c++){
			printf("%10d", array[r][c]);
		}
		cout << endl;
	}
}

int main() {
	int m[4][4] = 
	{ {1,2,3,4}, 
	{5,6,7,8}, 
	{9,10,11,12},
	{13,14,15,16} };

	printArray(m);

	cout << endl;

	int rowNum = 1;
	int colNum = 1;

	for (int j=colNum, i=rowNum; i>=0 && j<4; j++, i--){
		m[i][j]=0;
	}
	
	for (int j=colNum, i=rowNum; i<4 && j>=0; j--, i++){
		m[i][j]=0;
	}


	printArray(m);
}

