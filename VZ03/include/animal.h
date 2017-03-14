#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/******************/
/*DEKLARASI ANIMAL*/
/******************/
//Class Animal dan turunannya (famili animal dan tipe animal)
/*
Keterangan tipe Animal
1 = Herbivore
2 = Karnivore
3 = Omnivore
*/

/*
Keterangan tamed
true = jinak
false = tidak jinak
*/
class Animal{
  public :
  	virtual void Eat() = 0;
  	virtual void Interact() = 0;

  	//getter
  	virtual int getWeight(){return animal_weight;};
  	virtual int getTipe(){return animal_tipe;};
  	virtual bool getTamed(){return animal_tamed;};
  	virtual int getX(){return location_x;};
  	virtual int getY(){return location_y;};

  	//setter
  	virtual void setWeight(int ){};
  	virtual void setTipe(int ){};
  	virtual void setTamed(bool ){};
  	virtual void setX(int ){};
  	virtual void setY(int ){};

  	int location_x;
	int location_y;
  	int animal_weight;
	int animal_tipe;		
	bool animal_tamed;
	
};

class LandAnimal : public Animal {
	public :
		//ctor tanpa parameter
		LandAnimal();

		//ctor dengan parameter
		LandAnimal(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		LandAnimal(const LandAnimal& la);

		//dtor
		virtual ~LandAnimal();
		
		//operator=
		LandAnimal& operator=(const LandAnimal& lam);

		//deklarasi polimorfik 
		virtual void Eat(){};

		//deklarasi polimorfik interact
		virtual void Interact(){};

  	//Realisasi getter
	virtual int getWeight() 	{return animal_weight;}
	virtual int getTipe() 		{return animal_tipe;}
	virtual bool getTamed()		{return animal_tamed;}
	virtual int getX()			{return location_x;}
	virtual int getY()			{return location_y;}

	//Realisasi setter
	void setWeight(int n)	{animal_weight = n;}
	void setTipe(int n)		{animal_tipe = n;}
	void setTamed(bool n)	{animal_tamed = n;}
	void setX(int x)		{location_x = x;}
	void setY(int y)		{location_y = y;}
};

class AirAnimal : public Animal {
	public :
		//ctor tanpa parameter
		AirAnimal();

		//ctor dengan parameter
		AirAnimal(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		AirAnimal(const AirAnimal& aa);

		//dtor
		virtual ~AirAnimal();
		
		//operator=
		AirAnimal& operator=(const AirAnimal& aam);

		//deklarasi polimorfik
		virtual void Eat(){} ;

		//deklarasi polimorfik interact
		virtual void Interact(){};

	//Realisasi getter
	virtual int getWeight() 	{return animal_weight;}
	virtual int getTipe() 		{return animal_tipe;}
	virtual bool getTamed()		{return animal_tamed;}
	virtual int getX()			{return location_x;}
	virtual int getY()			{return location_y;}

	//Realisasi setter
	void setWeight(int n)	{animal_weight = n;}
	void setTipe(int n)		{animal_tipe = n;}
	void setTamed(bool n)	{animal_tamed = n;}
	void setX(int x)		{location_x = x;}
	void setY(int y)		{location_y = y;}
};

class WaterAnimal : public Animal {
	public :
		//ctor tanpa parameter
		WaterAnimal();

		//ctor dengan parameter
		WaterAnimal(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		WaterAnimal(const WaterAnimal& wa);

		//dtor 
		virtual ~WaterAnimal();

		//operator=
		WaterAnimal& operator=(const WaterAnimal& wam);

		//deklarasi polimorfik
		virtual void Eat(){} ;

		//deklarasi polimorfik interact
		virtual void Interact(){};

  	//Realisasi getter
	virtual int getWeight() 	{return animal_weight;}
	virtual int getTipe() 		{return animal_tipe;}
	virtual bool getTamed()		{return animal_tamed;}
	virtual int getX()			{return location_x;}
	virtual int getY()			{return location_y;}

	//Realisasi setter
	void setWeight(int n)	{animal_weight = n;}
	void setTipe(int n)		{animal_tipe = n;}
	void setTamed(bool n)	{animal_tamed = n;}
	void setX(int x)		{location_x = x;}
	void setY(int y)		{location_y = y;}
};


/*************************/
/*DEKLARASI FAMILI ANIMAL*/
/*************************/
class Felidae : public LandAnimal {
	public :
		//ctor tanpa parameter
		Felidae();

		//ctor dengan parameter
		Felidae(int weight,int tipe,bool tamed,int x,int y);

		//cctor
		Felidae(const Felidae& f);

		//dtor
		~Felidae();

		//operator=
		Felidae& operator=(const Felidae& fm);

		//deklarasi polimorfik
		virtual void Eat(){};

		//deklarasi polimorfik interact
		virtual void Interact(){};

};

class Giraffidae : public LandAnimal {
	public :
		//ctor tanpa parameter
		Giraffidae();

		//ctor dengan parameter
		Giraffidae(int weight,int tipe,bool tamed,int x,int y);

		//cctor
		Giraffidae(const Giraffidae& g);

		//dtor
		~Giraffidae();

		//operator=
		Giraffidae& operator=(const Giraffidae& gm);

		//deklarasi polimorfik
		virtual void Eat(){};

		//deklarasi polimorfik interact
		virtual void Interact(){};

};

class Ursidae : public LandAnimal {
	public :
		//ctor tanpa parameter
		Ursidae();

		//ctor dengan parameter
		Ursidae(int weight,int tipe,bool tamed,int x,int y);

		//cctor
		Ursidae(const Ursidae& u);

		//dtor
		~Ursidae();

		//operator=
		Ursidae& operator=(const Ursidae& um);

		//deklarasi polimorfik
		virtual void Eat(){};

		//deklarasi polimorfik interact
		virtual void Interact(){};

};

class Equidae : public LandAnimal {
	public :
		//ctor tanpa parameter
		Equidae();

		//ctor dengan parameter
		Equidae(int weight,int tipe,bool tamed,int x,int y);

		//cctor
		Equidae(const Equidae& e);

		//dtor
		~Equidae();

		//operator=
		Equidae& operator=(const Equidae& em);

		//deklasari polimorfik
		virtual void Eat(){};

		//deklarasi polimorfik interact
		virtual void Interact(){};

};

class Scorpaenidae : public WaterAnimal {
	public :
		//ctor tanpa parameter
		Scorpaenidae();

		//ctor dengan parameter
		Scorpaenidae(int weight,int tipe,bool tamed,int x,int y);

		//cctor
		Scorpaenidae(const Scorpaenidae& s);

		//dtor
		~Scorpaenidae();

		//operator=
		Scorpaenidae& operator=(const Scorpaenidae& sm);

		//deklarasi polimorfik
		virtual void Eat(){};

		//deklarasi polimorfik interact
		virtual void Interact(){};

};

class Delphidae : public WaterAnimal {
	public :
		//ctor tanpa parameter
		Delphidae();

		//ctor dengan parameter
		Delphidae(int weight,int tipe,bool tamed,int x,int y);

		//cctor
		Delphidae(const Delphidae& d);

		//dtor
		~Delphidae();

		//operator= 
		Delphidae& operator=(const Delphidae& dm);

		//deklarasi polimorfik
		virtual void Eat(){};

		//deklarasi polimorfik interact
		virtual void Interact(){};

};

class Selachii : public WaterAnimal {
	public :
		//cctpr tanpa parameter
		Selachii();

		//ctor
		Selachii(int weight,int tipe,bool tamed,int x,int y);

		//cctor
		Selachii(const Selachii& s);

		//dtor
		~Selachii();

		//operator=
		Selachii& operator=(const Selachii& sm);

		//deklarasi polimorfik
		virtual void Eat(){};

		//deklarasi polimorfik interact
		virtual void Interact(){};

};

class Octopodiae : public WaterAnimal {
	public :
		//ctor tanpa parameter
		Octopodiae();

		//ctor dengan parameter
		Octopodiae(int weight,int tipe,bool tamed,int x,int y);

		//cctor
		Octopodiae(const Octopodiae& o);

		//dtor
		~Octopodiae();

		//operator=
		Octopodiae& operator=(const Octopodiae& om);

		//deklarasi polimorfik
		virtual void Eat(){};

		//deklarasi polimorfik interact
		virtual void Interact(){};

};

class Columbidae : public AirAnimal {
	public :
		//ctor tanpa parameter
		Columbidae();

		//ctor dengan parameter
		Columbidae(int weight,int tipe,bool tamed,int x,int y);

		//cctor
		Columbidae(const Columbidae& c);

		//dtor
		~Columbidae();

		//operator=
		Columbidae& operator=(const Columbidae& cm);

		//deklarasi polimorfik
		virtual void Eat(){};

		//deklarasi polimorfik interact
		virtual void Interact(){};

};

class Accipitridae : public AirAnimal {
	public :
		//ctor tanpa parameter
		Accipitridae();

		//ctor dengan parameter
		Accipitridae(int weight,int tipe,bool tamed,int x,int y);

		//cctor
		Accipitridae(const Accipitridae& a);

		//dtor
		~Accipitridae();

		//operator=
		Accipitridae& operator=(const Accipitridae& am);

		//deklarasi polimorfik
		virtual void Eat(){};

		//deklarasi polimorfik interact
		virtual void Interact(){};

};

class Molossidae : public AirAnimal {
	public :
		//ctor tanpa parameter
		Molossidae();

		//ctor dengan parameter
		Molossidae(int weight,int tipe,bool tamed,int x,int y);

		//cctor
		Molossidae(const Molossidae& m);

		//dtor
		~Molossidae();

		//operator=
		Molossidae& operator=(const Molossidae& mm);

		//deklarasi polimorfik
		virtual void Eat(){};

		//deklarasi polimorfik interact
		virtual void Interact(){};

};

class Paradisaeidae : public AirAnimal {
	public :
		//ctor tanpa parameter
		Paradisaeidae();

		//ctor dengan parameter
		Paradisaeidae(int weight,int tipe,bool tamed,int x,int y);

		//cctor
		Paradisaeidae(const Paradisaeidae& p);

		//dtor
		~Paradisaeidae();

		//operator=
		Paradisaeidae& operator=(const Paradisaeidae& pm);

		//deklarasi polimorfik
		virtual void Eat(){};

		//deklarasi polimorfik interact
		virtual void Interact(){};

};

class Cheloniidae : public WaterAnimal{
	public :
		//ctor tanpa parameter
		Cheloniidae();

		//ctor dengan parameter
		Cheloniidae(int weight,int tipe,bool tamed,int x,int y);

		//cctor
		Cheloniidae(const Cheloniidae& c);

		//dtor
		~Cheloniidae();

		//operator=
		Cheloniidae& operator=(const Cheloniidae& cm);

		//deklarasi polimorfik
		virtual void Eat(){};

		//deklarasi polimorfik interact
		virtual void Interact(){};

};

/*******************/
/*DEKLARASI SPESIES*/
/*******************/

/****************LAND ANIMAL*****************/
class Kucing : public Felidae { //pada map ditulis K
	public :
		//ctor dengan parameter
		Kucing(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		Kucing(const Kucing& k);

		//dtor
		~Kucing();

		//operator=
		Kucing& operator=(const Kucing& km);

		//deklarasi polimorfik
		virtual void Eat(){};

		//deklarasi polimorfik interact
		virtual void Interact(){
			//Inisialisasi Random
			srand ((unsigned) time (0));

			//Inisialisasi random
			int kategori_interact = (rand() % 3);

			if (kategori_interact == 0) {
				cout << "Zzzz..." << endl;
			} else if (kategori_interact == 1) {
				cout << "Meow!" << endl;
			} else {
				cout << "Nyam nyam..." << endl;
			}

		};

};

class Harimau : public Felidae {//pada map ditulis H
	public :
		//ctor dengan parameter
		Harimau(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		Harimau(const Harimau& h);

		//dtor
		~Harimau();

		//operator=
		Harimau& operator=(const Harimau& hm);

		//deklarasi polimorfik
		virtual void Eat(){};

		//deklarasi polimorfik interact
		virtual void Interact(){
			//Inisialisasi Random
			srand ((unsigned) time (0));

			//Inisialisasi random
			int kategori_interact = (rand() % 3);

			if (kategori_interact == 0) {
				cout << "Zzzz..." << endl;
			} else if (kategori_interact == 1) {
				cout << "Grrr!" << endl;
			} else {
				cout << "Nyam nyam..." << endl;
			}			
		};

};

class Singa : public Felidae {//pada map ditulis S
	public :
		Singa();
		//ctor dengan parameter
		Singa(int weight, int tipe, bool tamed,int x,int y);

		//cctor 
		Singa(const Singa& s);

		//dtor
		~Singa();

		//operator=
		Singa& operator=(const Singa& sm);

		//deklarasi polimorfik
		virtual void Eat(){};

		//deklarasi polimorfik interact
		virtual void Interact(){
			//Inisialisasi Random
			srand ((unsigned) time (0));

			//Inisialisasi random
			int kategori_interact = (rand() % 3);

			if (kategori_interact == 0) {
				cout << "Zzzz..." << endl;
			} else if (kategori_interact == 1) {
				cout << "Roar!" << endl;
			} else {
				cout << "Nyam nyam..." << endl;
			}
		};

};

class Jerapah : public Giraffidae {//pada map ditulis J
	public :
		//ctor dengan parameter
		Jerapah(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		Jerapah(const Jerapah& j);

		//dtor
		~Jerapah();

		//operator=
		Jerapah& operator=(const Jerapah& jm);

		//deklarasi polimorfik
		virtual void Eat(){};

		//deklarasi polimorfik interact
		virtual void Interact(){
			//Inisialisasi Random
			srand ((unsigned) time (0));

			//Inisialisasi random
			int kategori_interact = (rand() % 3);

			if (kategori_interact == 0) {
				cout << "Zzzz..." << endl;
			} else if (kategori_interact == 1) {
				cout << "Kress.." << endl;
			} else {
				cout << "Nyam nyam..." << endl;
			}
		};

};

class Okapi : public Giraffidae {//pada map ditulis O
	public :
		//ctor dengan parameter
		Okapi(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		Okapi(const Okapi& o);

		//dtor
		~Okapi();

		//operator=
		Okapi& operator=(const Okapi& om);

		//deklarasi polimorfik
		virtual void Eat(){};

		//deklarasi polimorfik interact
		virtual void Interact(){
			//Inisialisasi Random
			srand ((unsigned) time (0));

			//Inisialisasi random
			int kategori_interact = (rand() % 3);

			if (kategori_interact == 0) {
				cout << "Zzzz..." << endl;
			} else if (kategori_interact == 1) {
				cout << "Rrrr..." << endl;
			} else {
				cout << "Nyam nyam..." << endl;
			}
		};

};

class Panda : public Ursidae {//pada map ditulis D
	public :
		//ctor dengan parameter
		Panda(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		Panda(const Panda& p);

		//dtor
		~Panda();

		//operator=
		Panda& operator=(const Panda& pm);

		//deklarasi polimorfik
		virtual void Eat(){};

		//deklarasi polimorfik interact
		virtual void Interact(){
			//Inisialisasi Random
			srand ((unsigned) time (0));

			//Inisialisasi random
			int kategori_interact = (rand() % 3);

			if (kategori_interact == 0) {
				cout << "Zzzz..." << endl;
			} else if (kategori_interact == 1) {
				cout << "Hoaam..." << endl;
			} else {
				cout << "Nyam nyam..." << endl;
			}			
		};

};

class Beruang : public Ursidae {//pada map ditulis B
	public :
		//ctor dengan parameter
		Beruang(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		Beruang(const Beruang& b);

		//dtor
		~Beruang();

		//operator=
		Beruang& operator=(const Beruang& bm);

		//deklarasi polimorfik
		virtual void Eat(){};

		//deklarasi polimorfik interact
		virtual void Interact(){
			//Inisialisasi Random
			srand ((unsigned) time (0));

			//Inisialisasi random
			int kategori_interact = (rand() % 3);

			if (kategori_interact == 0) {
				cout << "Zzzz..." << endl;
			} else if (kategori_interact == 1) {
				cout << "GRRRR!" << endl;
			} else {
				cout << "Nyam nyam..." << endl;
			}

		};

};

class Zebra : public Equidae {//pada map ditulis Z
	public :
		//ctor dengan parameter
		Zebra(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		Zebra(const Zebra& z);

		//dtor
		~Zebra();

		//operator=
		Zebra& operator=(const Zebra& zm);

		//deklarasi polimorfik
		virtual void Eat(){};

		//deklarasi polimorfik interact
		virtual void Interact(){
			//Inisialisasi Random
			srand ((unsigned) time (0));

			//Inisialisasi random
			int kategori_interact = (rand() % 3);

			if (kategori_interact == 0) {
				cout << "Zzzz..." << endl;
			} else if (kategori_interact == 1) {
				cout << "Yiha!" << endl;
			} else {
				cout << "Nyam nyam..." << endl;
			}
		};

};

class Kuda : public Equidae {//pada map ditulis U
	public :
		//ctor dengan parameter
		Kuda(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		Kuda(const Kuda& k);

		//dtor
		~Kuda();

		//operator=
		Kuda& operator=(const Kuda& km);

		//deklarasi polimorfik
		virtual void Eat(){};

		//deklarasi polimorfik interact
		virtual void Interact(){
			//Inisialisasi Random
			srand ((unsigned) time (0));

			//Inisialisasi random
			int kategori_interact = (rand() % 3);

			if (kategori_interact == 0) {
				cout << "Zzzz..." << endl;
			} else if (kategori_interact == 1) {
				cout << "Yiha!! Husshh" << endl;
			} else {
				cout << "Nyam nyam..." << endl;
			}

		};

};

/****************WATER ANIMAL*****************/
class Ebosia : public Scorpaenidae {//pada map ditulis E
	public :
		//ctor dengan parameter
		Ebosia(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		Ebosia(const Ebosia& e);

		//dtor
		~Ebosia();

		//operator=
		Ebosia& operator=(const Ebosia& e);

		//deklarasi polimorfik
		virtual void Eat(){};

		//deklarasi polimorfik interact
		virtual void Interact(){
			//Inisialisasi Random
			srand ((unsigned) time (0));

			//Inisialisasi random
			int kategori_interact = (rand() % 3);

			if (kategori_interact == 0) {
				cout << "Zzzz..." << endl;
			} else if (kategori_interact == 1) {
				cout << "Blubub blubub.." << endl;
			} else {
				cout << "Nyam nyam..." << endl;
			}
		};

};

class Lionfish : public Scorpaenidae {//pada map ditulis I
	public :
		//ctor dengan parameter
		Lionfish(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		Lionfish(const Lionfish& l);

		//dtor
		~Lionfish();

		//operator=
		Lionfish& operator=(const Lionfish& lm);

		//deklarasi polimorfik
		virtual void Eat(){};

		//deklarasi polimorfik interact
		virtual void Interact(){
			//Inisialisasi Random
			srand ((unsigned) time (0));

			//Inisialisasi random
			int kategori_interact = (rand() % 3);

			if (kategori_interact == 0) {
				cout << "Zzzz..." << endl;
			} else if (kategori_interact == 1) {
				cout << "Blubub.. blubub.." << endl;
			} else {
				cout << "Nyam nyam..." << endl;
			}
		};

};

class LumbaLumba : public Delphidae {//pada map ditulis L
	public :
		//ctor dengan parameter
		LumbaLumba(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		LumbaLumba(const LumbaLumba& l);

		//dtor
		~LumbaLumba();

		//operator=
		LumbaLumba& operator=(const LumbaLumba& lm);

		//deklarasi polimorfik
		virtual void Eat(){};

		//deklarasi polimorfik interact
		virtual void Interact(){
			//Inisialisasi Random
			srand ((unsigned) time (0));

			//Inisialisasi random
			int kategori_interact = (rand() % 3);

			if (kategori_interact == 0) {
				cout << "Zzzz..." << endl;
			} else if (kategori_interact == 1) {
				cout << "Splash.. splash.. ikikikk" << endl;
			} else {
				cout << "Nyam nyam..." << endl;
			}
		};

};

class HiuPutih : public Selachii {//pada map ditulis T
	public :
		//ctor dengan parameter
		HiuPutih(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		HiuPutih(const HiuPutih& h);

		//dtor
		~HiuPutih();

		//operator=
		HiuPutih& operator=(const HiuPutih& hm);

		//deklarasi polimorfik
		virtual void Eat(){};

		//deklarasi polimorfik interact
		virtual void Interact(){
			//Inisialisasi Random
			srand ((unsigned) time (0));

			//Inisialisasi random
			int kategori_interact = (rand() % 3);

			if (kategori_interact == 0) {
				cout << "Zzzz..." << endl;
			} else if (kategori_interact == 1) {
				cout << "Splash!" << endl;
			} else {
				cout << "Nyam nyam..." << endl;
			}

		};

};

class BigBlueOct : public Octopodiae {//pada map ditulis G
	public :
		//ctor dengan parameter
		BigBlueOct(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		BigBlueOct(const BigBlueOct& b);

		//dtor
		~BigBlueOct();

		//operator=
		BigBlueOct& operator=(const BigBlueOct& bm);

		//deklarasi polimorfik
		virtual void Eat(){};

		//deklarasi polimorfik interact
		virtual void Interact(){
			//Inisialisasi Random
			srand ((unsigned) time (0));

			//Inisialisasi random
			int kategori_interact = (rand() % 3);

			if (kategori_interact == 0) {
				cout << "Zzzz..." << endl;
			} else if (kategori_interact == 1) {
				cout << "Splash.." << endl;
			} else {
				cout << "Nyam nyam..." << endl;
			}

		};

};

class EastPacRedOct : public Octopodiae {//pada map ditulis R
	public :
		//ctor dengan parameter
		EastPacRedOct(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		EastPacRedOct(const EastPacRedOct& e);

		//dtor
		~EastPacRedOct();

		//operator=
		EastPacRedOct& operator=(const EastPacRedOct& em);

		//deklarasi polimorfik
		virtual void Eat(){};

		//deklarasi polimorfik interact
		virtual void Interact(){
			//Inisialisasi Random
			srand ((unsigned) time (0));

			//Inisialisasi random
			int kategori_interact = (rand() % 3);

			if (kategori_interact == 0) {
				cout << "Zzzz..." << endl;
			} else if (kategori_interact == 1) {
				cout << "Splash..." << endl;
			} else {
				cout << "Nyam nyam..." << endl;
			}			
		};

};

/****************AIR ANIMAL*****************/
class Merpati : public Columbidae {//pada map ditulis M
	public :
		//ctor dengan parameter
		Merpati(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		Merpati(const Merpati& m);

		//dtor
		~Merpati();

		//operator=
		Merpati& operator=(const Merpati& mm);

		//deklarasi polimorfik
		virtual void Eat(){};

		//deklarasi polimorfik interact
		virtual void Interact(){

			//Inisialisasi Random
			srand ((unsigned) time (0));

			//Inisialisasi random
			int kategori_interact = (rand() % 3);

			if (kategori_interact == 0) {
				cout << "Zzzz..." << endl;
			} else if (kategori_interact == 1) {
				cout << "Cuit.. cuit.." << endl;
			} else {
				cout << "Nyam nyam..." << endl;
			}
		};

};

class Rajawali : public Accipitridae {//pada map ditulis W
	public :
		//ctor dengan parameter
		Rajawali(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		Rajawali(const Rajawali& r);

		//dtor
		~Rajawali();

		//operator=
		Rajawali& operator=(const Rajawali& rm);

		//deklarasi polimorfik
		virtual void Eat(){};

		//deklarasi polimorfik interact
		virtual void Interact(){
			//Inisialisasi Random
			srand ((unsigned) time (0));

			//Inisialisasi random
			int kategori_interact = (rand() % 3);

			if (kategori_interact == 0) {
				cout << "Zzzz..." << endl;
			} else if (kategori_interact == 1) {
				cout << "Rowk rowk" << endl;
			} else {
				cout << "Nyam nyam..." << endl;
			}
		};

};

class Elang : public Accipitridae {//pada map ditulis N
	public :
		//ctor dengan parameter
		Elang(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		Elang(const Elang& e);

		//dtor
		~Elang();

		//operator=
		Elang& operator=(const Elang& em);

		//deklarasi polimorfik
		virtual void Eat(){};

		//deklarasi polimorfik interact
		virtual void Interact(){
			//Inisialisasi Random
			srand ((unsigned) time (0));

			//Inisialisasi random
			int kategori_interact = (rand() % 3);

			if (kategori_interact == 0) {
				cout << "Zzzz..." << endl;
			} else if (kategori_interact == 1) {
				cout << "Quarkkk!" << endl;
			} else {
				cout << "Nyam nyam..." << endl;
			}
		};

};

class Kelelawar : public Molossidae {//pada map ditulis A
	public :
		//ctor dengan parameter
		Kelelawar(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		Kelelawar(const Kelelawar& k);

		//dtor
		~Kelelawar();

		//operator=
		Kelelawar& operator=(const Kelelawar& km);

		//deklarasi polimorfik
		virtual void Eat(){};

		//deklarasi polimorfik interact
		virtual void Interact(){
			//Inisialisasi Random
			srand ((unsigned) time (0));

			//Inisialisasi random
			int kategori_interact = (rand() % 3);

			if (kategori_interact == 0) {
				cout << "Zzzz..." << endl;
			} else if (kategori_interact == 1) {
				cout << "Krook krook!" << endl;
			} else {
				cout << "Nyam nyam..." << endl;
			}
		};

};

class Cendrawasih : public Paradisaeidae {//pada map ditulis C
	public :
		//ctor dengan parameter
		Cendrawasih(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		Cendrawasih(const Cendrawasih& c);

		//dtor
		~Cendrawasih();

		//operator=
		Cendrawasih& operator=(const Cendrawasih& cm);

		//deklarasi polimorfik
		virtual void Eat(){};

		//deklarasi polimorfik interact
		virtual void Interact(){
			//Inisialisasi Random
			srand ((unsigned) time (0));

			//Inisialisasi random
			int kategori_interact = (rand() % 3);

			if (kategori_interact == 0) {
				cout << "Zzzz..." << endl;
			} else if (kategori_interact == 1) {
				cout << "Kukukuk!!!" << endl;
			} else {
				cout << "Nyam nyam..." << endl;
			}

		};

};

class Penyu : public Cheloniidae {
	public :
		//ctor dengan parameter
		Penyu(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		Penyu(const Penyu& p);

		//dtor
		~Penyu();

		//operator=
		Penyu& operator=(const Penyu& pm);

		//deklarasi polimorfik
		virtual void Eat(){};		

		//deklarasi polimorfik interact
		virtual void Interact(){
			//Inisialisasi Random
			srand ((unsigned) time (0));

			//Inisialisasi random
			int kategori_interact = (rand() % 3);

			if (kategori_interact == 0) {
				cout << "Zzzz..." << endl;
			} else if (kategori_interact == 1) {
				cout << "Nyawnnn!" << endl;
			} else {
				cout << "Nyam nyam..." << endl;
			}
		};

};

#endif
