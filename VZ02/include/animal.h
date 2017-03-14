#ifndef ANIMALX_H
#define ANIMALX_H

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


class Kucing{
	public :
		Kucing();
		//ctor dengan parameter
		Kucing(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		Kucing(const Kucing& k);

		//dtor
		~Kucing();

		//operator=
		Kucing& operator=(const Kucing& km);

		//deklarasi 
		void interact();

		//deklarasi geter
		int getWeight(); 	
		int getTipe(); 		
		bool getTamed();		
		int getX();			
		int getY();

		//deklarasi setter
		void setWeight(int );
		void setTipe(int );
		void setTamed(bool );
		void setX(int );
		void setY(int );

	private :
		int location_x;
		int location_y;
		int animal_weight;
		int animal_tipe;		
		bool animal_tamed;
};

class Harimau {
	public :
		Harimau();
		//ctor dengan parameter
		Harimau(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		Harimau(const Harimau& h);

		//dtor
		~Harimau();

		//operator=
		Harimau& operator=(const Harimau& hm);

		//deklarasi polimorfik
		void interact();


		//deklarasi geter
		int getWeight(); 	
		int getTipe(); 		
		bool getTamed();		
		int getX();			
		int getY();

		//deklarasi setter
		void setWeight(int );
		void setTipe(int );
		void setTamed(bool );
		void setX(int );
		void setY(int );

	private :
		int location_x;
		int location_y;
		int animal_weight;
		int animal_tipe;		
		bool animal_tamed;
};

class Singa{
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
		void interact();


		//deklarasi geter
		int getWeight(); 	
		int getTipe(); 		
		bool getTamed();		
		int getX();			
		int getY();

		//deklarasi setter
		void setWeight(int );
		void setTipe(int );
		void setTamed(bool );
		void setX(int );
		void setY(int );

	private :
		int location_x;
		int location_y;
		int animal_weight;
		int animal_tipe;		
		bool animal_tamed;
};

class Jerapah{
	public :
		Jerapah();
		//ctor dengan parameter
		Jerapah(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		Jerapah(const Jerapah& j);

		//dtor
		~Jerapah();

		//operator=
		Jerapah& operator=(const Jerapah& jm);

		//deklarasi polimorfik
		void interact();
		

		//deklarasi geter
		int getWeight(); 	
		int getTipe(); 		
		bool getTamed();		
		int getX();			
		int getY();

		//deklarasi setter
		void setWeight(int );
		void setTipe(int );
		void setTamed(bool );
		void setX(int );
		void setY(int );

	private :
		int location_x;
		int location_y;
		int animal_weight;
		int animal_tipe;		
		bool animal_tamed;
};

class Okapi {
	public :
		Okapi();
		//ctor dengan parameter
		Okapi(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		Okapi(const Okapi& o);

		//dtor
		~Okapi();

		//operator=
		Okapi& operator=(const Okapi& om);

		//deklarasi polimorfik
		void interact();
		

		//deklarasi geter
		int getWeight(); 	
		int getTipe(); 		
		bool getTamed();		
		int getX();			
		int getY();

		//deklarasi setter
		void setWeight(int );
		void setTipe(int );
		void setTamed(bool );
		void setX(int );
		void setY(int );

	private :
		int location_x;
		int location_y;
		int animal_weight;
		int animal_tipe;		
		bool animal_tamed;
};

class Panda{
	public :
		Panda();
		//ctor dengan parameter
		Panda(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		Panda(const Panda& p);

		//dtor
		~Panda();

		//operator=
		Panda& operator=(const Panda& pm);

		//deklarasi polimorfik
		void interact();

		//deklarasi geter
		int getWeight(); 	
		int getTipe(); 		
		bool getTamed();		
		int getX();			
		int getY();

		//deklarasi setter
		void setWeight(int );
		void setTipe(int );
		void setTamed(bool );
		void setX(int );
		void setY(int );

	private :
		int location_x;
		int location_y;
		int animal_weight;
		int animal_tipe;		
		bool animal_tamed;
};

class Beruang{
	public :
		Beruang();
		//ctor dengan parameter
		Beruang(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		Beruang(const Beruang& b);

		//dtor
		~Beruang();

		//operator=
		Beruang& operator=(const Beruang& bm);

		//deklarasi polimorfik
		void interact();
		

		//deklarasi geter
		int getWeight(); 	
		int getTipe(); 		
		bool getTamed();		
		int getX();			
		int getY();

		//deklarasi setter
		void setWeight(int );
		void setTipe(int );
		void setTamed(bool );
		void setX(int );
		void setY(int );

	private :
		int location_x;
		int location_y;
		int animal_weight;
		int animal_tipe;		
		bool animal_tamed;
};

class Zebra{
	public :
		Zebra();
		//ctor dengan parameter
		Zebra(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		Zebra(const Zebra& z);

		//dtor
		~Zebra();

		//operator=
		Zebra& operator=(const Zebra& zm);

		//deklarasi polimorfik
		void interact();

		//deklarasi geter
		int getWeight(); 	
		int getTipe(); 		
		bool getTamed();		
		int getX();			
		int getY();

		//deklarasi setter
		void setWeight(int );
		void setTipe(int );
		void setTamed(bool );
		void setX(int );
		void setY(int );

	private :
		int location_x;
		int location_y;
		int animal_weight;
		int animal_tipe;		
		bool animal_tamed;
};

class Kuda{
	public :
		Kuda();
		//ctor dengan parameter
		Kuda(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		Kuda(const Kuda& k);

		//dtor
		~Kuda();

		//operator=
		Kuda& operator=(const Kuda& km);

		//deklarasi polimorfik
		void interact();

		//deklarasi geter
		int getWeight(); 	
		int getTipe(); 		
		bool getTamed();		
		int getX();			
		int getY();

		//deklarasi setter
		void setWeight(int );
		void setTipe(int );
		void setTamed(bool );
		void setX(int );
		void setY(int );

	private :
		int location_x;
		int location_y;
		int animal_weight;
		int animal_tipe;		
		bool animal_tamed;
};

/****************WATER ANIMAL*****************/
class Ebosia {
	public :
		Ebosia();
		//ctor dengan parameter
		Ebosia(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		Ebosia(const Ebosia& e);

		//dtor
		~Ebosia();

		//operator=
		Ebosia& operator=(const Ebosia& e);

		//deklarasi polimorfik
		void interact();

		//deklarasi geter
		int getWeight(); 	
		int getTipe(); 		
		bool getTamed();		
		int getX();			
		int getY();

		//deklarasi setter
		void setWeight(int );
		void setTipe(int );
		void setTamed(bool );
		void setX(int );
		void setY(int );

	private :
		int location_x;
		int location_y;
		int animal_weight;
		int animal_tipe;		
		bool animal_tamed;

};

class Lionfish {
	public :
		Lionfish();
		//ctor dengan parameter
		Lionfish(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		Lionfish(const Lionfish& l);

		//dtor
		~Lionfish();

		//operator=
		Lionfish& operator=(const Lionfish& lm);

		//deklarasi polimorfik
		void interact();

		//deklarasi geter
		int getWeight(); 	
		int getTipe(); 		
		bool getTamed();		
		int getX();			
		int getY();

		//deklarasi setter
		void setWeight(int );
		void setTipe(int );
		void setTamed(bool );
		void setX(int );
		void setY(int );

	private :
		int location_x;
		int location_y;
		int animal_weight;
		int animal_tipe;		
		bool animal_tamed;
};

class LumbaLumba{
	public :
		LumbaLumba();
		//ctor dengan parameter
		LumbaLumba(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		LumbaLumba(const LumbaLumba& l);

		//dtor
		~LumbaLumba();

		//operator=
		LumbaLumba& operator=(const LumbaLumba& lm);

		//deklarasi polimorfik
		void interact();

		//deklarasi geter
		int getWeight(); 	
		int getTipe(); 		
		bool getTamed();		
		int getX();			
		int getY();

		//deklarasi setter
		void setWeight(int );
		void setTipe(int );
		void setTamed(bool );
		void setX(int );
		void setY(int );

	private :
		int location_x;
		int location_y;
		int animal_weight;
		int animal_tipe;		
		bool animal_tamed;
};

class HiuPutih{
	public :
		HiuPutih();
		//ctor dengan parameter
		HiuPutih(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		HiuPutih(const HiuPutih& h);

		//dtor
		~HiuPutih();

		//operator=
		HiuPutih& operator=(const HiuPutih& hm);

		//deklarasi polimorfik
		void interact();

		//deklarasi geter
		int getWeight(); 	
		int getTipe(); 		
		bool getTamed();		
		int getX();			
		int getY();

		//deklarasi setter
		void setWeight(int );
		void setTipe(int );
		void setTamed(bool );
		void setX(int );
		void setY(int );

	private :
		int location_x;
		int location_y;
		int animal_weight;
		int animal_tipe;		
		bool animal_tamed;
};

class BigBlueOct {
	public :
		BigBlueOct();
		//ctor dengan parameter
		BigBlueOct(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		BigBlueOct(const BigBlueOct& b);

		//dtor
		~BigBlueOct();

		//operator=
		BigBlueOct& operator=(const BigBlueOct& bm);

		//deklarasi polimorfik
		void interact();

		//deklarasi geter
		int getWeight(); 	
		int getTipe(); 		
		bool getTamed();		
		int getX();			
		int getY();

		//deklarasi setter
		void setWeight(int );
		void setTipe(int );
		void setTamed(bool );
		void setX(int );
		void setY(int );

	private :
		int location_x;
		int location_y;
		int animal_weight;
		int animal_tipe;		
		bool animal_tamed;
};

class EastPacRedOct{
	public :
		EastPacRedOct();
		//ctor dengan parameter
		EastPacRedOct(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		EastPacRedOct(const EastPacRedOct& e);

		//dtor
		~EastPacRedOct();

		//operator=
		EastPacRedOct& operator=(const EastPacRedOct& em);

		//deklarasi polimorfik
		void interact();

		//deklarasi geter
		int getWeight(); 	
		int getTipe(); 		
		bool getTamed();		
		int getX();			
		int getY();

		//deklarasi setter
		void setWeight(int );
		void setTipe(int );
		void setTamed(bool );
		void setX(int );
		void setY(int );

	private :
		int location_x;
		int location_y;
		int animal_weight;
		int animal_tipe;		
		bool animal_tamed;
};

/****************AIR ANIMAL*****************/
class Merpati{
	public :
		Merpati();
		//ctor dengan parameter
		Merpati(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		Merpati(const Merpati& m);

		//dtor
		~Merpati();

		//operator=
		Merpati& operator=(const Merpati& mm);

		//deklarasi polimorfik
		void interact();

		//deklarasi geter
		int getWeight(); 	
		int getTipe(); 		
		bool getTamed();		
		int getX();			
		int getY();

		//deklarasi setter
		void setWeight(int );
		void setTipe(int );
		void setTamed(bool );
		void setX(int );
		void setY(int );

	private :
		int location_x;
		int location_y;
		int animal_weight;
		int animal_tipe;		
		bool animal_tamed;
};

class Rajawali {
	public :
		Rajawali();
		//ctor dengan parameter
		Rajawali(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		Rajawali(const Rajawali& r);

		//dtor
		~Rajawali();

		//operator=
		Rajawali& operator=(const Rajawali& rm);

		//deklarasi polimorfik
		void interact();

		//deklarasi geter
		int getWeight(); 	
		int getTipe(); 		
		bool getTamed();		
		int getX();			
		int getY();

		//deklarasi setter
		void setWeight(int );
		void setTipe(int );
		void setTamed(bool );
		void setX(int );
		void setY(int );

	private :
		int location_x;
		int location_y;
		int animal_weight;
		int animal_tipe;		
		bool animal_tamed;
};

class Elang{
	public :
		Elang();
		//ctor dengan parameter
		Elang(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		Elang(const Elang& e);

		//dtor
		~Elang();

		//operator=
		Elang& operator=(const Elang& em);

		//deklarasi polimorfik
		void interact();

		//deklarasi geter
		int getWeight(); 	
		int getTipe(); 		
		bool getTamed();		
		int getX();			
		int getY();

		//deklarasi setter
		void setWeight(int );
		void setTipe(int );
		void setTamed(bool );
		void setX(int );
		void setY(int );

	private :
		int location_x;
		int location_y;
		int animal_weight;
		int animal_tipe;		
		bool animal_tamed;
};

class Kelelawar{
	public :
		Kelelawar();
		//ctor dengan parameter
		Kelelawar(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		Kelelawar(const Kelelawar& k);

		//dtor
		~Kelelawar();

		//operator=
		Kelelawar& operator=(const Kelelawar& km);

		//deklarasi polimorfik
		void interact();

		//deklarasi geter
		int getWeight(); 	
		int getTipe(); 		
		bool getTamed();		
		int getX();			
		int getY();

		//deklarasi setter
		void setWeight(int );
		void setTipe(int );
		void setTamed(bool );
		void setX(int );
		void setY(int );

	private :
		int location_x;
		int location_y;
		int animal_weight;
		int animal_tipe;		
		bool animal_tamed;
};

class Cendrawasih{
	public :
		Cendrawasih();
		//ctor dengan parameter
		Cendrawasih(int weight, int tipe, bool tamed,int x,int y);

		//cctor
		Cendrawasih(const Cendrawasih& c);

		//dtor
		~Cendrawasih();

		//operator=
		Cendrawasih& operator=(const Cendrawasih& cm);

		//deklarasi polimorfik
		void interact();

		//deklarasi geter
		int getWeight(); 	
		int getTipe(); 		
		bool getTamed();		
		int getX();			
		int getY();

		//deklarasi setter
		void setWeight(int );
		void setTipe(int );
		void setTamed(bool );
		void setX(int );
		void setY(int );

	private :
		int location_x;
		int location_y;
		int animal_weight;
		int animal_tipe;		
		bool animal_tamed;
};

class Penyu{
	public :
		Penyu();
		//ctor dengan parameter
		Penyu(int weight, int tipe, bool tamed, int x, int y);
		
		//cctor
		Penyu(const Penyu& p);
		
		//dtor
		~Penyu();
		
		//operator=
		Penyu& operator=(const Penyu& py);
		
		//deklarasi polimorfik
		void interact();

		//deklarasi geter
		int getWeight(); 	
		int getTipe(); 		
		bool getTamed();		
		int getX();			
		int getY();

		//deklarasi setter
		void setWeight(int );
		void setTipe(int );
		void setTamed(bool );
		void setX(int );
		void setY(int );

	private :
		int location_x;
		int location_y;
		int animal_weight;
		int animal_tipe;		
		bool animal_tamed;
		
};


class Felidae{
public:
	Kucing kucing;
	Harimau harimau;
	Singa singa;
};

class Giraffidae{
public:
	Jerapah jerapah;
	Okapi okapi;
};

class Ursidae{
public:
	Panda panda;
	Beruang beruang;
};

class Equidae{
public:
	Zebra zebra;
	Kuda kuda;
};

class Scorpaenidae{
public:
	Ebosia ebosia;
	Lionfish lionfish;
};

class Delphidae{
public:
	LumbaLumba lumbaLumba;
};

class Selachii{
public:
	HiuPutih hiuPutih;
};

class Octopodiae{
public:
	BigBlueOct bigBlueOct;
	EastPacRedOct eastPacRedOct;
};

class Columbidae{
public:
	Merpati merpati;
};

class Accipitridae{
public:
	Rajawali rajwali;
	Elang elang;
};

class Molossidae{
public:
	Kelelawar kelelawar;
};

class Paradisaeidae{
public:
	Cendrawasih cendrawasih;
};


class LandAnimal{
  public:
	Felidae felidae;
	Giraffidae giraffidae;
	Ursidae ursidae;
	Equidae equidae;		
};

class AirAnimal{
  public:
  	Columbidae columbidae;		
  	Accipitridae accipitridae;
  	Molossidae molossidae;
  	Paradisaeidae paradisaeidae;
};

class WaterAnimal{
  public:
	Scorpaenidae scorpaenidae;
	Delphidae delphidae;
	Selachii selachii;
	Octopodiae octopodiae;	
  	
};

class Animal{
  public:
  	LandAnimal LAnimal;
	AirAnimal  AAnimal;
	WaterAnimal WAnimal;
	
};


#endif
