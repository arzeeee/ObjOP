#ifndef CAGE_H
#define CAGE_H

class Cage {
public : 
	//ctor dengan dua parameter integer
	Cage(int _x,int _y, int _id, int _animal_id);

	//cctor
    Cage(const Cage& c);

    //dtor
	~Cage();

	//operator=
	Cage& operator=(const Cage& c);

	//method get X
	int GetX();

    //method get y
    int GetY();

    //method get jenis animal
    int GetAnimal();

    //method get id cage
    int GetId();

	//method set idx
	void setCage(int _x,int _y, int _id, int _animal_id);

private:
	int id;
	int x;
	int y;
    int animal_id;
};

#endif