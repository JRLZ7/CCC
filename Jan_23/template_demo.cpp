#include <iostream>
using namespace std;

// templates or generic programming
// template<typename T>
// don't know actual data type

// there are also template class.
// <vectors> are templates.
// vectors are flexible arrays

template<typename T>
class A
{
	private:
		T age;
	public:
		A(T agePublic){
			age=agePublic;
		}
		T getAge(){
			return age;
		}
};

template<typename T>
T myMax(T x, T y){
	return x>y?x:y;
}
// generic/template function

int main() {
	cout << myMax<int>(1,2);
	// needs to tell compiler which data type the 1 and 2 is.
	cout << myMax<string>("hello world", "hi");

	A<int> obj(20);
	cout << obj.getAge();

	A<string> objstr("20");
	cout << obj.getAge() <<endl;
}
