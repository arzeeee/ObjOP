#include <iostream>
#include "../include/animal.h"

using namespace std;

int main(){

	Animal diar;
	diar.LAnimal.felidae.kucing.setWeight(5);
	int x = diar.LAnimal.felidae.kucing.getWeight();

	cout << x << endl;
	return 0;
}
