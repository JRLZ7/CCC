// comments

/*
commenting multiple lines
*/

// Items to learn:
// basic output/input

#include <iostream>
using namespace std;

int main()
{

	/*
	Task 1: Asking user to input a number, print out the next number. 
	e.g. 1,2
	int a;
	cin >> a; 

	cout << a+1 <<endl;
	return 0;
	*/

	//Task 2: For a square, a user types in each side's length, your code will print out its perimeter
	int num_1=0;
	int num_2=0;
	int ask_num;

	cout << "How many numbers do you want?\n";
	cin >> ask_num;

	for (int i=0; i<ask_num; i++)
		{
		cin >> num_2;
		num_1=num_1+num_2;
		}
	cout << "The sum is " << num_1 <<endl;
}
