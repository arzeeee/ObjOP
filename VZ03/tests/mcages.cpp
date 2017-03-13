#include "cages.h"
#include <iostream>

using namespace std;

int main () {
	Cages a;
	Cages b(1);
	Cages c(b);
	Cages d;

	d = a;

	Cage *tes;

	*tes = a.GetArrayCage();

	cout << a.GetNeff();
	Cage be;
	a.SetIdx(0,be);
}