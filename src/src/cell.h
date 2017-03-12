#ifndef CELL_H
#define CELL_H

class Cell {
	public :
		//ctor tanpa parameter
		Cell();

		//ctor dengan 1 parameter
		Cell(int _nilai_cell);
		
		//cctor 
		Cell(const Cell& c);

		//dtor 
		virtual ~Cell();

		//operator=
		Cell& operator= (const Cell& cm);

		//getter
		int getNilaiCell();

	protected :
		int *nilai_cell;
};

class Habitat : public Cell { //Abstract Base Class
	public :
		Habitat(int y);
		~Habitat();
		//Apa ya yang diabstrakin?? Hmmmm
};

class LandHabitat : public Habitat {
	public :
		//ctor tanpa parameter
		LandHabitat();

		//cctor
		LandHabitat(const LandHabitat& l);

		//dtor
		~LandHabitat();

		//operator=
		LandHabitat& operator= (const LandHabitat& lm);

};

class AirHabitat : public Habitat {
	public :
		//ctor tanpa parameter
		AirHabitat();

		//cctor
		AirHabitat(const AirHabitat& a);

		//dtor
		~AirHabitat();

		//operator=
		AirHabitat& operator= (const AirHabitat& am);
};

class WaterHabitat : public Habitat {
	public :
		//ctor tanpa parameter
		WaterHabitat();

		//cctor
		WaterHabitat(const WaterHabitat& w);

		//dtor
		~WaterHabitat();

		//operator=
		WaterHabitat& operator= (const WaterHabitat& wm);

};

class Facility : public Cell {
	public :
		Facility(int y);
		~Facility();
		//Apa ya yang diabstrakiin?? Hmm...
};

class Road : public Facility {
	public :
		//ctor tanpa parameter
		Road();

		//cctor
		Road(const Road& r);

		//dtor
		virtual ~Road();

		//operator=
		Road& operator= (const Road& rm);

		virtual int setRoad(int y);

};

class Entrance : public Road {
	public :
		//ctor tanpa parameter
		Entrance();

		//cctor
		Entrance(const Entrance& e);

		//dtor 
		~Entrance();

		//operator=
		Entrance& operator= (const Entrance& em);
};

class Exit : public Road {
	public :
		//ctor tanpa parameter
		Exit();

		//cctor
		Exit(const Exit& e);

		//dtor
		~Exit();

		//operator=
		Exit& operator= (const Exit& em);
};

class Park : public Facility {
	public :
		//ctor tanpa parameter
		Park();

		//cctor
		Park(const Park& p);

		//dtor
		~Park();

		//operator=
		Park& operator= (const Park& pm);
};

class Restaurant : public Facility {
	public :
		//ctor tanpa parameter 
		Restaurant();

		//cctor
		Restaurant(const Restaurant& r);

		//dtor
		~Restaurant();

		//operator=
		Restaurant& operator= (const Restaurant& rm);
};

#endif