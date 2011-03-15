#include "List.h"
int main(int argc, char** argv) {
	int i;
	List *a = new List();
	for(i = 0; i < 10; i++){
		a -> insert(i, 0);
	}
	a -> print();
	std::cout << "\n";
	a -> del(5);
	a -> print();
	std::cout << "\n";
	a -> insert(23, 5);
	a -> print();
	std::cout<< a -> find(23);
	a -> purge();
	a -> print();
	return 0;
}
