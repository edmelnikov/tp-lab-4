#include <iostream>
#include "Automata.h"

using namespace std;

int main() {
	Automata hotdrinks;
	hotdrinks.on();	
	hotdrinks.printState();
	hotdrinks.printMenu();
	hotdrinks.printState();
	hotdrinks.coin(20);
	hotdrinks.coin(10);
	hotdrinks.choice(1);

	hotdrinks.off();
	return 0;	
}