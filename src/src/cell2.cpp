#include <iostream>
#include "cell.h"

using namespace std;

Cell::Cell() {
	nilai_cell = new int [1];
	nilai_cell[0] = 0;
}

Cell::Cell(int _nilai_cell) {
	nilai_cell = new int [1];
	nilai_cell[0] = _nilai_cell;
}

Cell::Cell(const Cell& c) {
	nilai_cell = new int [1];
	nilai_cell[0] = c.nilai_cell[0];
}

Cell::~Cell() {
	delete [] nilai_cell;
}

Cell& Cell::operator=(const Cell& cm) {
	if (this!= &cm) {
		delete [] nilai_cell;
		nilai_cell = new int[1];
		nilai_cell[0] = cm.nilai_cell[0];		
	}
	return *this;
}

int Cell::getNilaiCell() {
	return nilai_cell[0];
}

//implementasi ABC Habitat
Habitat::Habitat(int y) : Cell(y) {}
Habitat::~Habitat() {}
//Implementasi Land Habitat
LandHabitat::LandHabitat() : Habitat(1){

}

LandHabitat::LandHabitat(const LandHabitat& l) : Habitat(1) {
	
}

LandHabitat::~LandHabitat() {}

LandHabitat& LandHabitat::operator= (const LandHabitat& lm) {
	if (this != &lm) {
		Habitat::Cell::operator=(lm);
	}
	return *this;
}

//Implementasi Air Habitat
AirHabitat::AirHabitat() : Habitat(2){
	
}

AirHabitat::AirHabitat(const AirHabitat& a) : Habitat(2){
	
}

AirHabitat::~AirHabitat() {}

AirHabitat& AirHabitat::operator= (const AirHabitat& am) {
	if (this != &am) {
		Habitat::Cell::operator=(am);
	}
	return *this;
}

//Implementasi Water Habitat
WaterHabitat::WaterHabitat() : Habitat(3){
	
}

WaterHabitat::WaterHabitat(const WaterHabitat& w) : Habitat(3){

}

WaterHabitat::~WaterHabitat() {}

WaterHabitat& WaterHabitat::operator=(const WaterHabitat& wm) {
	if (this != &wm) {
		Habitat::Cell::operator=(wm);
	}
	return *this;
}

//Implementasi Facility, abstrak deng kosong
Facility::Facility(int y) : Cell(y) {}
Facility::~Facility() {}
//Implementasi Road

Road::Road() : Facility(-1){
}

Road::Road(const Road& r) : Facility(-1){
}

Road::~Road(){}

Road& Road::operator= (const Road& rm) {
	if (this != &rm) {
		Habitat::Cell::operator=(rm);
	}
	return *this;
}

int Road::setRoad(int y) {
	nilai_cell[0] = y;
}
 
//Implementasi Entrance

Entrance::Entrance() {
	Road::setRoad(-4);
}

Entrance::Entrance(const Entrance& e)  {
	Road::setRoad(-4);
}

Entrance::~Entrance() {}

Entrance& Entrance::operator= (const Entrance& em) {
	if (this != &em) {
		Facility::Cell::operator=(em);
	}
	return *this;
}


//Implementasu Exit
Exit::Exit() {
 	Road::setRoad(-5);
}

Exit::Exit(const Exit& e) {
	Road::setRoad(-5);
}

Exit::~Exit() {}

Exit& Exit::operator= (const Exit& em) {
	if (this != &em) {
		Facility::Cell::operator=(em);
	}
	return *this;
}

//Implementasi Park
Park::Park() : Facility(-2){
}

Park::Park(const Park& p) : Facility(-2){
}

Park::~Park() {}

Park& Park::operator= (const Park& pm) {
	if (this != &pm) {
		Facility::Cell::operator=(pm);
	}
	return *this;
}

//Implementasi Restaurant
Restaurant::Restaurant() : Facility(-3) {
}

Restaurant::Restaurant(const Restaurant& r) : Facility(-3) {
}

Restaurant::~Restaurant() {}

Restaurant& Restaurant::operator= (const Restaurant& rm) {
	if (this != &rm) {
		Facility::Cell::operator=(rm);
	}
	return *this;
}
