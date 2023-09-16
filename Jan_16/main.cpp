#include <iostream>

using namespace std;

// for C++, class is the most important upgrade from C.
// to have an action in the struct, just have a function and call it with <name>.<verb_name>();
// in C++, a struct is a special case of a class. So it can have functions in there.
// Try to make the struct a class if there's a function.
// Everything has a class specifier in a class. They are "private", "protected" or "public"
// A private means a member could only accessed within a class
// a protected means a member could be accessed from the current class or from child/sub class
// A public means it could be accessed anywhere
// in a struct, everything is automatically public

// Attributes should be private because all the information should be hidden. 
// Behaviours should be public because it doesn't need security. 
// To get all the info into private members, a public function needs to be created to transfer the data. The function is special, as its name has to be the class name and has no return type. 
// You can't call the special function directly, instead do: student s1(<list things in the parameter>);
// This special function is called the constractor, and it's called automatically. 
// "s1" is an object. Which means it's not int, bool, double, etc. String is also a class, which means it could be: string name("Jason"); and string name = "Jason";
// public functions of string are length. string.length gives you the length, substr gives you a substring of the original string, "find" finds you something in the string.
 
// There is a "destructor", which has similar form to a constructor (name of class with "~" in front, and no return type). It also can't have any parameters. When the object is deleted, a destructor is called automatically by compiler.

// Scope is in what area is a variable valid. Most likely is clear with curly braces.  

// Special function is an operator overider. 

class student{
	private:
	 string name;
	 int age;
	
	public:
	 void learn(){
		cout << name << " is learning.\n";
	}
	 student(string nameS, int ageS) {
		 name=nameS;
		 age=ageS;
	 }
	 ~student() {
		cout << "here\n";
	 }
};

int main() {
	string nameJ("Jason");
	cout << nameJ <<endl;
	
	{student s1("nameRandom", 16);
	s1.learn();}

	cout << "Hello\n";
}
