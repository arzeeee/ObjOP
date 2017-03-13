#ifndef CAGESNEW_H
#define CAGESNEW_H

#include "cage.h"

class Cages {
public:
	//ctor tanpa parameter
	Cages();

	//ctor dengan satu parameter integer
	Cages(int _neff);

	//cctor
    Cages(const Cages& c);

    //dtor
	~Cages();

	//operator=
	Cages& operator=(const Cages& cs);

	//method get array
	Cage GetArrayCage();

    //method get neff
    int GetNeff();

	//method set idx
	void SetIdx(Cage _cage);

private:
	Cage *array_id;
	int neff;
};

#endif