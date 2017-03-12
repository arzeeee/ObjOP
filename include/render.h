#ifndef render
#define render
#include <iostream>

//Fungsi dari renderable adalah untuk menampilkan informasi
//yang bisa ditampilkan dan dibutuhkan di layar

class Renderable{
public:
	//render menampilkan Virtual Zoo dalam console teks
	virtual void render() const=0;
	
	//assignChar menetapkan suatu karater untuk
	//merepresentasikan sebuah cell
	void assignChar();

	//displayInfo menampilkan info tentang legenda pada peta
	void displayInfo();

	
};

#endif