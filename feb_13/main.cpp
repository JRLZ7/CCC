#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

// Vectors use a lot of memory
// A (linked) list could solve the problem
// Head pointer (first element)
// Then each element has a "next" pointer which leads to the NULL, the end.

// Cannot use index to find element in list
// Use class to find values:
// Use malloc to reallocate memory
// include cstdlib



struct Node{
	int v;
	Node* next;
 };


int main () {

	Node* head = (Node*)malloc(sizeof(Node));
	// malloc(size of node)

	head->v=1;
	// initializes value as 1

	head->next=NULL;

	Node* p = (Node*)malloc(sizeof(Node));
	// creates a new node

	p->v=2;
	// initializes value as 2

	p->next=NULL;

	head->next=p;
	// connects NULL to 2(p)

	p = (Node*)malloc(sizeof(Node));
	// creates a new node, no longer need Node* p

	p->v=3;
	// intitalizes value as 3

	p->next=head->next;
	// points pointer 3 at 2

	head->next=p;
	// connect to 1 and 3

	for (Node* p=head; p!=NULL; p=p->next){
		cout << p->v <<endl;
	}
}
