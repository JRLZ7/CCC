#include <iostream>
using namespace std;

// Array
// 1) All elements must belong to the same data type (everything must be string, int, etc.)
// 2) Array has fixed length. If you set an array as [10],  you can't include more elements than 10.
// 3) An array's name is a pointer. int a[10] is a memory address.

// You can start with a[]={1,2,3,4,5,6,7,8,9,10};
// or int a[10]; numbers are random.


int main(){
	int a[10]={-32,12,31231,412,3,-4213,0,231,4,-192039};
	int maxStep=0;

	for (int i=1;i<10;i++){
		int tempStep;
		tempStep=a[i]-a[i-1];
		if (tempStep<0){
			tempStep=-tempStep;
		}

		if (tempStep>maxStep){
			maxStep=tempStep;
		}
	}

	cout << maxStep <<endl;
}


/*
int main(){
	int a[10]={1,2,3,4,5,6,7,8,9,10};

	for (int i=0; i<10; i++){
		if (a[i]%2 > 0){
			cout << i <<endl;
		}
	}

}
*/


/*
void f(int&a){
	a=99;
}

int main(){
	int a=1;
	f(a);
	cout << a <<endl;

}
*/
