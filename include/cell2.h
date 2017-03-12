#ifndef CELL2_H
#define CELL2_H

class Cell {
	public :
		//ctor tanpa parameter
		Cell();

		//ctor dengan 1 parameter
		Cell(int _nilai_cell);
		
		//cctor 
		Cell(const Cell& c);

		//dtor 
		~Cell();

		//operator=
		Cell& operator= (const Cell& cm);

		//getter
		int getNilaiCell();

	private :
		int *nilai_cell;
};

class LandHabitat {
	public :
		//ctor tanpa parameter
		LandHabitat();

		//cctor
		LandHabitat(const LandHabitat& l);

		//dtor
		~LandHabitat();

		//operator=
		LandHabitat& operator= (const LandHabitat& lm);

	private:
		Cell* cell;

};

class AirHabitat {
	public :
		//ctor tanpa parameter
		AirHabitat();

		//cctor
		AirHabitat(const AirHabitat& a);

		//dtor
		~AirHabitat();

		//operator=
		AirHabitat& operator= (const AirHabitat& am);

	private:
		Cell* cell;
};

class WaterHabitat {
	public :
		//ctor tanpa parameter
		WaterHabitat();

		//cctor
		WaterHabitat(const WaterHabitat& w);

		//dtor
		~WaterHabitat();

		//operator=
		WaterHabitat& operator= (const WaterHabitat& wm);
	private:
		Cell* cell;
};

class Road {
	public :
		//ctor tanpa parameter
		Road();

		//cctor
		Road(const Road& r);

		//dtor
		~Road();

		//operator=
		Road& operator= (const Road& rm);

		int setRoad(int y);

	private:
		Cell* cell;
};

class Entrance {
	public :
		//ctor tanpa parameter
		Entrance();

		//cctor
		Entrance(const Entrance& e);

		//dtor 
		~Entrance();

		//operator=
		Entrance& operator= (const Entrance& em);
	
	private:

		Road* road;
};

class Exit{
	public :
		//ctor tanpa parameter
		Exit();

		//cctor
		Exit(const Exit& e);

		//dtor
		~Exit();

		//operator=
		Exit& operator= (const Exit& em);

	private:
		Road* road;
};

class Park  {
	public :
		//ctor tanpa parameter
		Park();

		//cctor
		Park(const Park& p);

		//dtor
		~Park();

		//operator=
		Park& operator= (const Park& pm);

	private:
		Cell* cell;
};

class Restaurant {
	public :
		//ctor tanpa parameter 
		Restaurant();

		//cctor
		Restaurant(const Restaurant& r);

		//dtor
		~Restaurant();

		//operator=
		Restaurant& operator= (const Restaurant& rm);

	private:
		Cell* cell;
};

#endif