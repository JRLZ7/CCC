#include <iostream>

using namespace std;

// 2D Arrays
// int name[row][column] = 
// { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
// That would be:
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// when initializing 2D array, the rows and columns start at 1. When calling it, it starts at 0.

// Matrix is a tabular data, which means 2D arrays are a matrix.
// yy copies current line, [number]yy copies [number] lines. (in normal mode)
// Homework: Print out row, and the column. (row is already completed).


int main() {
	int m[3][4] = 
	{ {1,2,3,4}, 
	{5,6,7,8}, 
	{9,10,11,12} };

	int rowNum;
	int colNum;

	cin >> rowNum;
	cin >> colNum;

	for (int i=0; i<3; i++){
		cout << m[i][colNum];
	}
}

/*
int main() {
	int m[3][4] = 
	{ {1,2,3,4}, 
	{5,6,7,8}, 
	{9,10,11,12} };

	int rowNum;
	int colNum;

	cin >> rowNum;
	cin >> colNum;

	for (int i=0; i<4; i++){
		cout << m[rowNum][i];
	}
}
*/

/*
int main() {
	int m[3][4] = 
	{ {1,2,3,4}, 
	{5,6,7,8}, 
	{9,10,11,12} };

	for (int r=0; r<3; r++){
		int sumNum = 0;
		for (int c=0; c<3; c++){
			sumNum += m[r][c];
		}
		cout << sumNum <<endl;

	}

}
*/


/*
int main() {
	int m[3][4] = 
	{ {1,2,3,4}, 
	{5,6,7,8}, 
	{9,10,11,12} };

	for (int r=0; r<3; r++){
		for (int c=0; c<4; c++){
			if (c<3){
				cout << m[r][c] << ", ";
			}
			else{
				cout << m[r][c];
			}
		}
		cout << endl;
	}
}
*/
