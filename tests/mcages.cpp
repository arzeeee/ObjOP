#include "cages.h"
#include <iostream>

using namespace std;

int main () {

	//driver cages, dengan membuat matriks cages ukuran 5*5 
	//penempatan 1 cage dengan id 1 di titik (1,1) sampai (4,4)

	Cages tes(5,5);
	for (int i = 1; i < 4; i++)
	{
		for (int j = 1; j < 4; j++)
		{
			tes.setIdx(i,j,1);
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << tes.getIdx(i,j);
		}
		cout << endl; 
	}
	return 0;
}