#ifndef RENDER_H
#define RENDER_H
#include <iostream>

//Fungsi dari renderable adalah untuk menampilkan informasi
//yang bisa ditampilkan dan dibutuhkan di layar

class Renderable{
public:
	//render menampilkan Virtual Zoo dalam console teks
	virtual void Render() = 0;
	
	//assignChar menetapkan suatu karater untuk
	//merepresentasikan sebuah cell
	void assignChar();

	//displayInfo menampilkan info tentang legenda pada peta
	void displayInfo();

	
};

#endif
