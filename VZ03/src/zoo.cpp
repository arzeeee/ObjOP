#include <iostream>
#include "zoo.h"
#include <iomanip>

using namespace std;

Zoo::Zoo(int nbrs, int nkol) :nbaris(nbrs), nkolom(nkol){
	matriks_sel = new Cell *[nbaris];
	int i;

	for (i = 0; i < nbaris; i++) {
		matriks_sel[i] = new Cell [nkolom];
	}

	int j;
	for (i = 0; i < nbaris; i++) {
		for (j = 0; j < nkolom; j++) {
			Cell matriks[i][j];
		}
	}
}

Zoo::Zoo(const Zoo& z) : nbaris(z.nbaris), nkolom(z.nkolom) {
	matriks_sel = new Cell *[nbaris];
	int i;

	for (i = 0; i < nbaris; i++) {
		matriks_sel[i] = new Cell [nkolom]; 
	}

	int j;
	for (i = 0; i < nbaris ; i++) {
		for (j = 0; j < nkolom; j++) {
			matriks_sel[i][j] = z.matriks_sel[i][j];
		}
	}
}

Zoo::~Zoo() {
	int i;
	for (i = 0; i < nbaris; i++) {
		delete [] matriks_sel[i];
	}
	delete [] matriks_sel;
}

Zoo& Zoo::operator= (const Zoo& z) {
	if (this != &z) {
		int i;
		for (i = 0; i < nbaris; i++) {
			delete [] matriks_sel[i];
		}
		delete [] matriks_sel;

		matriks_sel = new Cell *[nbaris];
		
		for (i = 0; i < nbaris; i++) {
			matriks_sel[i] = new Cell [nkolom]; 
		}

		int j;
		for (i = 0; i < nbaris ; i++) {
			for (j = 0; j < nkolom; j++) {
				matriks_sel[i][j] = z.matriks_sel[i][j];
			}
		}

	}
	return *this;
}

void Zoo::printZoo(int nbrs, int nkol) {}

int Zoo::GetElementZoo (int i, int j) {
	return matriks_sel[i][j].getNilaiCell();
}

void Zoo::SetElementZoo(int i,int j,int k) {
	LandHabitat a;
	WaterHabitat b;
	AirHabitat c;
	Road d;
	Park e;
	Restaurant f;
	Entrance g;
	Exit h;

	if (k == 1) {
		matriks_sel[i][j] = a;
	} else if (k == 2) {
		matriks_sel[i][j] = b;
	} else if (k == 3) {
		matriks_sel[i][j] = c;
	} else if (k == -1) {
		matriks_sel[i][j] = d;
	} else if (k == -2) {
		matriks_sel[i][j] = e;
	} else if (k == -3) {
		matriks_sel[i][j] = f;
	} else if (k == -4) {
		matriks_sel[i][j] = g;
	} else if (k == -5) {
		matriks_sel[i][j] = h;
	}
}