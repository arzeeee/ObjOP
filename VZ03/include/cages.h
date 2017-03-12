#ifndef CAGES_H
#define CAGES_H

class Cages {
public:
	//ctor tanpa parameter
	Cages();
	//ctor dengan dua parameter integer
	Cages(int x,int y);

	//dtor
	~Cages();

	//operator=
	Cages& operator=(const Cages& c);

	//method get idx
	int getIdx(int x,int y);

	//method set idx
	void setIdx(int x,int y, int k);
private:
	int** id;
	int height;
	int width;
};

#endif