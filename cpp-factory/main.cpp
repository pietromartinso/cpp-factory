#ifndef __io__
#define __io__

#include <iostream>
using namespace std;

#endif

#include "ToyFactory.cpp";

int main() {
	int type;
	while (1) {
		cout << endl << "Enter type (1, 2 or 3) or Zero (0) for exit" << endl;
		cin >> type;
		if (!type)
			break;
		Toy* v = ToyFactory::createToy(type);
		if (v) {
			v->showProduct();
			delete v;
		}
	}
	cout << "Terminating..." << endl;

	return 0;
}