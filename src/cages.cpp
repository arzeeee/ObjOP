#include <iostream>
#include "cages.h"

using namespace std;

//implementasi ctor tanpa parameter
Cages::Cages() {
	height = 1;
	width = 1;
	id = new int*[this->width];
	id[1] = new int[this->height];
	id[1][1] = 0;
}

//ctor dengan dua parameter integer
Cages::Cages(int x,int y) {
	height = y;
	width = x;
	id = new int*[this->width];
	for (int i = 0;i<this->width;i++) {
		id[i] = new int[this->height];
	}
	for(int i = 0;i<this->width;i++) {
		for (int j = 0;j<this->height;j++) {
			this->setIdx(i,j,0);
		}
	}
}

//dtor
Cages::~Cages() {
	for (int i=0;i<width;i++) {
		delete [] id[i];
	}
	delete [] id;
}

//operator=
Cages& Cages::operator=(const Cages& c){
	for (int i=0;i<width;i++) {
		delete [] id[i];
	}
	delete [] id;

	this->height = c.height;
	this->width = c.width;

	id = new int*[this->width];
	for (int i = 0;i<this->width;i++) {
		id[i] = new int[this->height];
	}
	for(int i = 0;i<this->width;i++) {
		for (int j = 0;j<this->height;j++) {
			this->setIdx(i,j,c.id[i][j]);
		}
	}	
	return *this;
}

//getter
int Cages::getIdx(int x,int y) {
	return this->id[x][y];
}
//setter
void Cages::setIdx(int x,int y,int k) {
	this->id[x][y] = k;
}