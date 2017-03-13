#ifndef CELL_H
#define CELL_H

#include "render.h"

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

		//render
		void Render();
	private :
		Cell *land_habitat_cell;

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

		//render
		void Render();
	private :
		Cell *air_habitat_cell;
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
		
		//render
		void Render();
	private :
		Cell *water_habitat_cell;
};

class Road {
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

		//render
		void Render();
	private :
		Cell *road_cell;

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

		//render
		void Render();
	private :
		Cell *entrance_cell;
};

class Exit {
	public :
		//ctor tanpa parameter
		Exit();

		//cctor
		Exit(const Exit& e);

		//dtor
		~Exit();

		//operator=
		Exit& operator= (const Exit& em);

		//render
		void Render();
	private :
		Cell *exit_cell;
};

class Park {
	public :
		//ctor tanpa parameter
		Park();

		//cctor
		Park(const Park& p);

		//dtor
		~Park();

		//operator=
		Park& operator= (const Park& pm);

		//render
		void Render();
	private :
		Cell *park_cell;
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

		//render
		void Render();
	private :
		Cell *restaurant_cell;
};

#endif
