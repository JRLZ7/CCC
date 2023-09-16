#include <iostream>
using namespace std;

// Struct(ure): Main way to organize data in C and used a lot. Software engineering>Competitive Coder. Struct is needed to organize big projects. 
// If each data is a variable, it would be a mess it there's a lot of variables. 
// Struct combines all data into one
// Start Structs with capital letter
// To access data, you need to do (dataname).(operator)
// (data type)& (name) is a reference. Whatever the function does to the data would translate outside the function.
// ^that saves memory and time

// struct Point {
// 	float x;
//	float y;
//	float z;
// };

// Struct vs Class. C with class C++. With struct, you can only combine data (X, Y, Z). A class could also include functions.  

struct Student {
	string nameS;
	int idS;
	double scoreS;
};

void printStudent(Student& s) {
	cout << s.nameS << endl;
	cout << s.idS << endl;
	cout << s.scoreS++ << endl;
}	

// pointer
// use -> instead of .
void printStudentTwo(Student* s) {
	cout << s->nameS << endl;
	cout << s->idS << endl;
	cout << s->scoreS++ << endl;
}

// Difference between Pointer and Reference: 
// Reference is a bit more efficient. 
// The pointer version has to pass the memory address.
// The reference version can directly use memory address. 

int main (){
	int testArray[] = {4,2,1,45,3,4,12,4};
	
	for (int& i:testArray) {
		i++;
	}
	cout << testArray[0] <<endl;

	Student sJerry =  {"Jerry", 1234, 90.0};
	printStudent(sJerry);
	printStudentTwo(&sJerry);
	// ^for pointers, use &(name) to calculate the memory address. Otherwise, one data point is a struct and one is a pointer.  
	cout << sJerry.scoreS << endl;
}
