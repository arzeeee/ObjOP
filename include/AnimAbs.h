#ifndef ANIMABS_H
#define ANIMABS_H

/******************/
/*DEKLARASI ANIMAL*/
/******************/
//Class Animal dan turunannya (famili animal dan tipe animal)
class Animal {
  public :
  	 virtual void Eat() const = 0;

  	//getter
  	int getWeight() {return animal_weight;};
  	int getTipe() {return animal_tipe;};
  	int getTamed() {return animal_tamed;};
  	int getX() {return location_x;};
  	int getY() {return location_y;};

  	//setter
  	void setWeight(int n) {animal_weight = n;};
  	void setTipe(int n) {animal_tipe = n;};
  	void setTamed(int n) {animal_tamed = n;};
  	void setX(int n) {location_x = n;};
  	void setY(int n) {location_y = n;};

  	int location_x;
	int location_y;
  protected :
  	int animal_weight;
	int animal_tipe;		
	int animal_tamed;
	
};

class LandAnimal : public Animal {
	public :
		//ctor tanpa parameter
		LandAnimal();

		//ctor dengan parameter
		LandAnimal(int weight, int tipe, int tamed,int x,int y);

		//cctor
		LandAnimal(const LandAnimal& la);

		//dtor
		virtual ~LandAnimal();
		
		//operator=
		LandAnimal& operator=(const LandAnimal& lam);

		//deklarasi polimorfik 
		virtual void Eat() const;
};

class AirAnimal : public Animal {
	public :
		//ctor tanpa parameter
		AirAnimal();

		//ctor dengan parameter
		AirAnimal(int weight, int tipe, int tamed,int x,int y);

		//cctor
		AirAnimal(const AirAnimal& aa);

		//dtor
		virtual ~AirAnimal();
		
		//operator=
		AirAnimal& operator=(const AirAnimal& aam);

		//deklarasi polimorfik
		virtual void Eat() const;
};

class WaterAnimal : public Animal {
	public :
		//ctor tanpa parameter
		WaterAnimal();

		//ctor dengan parameter
		WaterAnimal(int weight, int tipe, int tamed,int x,int y);

		//cctor
		WaterAnimal(const WaterAnimal& wa);

		//dtor 
		virtual ~WaterAnimal();

		//operator=
		WaterAnimal& operator=(const WaterAnimal& wam);

		//deklarasi polimorfik
		virtual void Eat() const;
};


/*************************/
/*DEKLARASI FAMILI ANIMAL*/
/*************************/
class Felidae : public LandAnimal {
	public :
		//ctor tanpa parameter
		Felidae();

		//ctor dengan parameter
		Felidae(int weight,int tipe,int tamed,int x,int y);

		//cctor
		Felidae(const Felidae& f);

		//dtor
		~Felidae();

		//operator=
		Felidae& operator=(const Felidae& fm);

		//deklarasi polimorfik
		virtual void Eat() const;
};

class Giraffidae : public LandAnimal {
	public :
		//ctor tanpa parameter
		Giraffidae();

		//ctor dengan parameter
		Giraffidae(int weight,int tipe,int tamed,int x,int y);

		//cctor
		Giraffidae(const Giraffidae& g);

		//dtor
		~Giraffidae();

		//operator=
		Giraffidae& operator=(const Giraffidae& gm);

		//deklarasi polimorfik
		virtual void Eat() const;
};

class Ursidae : public LandAnimal {
	public :
		//ctor tanpa parameter
		Ursidae();

		//ctor dengan parameter
		Ursidae(int weight,int tipe,int tamed,int x,int y);

		//cctor
		Ursidae(const Ursidae& u);

		//dtor
		~Ursidae();

		//operator=
		Ursidae& operator=(const Ursidae& um);

		//deklarasi polimorfik
		virtual void Eat() const;
};

class Equidae : public LandAnimal {
	public :
		//ctor tanpa parameter
		Equidae();

		//ctor dengan parameter
		Equidae(int weight,int tipe,int tamed,int x,int y);

		//cctor
		Equidae(const Equidae& e);

		//dtor
		~Equidae();

		//operator=
		Equidae& operator=(const Equidae& em);

		//deklasari polimorfik
		virtual void Eat() const;
};

class Scorpaenidae : public WaterAnimal {
	public :
		//ctor tanpa parameter
		Scorpaenidae();

		//ctor dengan parameter
		Scorpaenidae(int weight,int tipe,int tamed,int x,int y);

		//cctor
		Scorpaenidae(const Scorpaenidae& s);

		//dtor
		~Scorpaenidae();

		//operator=
		Scorpaenidae& operator=(const Scorpaenidae& sm);

		//deklarasi polimorfik
		virtual void Eat() const;
};

class Delphidae : public WaterAnimal {
	public :
		//ctor tanpa parameter
		Delphidae();

		//ctor dengan parameter
		Delphidae(int weight,int tipe,int tamed,int x,int y);

		//cctor
		Delphidae(const Delphidae& d);

		//dtor
		~Delphidae();

		//operator= 
		Delphidae& operator=(const Delphidae& dm);

		//deklarasi polimorfik
		virtual void Eat() const;
};

class Selachii : public WaterAnimal {
	public :
		//cctpr tanpa parameter
		Selachii();

		//ctor
		Selachii(int weight,int tipe,int tamed,int x,int y);

		//cctor
		Selachii(const Selachii& s);

		//dtor
		~Selachii();

		//operator=
		Selachii& operator=(const Selachii& sm);

		//deklarasi polimorfik
		virtual void Eat() const;
};

class Octopodiae : public WaterAnimal {
	public :
		//ctor tanpa parameter
		Octopodiae();

		//ctor dengan parameter
		Octopodiae(int weight,int tipe,int tamed,int x,int y);

		//cctor
		Octopodiae(const Octopodiae& o);

		//dtor
		~Octopodiae();

		//operator=
		Octopodiae& operator=(const Octopodiae& om);

		//deklarasi polimorfik
		virtual void Eat() const;
};

class Columbidae : public AirAnimal {
	public :
		//ctor tanpa parameter
		Columbidae();

		//ctor dengan parameter
		Columbidae(int weight,int tipe,int tamed,int x,int y);

		//cctor
		Columbidae(const Columbidae& c);

		//dtor
		~Columbidae();

		//operator=
		Columbidae& operator=(const Columbidae& cm);

		//deklarasi polimorfik
		virtual void Eat() const;
};

class Accipitridae : public AirAnimal {
	public :
		//ctor tanpa parameter
		Accipitridae();

		//ctor dengan parameter
		Accipitridae(int weight,int tipe,int tamed,int x,int y);

		//cctor
		Accipitridae(const Accipitridae& a);

		//dtor
		~Accipitridae();

		//operator=
		Accipitridae& operator=(const Accipitridae& am);

		//deklarasi polimorfik
		virtual void Eat() const;
};

class Molossidae : public AirAnimal {
	public :
		//ctor tanpa parameter
		Molossidae();

		//ctor dengan parameter
		Molossidae(int weight,int tipe,int tamed,int x,int y);

		//cctor
		Molossidae(const Molossidae& m);

		//dtor
		~Molossidae();

		//operator=
		Molossidae& operator=(const Molossidae& mm);

		//deklarasi polimorfik
		virtual void Eat() const;
};

class Paradisaeidae : public AirAnimal {
	public :
		//ctor tanpa parameter
		Paradisaeidae();

		//ctor dengan parameter
		Paradisaeidae(int weight,int tipe,int tamed,int x,int y);

		//cctor
		Paradisaeidae(const Paradisaeidae& p);

		//dtor
		~Paradisaeidae();

		//operator=
		Paradisaeidae& operator=(const Paradisaeidae& pm);

		//deklarasi polimorfik
		virtual void Eat() const;
};


/*******************/
/*DEKLARASI SPESIES*/
/*******************/

/****************LAND ANIMAL*****************/
class Kucing : public Felidae {
	public :
		Kucing();
		//ctor dengan parameter
		Kucing(int weight, int tipe, int tamed,int x,int y);

		//cctor
		Kucing(const Kucing& k);

		//dtor
		~Kucing();

		//operator=
		Kucing& operator=(const Kucing& km);

		//deklarasi polimorfik
		virtual void Eat() const;
};

class Harimau : public Felidae {
	public :
		//ctor dengan parameter
		Harimau(int weight, int tipe, int tamed,int x,int y);

		//cctor
		Harimau(const Harimau& h);

		//dtor
		~Harimau();

		//operator=
		Harimau& operator=(const Harimau& hm);

		//deklarasi polimorfik
		virtual void Eat() const;
};

class Singa : public Felidae {
	public :
		//ctor dengan parameter
		Singa(int weight, int tipe, int tamed,int x,int y);

		//cctor 
		Singa(const Singa& s);

		//dtor
		~Singa();

		//operator=
		Singa& operator=(const Singa& sm);

		//deklarasi polimorfik
		virtual void Eat() const;
};

class Jerapah : public Giraffidae {
	public :
		//ctor dengan parameter
		Jerapah(int weight, int tipe, int tamed,int x,int y);

		//cctor
		Jerapah(const Jerapah& j);

		//dtor
		~Jerapah();

		//operator=
		Jerapah& operator=(const Jerapah& jm);

		//deklarasi polimorfik
		virtual void Eat() const;
};

class Okapi : public Giraffidae {
	public :
		//ctor dengan parameter
		Okapi(int weight, int tipe, int tamed,int x,int y);

		//cctor
		Okapi(const Okapi& o);

		//dtor
		~Okapi();

		//operator=
		Okapi& operator=(const Okapi& om);

		//deklarasi polimorfik
		virtual void Eat() const;
};

class Panda : public Ursidae {
	public :
		//ctor dengan parameter
		Panda(int weight, int tipe, int tamed,int x,int y);

		//cctor
		Panda(const Panda& p);

		//dtor
		~Panda();

		//operator=
		Panda& operator=(const Panda& pm);

		//deklarasi polimorfik
		virtual void Eat() const;
};

class Beruang : public Ursidae {
	public :
		//ctor dengan parameter
		Beruang(int weight, int tipe, int tamed,int x,int y);

		//cctor
		Beruang(const Beruang& b);

		//dtor
		~Beruang();

		//operator=
		Beruang& operator=(const Beruang& bm);

		//deklarasi polimorfik
		virtual void Eat() const;
};

class Zebra : public Equidae {
	public :
		//ctor dengan parameter
		Zebra(int weight, int tipe, int tamed,int x,int y);

		//cctor
		Zebra(const Zebra& z);

		//dtor
		~Zebra();

		//operator=
		Zebra& operator=(const Zebra& zm);

		//deklarasi polimorfik
		virtual void Eat() const;
};

class Kuda : public Equidae {
	public :
		//ctor dengan parameter
		Kuda(int weight, int tipe, int tamed,int x,int y);

		//cctor
		Kuda(const Kuda& k);

		//dtor
		~Kuda();

		//operator=
		Kuda& operator=(const Kuda& km);

		//deklarasi polimorfik
		virtual void Eat() const;
};

/****************WATER ANIMAL*****************/
class Ebosia : public Scorpaenidae {
	public :
		//ctor dengan parameter
		Ebosia(int weight, int tipe, int tamed,int x,int y);

		//cctor
		Ebosia(const Ebosia& e);

		//dtor
		~Ebosia();

		//operator=
		Ebosia& operator=(const Ebosia& e);

		//deklarasi polimorfik
		virtual void Eat() const;

};

class Lionfish : public Scorpaenidae {
	public :
		//ctor dengan parameter
		Lionfish(int weight, int tipe, int tamed,int x,int y);

		//cctor
		Lionfish(const Lionfish& l);

		//dtor
		~Lionfish();

		//operator=
		Lionfish& operator=(const Lionfish& lm);

		//deklarasi polimorfik
		virtual void Eat() const;
};

class LumbaLumba : public Delphidae {
	public :
		//ctor dengan parameter
		LumbaLumba(int weight, int tipe, int tamed,int x,int y);

		//cctor
		LumbaLumba(const LumbaLumba& l);

		//dtor
		~LumbaLumba();

		//operator=
		LumbaLumba& operator=(const LumbaLumba& lm);

		//deklarasi polimorfik
		virtual void Eat() const;
};

class HiuPutih : public Selachii {
	public :
		//ctor dengan parameter
		HiuPutih(int weight, int tipe, int tamed,int x,int y);

		//cctor
		HiuPutih(const HiuPutih& h);

		//dtor
		~HiuPutih();

		//operator=
		HiuPutih& operator=(const HiuPutih& hm);

		//deklarasi polimorfik
		virtual void Eat() const;
};

class BigBlueOct : public Octopodiae {
	public :
		//ctor dengan parameter
		BigBlueOct(int weight, int tipe, int tamed,int x,int y);

		//cctor
		BigBlueOct(const BigBlueOct& b);

		//dtor
		~BigBlueOct();

		//operator=
		BigBlueOct& operator=(const BigBlueOct& bm);

		//deklarasi polimorfik
		virtual void Eat() const;
};

class EastPacRedOct : public Octopodiae {
	public :
		//ctor dengan parameter
		EastPacRedOct(int weight, int tipe, int tamed,int x,int y);

		//cctor
		EastPacRedOct(const EastPacRedOct& e);

		//dtor
		~EastPacRedOct();

		//operator=
		EastPacRedOct& operator=(const EastPacRedOct& em);

		//deklarasi polimorfik
		virtual void Eat() const;
};

/****************AIR ANIMAL*****************/
class Merpati : public Columbidae {
	public :
		//ctor dengan parameter
		Merpati(int weight, int tipe, int tamed,int x,int y);

		//cctor
		Merpati(const Merpati& m);

		//dtor
		~Merpati();

		//operator=
		Merpati& operator=(const Merpati& mm);

		//deklarasi polimorfik
		virtual void Eat() const;
};

class Rajawali : public Accipitridae {
	public :
		//ctor dengan parameter
		Rajawali(int weight, int tipe, int tamed,int x,int y);

		//cctor
		Rajawali(const Rajawali& r);

		//dtor
		~Rajawali();

		//operator=
		Rajawali& operator=(const Rajawali& rm);

		//deklarasi polimorfik
		virtual void Eat() const;
};

class Elang : public Accipitridae {
	public :
		//ctor dengan parameter
		Elang(int weight, int tipe, int tamed,int x,int y);

		//cctor
		Elang(const Elang& e);

		//dtor
		~Elang();

		//operator=
		Elang& operator=(const Elang& em);

		//deklarasi polimorfik
		virtual void Eat() const;
};

class Kelelawar : public Molossidae {
	public :
		//ctor dengan parameter
		Kelelawar(int weight, int tipe, int tamed,int x,int y);

		//cctor
		Kelelawar(const Kelelawar& k);

		//dtor
		~Kelelawar();

		//operator=
		Kelelawar& operator=(const Kelelawar& km);

		//deklarasi polimorfik
		virtual void Eat() const;

};

class Cendrawasih : public Paradisaeidae {
	public :
		//ctor dengan parameter
		Cendrawasih(int weight, int tipe, int tamed,int x,int y);

		//cctor
		Cendrawasih(const Cendrawasih& c);

		//dtor
		~Cendrawasih();

		//operator=
		Cendrawasih& operator=(const Cendrawasih& cm);

		//deklarasi polimorfik
		virtual void Eat() const;
};

#endif
