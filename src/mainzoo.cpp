#include <iostream>
#include "zoo.h"

using namespace std; 

int main () {
	Zoo BonBin(5,5);
	int input;

	for (int i=0;i<5;i++) {
		for(int j = 0;j<5;j++) {
			cin >> input;
			BonBin.SetElementZoo(i,j,input);
		}
	}
	
	BonBin.printZoo();
	return 0;
}