#include <iostream>
#include "Queue.h"
#include "Animal.h"
using namespace std;


int main()
{
	int size = 4;
	Animal** a = new  Animal * [size] {
		    new Dog(),
			new Cat(),
			new Hamster(),
			new Parrot(),
	};
	
	for (size_t i = 0; i < size; i++) {
		a[i]->Type();
		a[i]->Sound();
		a[i]->Show();
	}

	List*l = new Queue ();
	l->Push(1);
	l->Push(2);
	l->Print();
	return 0;
}

