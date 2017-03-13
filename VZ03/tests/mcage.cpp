#include "cage.h"
#include <iostream>

using namespace std;

int main () {

	//driver cages, dengan membuat matriks cages ukuran 5*5 
	//penempatan 1 cage dengan id 1 di titik (1,1) sampai (4,4)

	Cage tes(0,0,1,1);
	Cage tes2(tes);
	Cage tes3(3,3,3,3);
	tes3 = tes;

	tes.setCage(1,1,1,2);

	cout << "Tes" << endl;
	cout << tes.GetX() << "," << tes.GetY() << endl;
	cout << tes.GetAnimal() << endl;
	cout << tes.GetId() << endl;

	cout << "Tes2" << endl;
	cout << tes2.GetX() << "," << tes2.GetY() << endl;
	cout << tes2.GetAnimal() << endl;
	cout << tes2.GetId() << endl;
	
	cout << "Tes3" << endl;
	cout << tes3.GetX() << "," << tes3.GetY() << endl;
	cout << tes3.GetAnimal() << endl;
	cout << tes3.GetId() << endl;
	
	return 0;
}