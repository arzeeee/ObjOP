#include <iostream>
#include "../include/animal.h"

using namespace std;

int main(){

	Animal kontlo;
	kontlo.LAnimal.felidae.kucing.setWeight(5);
	int x = kontlo.LAnimal.felidae.kucing.getWeight();
	int y = kontlo.WAnimal.selachii.hiuPutih.getWeight();

	cout << x << " " << y << endl;
	return 0;
}
