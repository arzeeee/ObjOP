#ifndef ANIMABS_H
#define ANIMABS_H

/******************/
/*DEKLARASI ANIMAL*/
/******************/
//Class Animal dan turunannya (famili animal dan tipe animal)
class Animal {
  public :
  	virtual void Eat() const = 0;
  private :
  	int animal_weight;
	int animal_type;		
	int animal_tamed;
};

class LandAnimal : public Animal {
	public :
		//ctor tanpa parameter
		LandAnimal();

		//ctor dengan parameter
		LandAnimal(int weigth, int type, int tamed);

		//cctor
		LandAnimal(const LandAnimal& la);

		//dtor
		virtual ~LandAnimal();
		
		//operator=
		LandAnimal& operator=(const LandAnimal& lam);

		//deklarasi polimorfik 
		virtual void Eat();
};

class AirAnimal : public Animal {
	public :
		//ctor tanpa parameter
		AirAnimal();

		//ctor dengan parameter
		AirAnimal(int weight, int type, int tamed);

		//cctor
		AirAnimal(const AirAnimal& aa);

		//dtor
		virtual ~AirAnimal();
		
		//operator=
		AirAnimal& operator=(const AirAnimal& aam);

		//deklarasi polimorfik
		virtual void Eat();
};

class WaterAnimal : public Animal {
	public :
		//ctor tanpa parameter
		WaterAnimal();

		//ctor dengan parameter
		WaterAnimal(int weight, int type, int tamed);

		//cctor
		WaterAnimal(const WaterAnimal& wa);

		//dtor 
		virtual ~WaterAnimal();

		//operator=
		WaterAnimal& operator=(const WaterAnimal& wam);

		//deklarasi polimorfik
		virtual void Eat();
};


/*************************/
/*DEKLARASI FAMILI ANIMAL*/
/*************************/
class Felidae : public LandAnimal {
	public :
		//ctor tanpa parameter
		Felidae();

		//ctor dengan parameter
		Felidae(int weight,int type,int tamed);

		//cctor
		Felidae(const Felidae& f);

		//dtor
		~Felidae();

		//operator=
		Felidae& operator=(const Felidae& fm);

		//deklarasi polimorfik
		virtual void Eat();
};

class Giraffidae : public LandAnimal {
	public :
		//ctor tanpa parameter
		Giraffidae();

		//ctor dengan parameter
		Giraffidae(int weight,int type,int tamed);

		//cctor
		Giraffidae(const Felidae& g);

		//dtor
		~Giraffidae();

		//operator=
		Giraffidae& operator=(const Giraffidae& gm);

		//deklarasi polimorfik
		virtual void Eat();
};

class Ursidae : public LandAnimal {
	public :
		//ctor tanpa parameter
		Ursidae();

		//ctor dengan parameter
		Ursidae(int weight,int type,int tamed);

		//cctor
		Ursidae(const Ursidae& u);

		//dtor
		~Ursidae();

		//operator=
		Ursidae& operator=(const Ursidae& um);

		//deklarasi polimorfik
		virtual void Eat();
};

class Equidae : public LandAnimal {
	public :
		//ctor tanpa parameter
		Equidae();

		//ctor dengan parameter
		Equidae(int weight,int type,int tamed);

		//cctor
		Equidae(const Equidae& e);

		//dtor
		~Equidae();

		//operator=
		Equidae& operator=(const Equidae& em);

		//deklasari polimorfik
		virtual void Eat();
};

class Scorpaenidae : public WaterAnimal {
	public :
		//ctor tanpa parameter
		Scorpaenidae();

		//ctor dengan parameter
		Scorpaenidae(int weight,int type,int tamed);

		//cctor
		Scorpaenidae(const Scorpaenidae& s);

		//dtor
		~Scorpaenidae();

		//operator=
		Scorpaenidae& operator=(const Scorpaenidae& sm);

		//deklarasi polimorfik
		virtual void Eat();
};

class Delphidae : public WaterAnimal {
	public :
		//ctor tanpa parameter
		Delphidae();

		//ctor dengan parameter
		Delphidae(int weight,int type,int tamed);

		//cctor
		Delphidae(const Delphidae& d);

		//dtor
		~Delphidae();

		//operator= 
		Delphidae& operator=(const Delphidae& dm);

		//deklarasi polimorfik
		virtual void Eat();
};

class Selachii : public WaterAnimal {
	public :
		//cctpr tanpa parameter
		Selachii();

		//ctor
		Selachii(int weight,int type,int tamed);

		//cctor
		Selachii(const Selachii& s);

		//operator=
		Selachii& operator=(const Selachii& sm);

		//deklarasi polimorfik
		virtual void Eat();
};

class Octopodiae : public WaterAnimal {
	public :
		//ctor tanpa parameter
		Octopodiae();

		//ctor dengan parameter
		Octopodiae(int weight,int type,int tamed);

		//cctor
		Octopodiae(const Octopodiae& o);

		//operator=
		Octopodiae& operator=(const Octopodiae& om);

		//deklarasi polimorfik
		virtual void Eat();
};

class Columbidae : public AirAnimal {
	public :
		//ctor tanpa parameter
		Columbidae();

		//ctor dengan parameter
		Columbidae(int weight,int type,int tamed);

		//cctor
		Columbidae(const Columbidae& c);

		//operator=
		Columbidae& operator=(const Columbidae& cm);

		//deklarasi polimorfik
		virtual void Eat();
};

class Accipitridae : public AirAnimal {
	public :
		//ctor tanpa parameter
		Accipitridae();

		//ctor dengan parameter
		Accipitridae(int weight,int type,int tamed);

		//cctor
		Accipitridae(const Accipitridae& a);

		//operator=
		Accipitridae& operator=(const Accipitridae& am);

		//deklarasi polimorfik
		virtual void Eat();
};

class Molossidae : public AirAnimal {
	public :
		//ctor tanpa parameter
		Molossidae();

		//ctor dengan parameter
		Molossidae(int weight,int type,int tamed);

		//cctor
		Molossidae(const Molossidae& m);

		//operator=
		Molossidae& operator=(const Molossidae& mm);

		//deklarasi polimorfik
		virtual void Eat();
};

class Paradisaeidae : public AirAnimal {
	public :
		//ctor tanpa parameter
		Paradisaeidae();

		//ctor dengan parameter
		Paradisaeidae(int weight,int type,int tamed);

		//cctor
		Paradisaeidae(const Paradisaeidae& p);

		//operator=
		Paradisaeidae& operator=(const Paradisaeidae& pm);

		//deklarasi polimorfik
		virtual void Eat();
};


/*******************/
/*DEKLARASI SPESIES*/
/*******************/

/****************LAND ANIMAL*****************/
class Kucing : public Felidae {
	public :
		//ctor dengan parameter
		Kucing(int weight, int type, int tamed);

		//cctor
		Kucing(const Kucing& k);

		//dtor
		~Kucing();

		//operator=
		Kucing& operator=(const Kucing& km);

		//deklarasi polimorfik
		void Eat();
};

class Harimau : public Felidae {
	public :
		//ctor dengan parameter
		Harimau(int weight, int type, int tamed);

		//cctor
		Harimau(const Harimau& h);

		//dtor
		~Harimau();

		//operator=
		Harimau& operator=(const Harimau& hm);

		//deklarasi polimorfik
		void Eat();
};

class Singa : public Felidae {
	public :
		//ctor dengan parameter
		Singa(int weight, int type, int tamed);

		//cctor 
		Singa(const Singa& s);

		//dtor
		~Singa();

		//operator=
		Singa& operator=(const Singa& sm);

		//deklarasi polimorfik
		void Eat();
};

class Jerapah : public Giraffidae {
	public :
		//ctor dengan parameter
		Jerapah(int weight, int type, int tamed);

		//cctor
		Jerapah(const Jerapah& j);

		//dtor
		~Jerapah();

		//operator=
		Jerapah& operator=(const Jerapah& jm);

		//deklarasi polimorfik
		void Eat();
};

class Okapi : public Giraffidae {
	public :
		//ctor dengan parameter
		Okapi(int weight, int type, int tamed);

		//cctor
		Okapi(const Okapi& o);

		//dtor
		~Okapi();

		//operator=
		Okapi& operator=(const Okapi& om);

		//deklarasi polimorfik
		void Eat();
};

class Panda : public Ursidae {
	public :
		//ctor dengan parameter
		Panda(int weight, int type, int tamed);

		//cctor
		Panda(const Panda& p);

		//dtor
		~Panda();

		//operator=
		Panda& operator=(const Panda& pm);

		//deklarasi polimorfik
		void Eat();
};

class Beruang : public Ursidae {
	public :
		//ctor dengan parameter
		Beruang(int weight, int type, int tamed);

		//cctor
		Beruang(const Beruang& b);

		//dtor
		~Beruang();

		//operator=
		Beruang& operator=(const Beruang& bm);

		//deklarasi polimorfik
		void Eat();
};

class Zebra : public Equidae {
	public :
		//ctor dengan parameter
		Zebra(int weight, int type, int tamed);

		//cctor
		Zebra(const Zebra& z);

		//dtor
		~Zebra();

		//operator=
		Zebra& operator=(const Zebra& zm);

		//deklarasi polimorfik
		void Eat();
};

class Kuda : public Equidae {
	public :
		//ctor dengan parameter
		Kuda(int weight, int type, int tamed);

		//cctor
		Kuda(const Kuda& k);

		//dtor
		~Kuda();

		//operator=
		Kuda& operator=(const Kuda& km);

		//deklarasi polimorfik
		void Eat();
};

/****************WATER ANIMAL*****************/
class Ebosia : public Scorpaenidae {
	public :
		//ctor dengan parameter
		Ebosia(int weight, int type, int tamed);

		//cctor
		Ebosia(const Ebosia& e);

		//dtor
		~Ebosia();

		//operator=
		Ebosia& operator=(const Ebosia& e);

		//deklarasi polimorfik
		void Eat();

};

class Lionfish : public Scorpaenidae {
	public :
		//ctor dengan parameter
		Lionfish(int weight, int type, int tamed);

		//cctor
		Lionfish(const Lionfish& l);

		//dtor
		~Lionfish();

		//operator=
		Lionfish& operator=(const Lionfish& lm);

		//deklarasi polimorfik
		void Eat();
};

class LumbaLumba : public Delphidae {
	public :
		//ctor dengan parameter
		LumbaLumba(int weight, int type, int tamed);

		//cctor
		LumbaLumba(const LumbaLumba& l);

		//dtor
		~LumbaLumba();

		//operator=
		LumbaLumba& operator=(const LumbaLumba& lm);

		//deklarasi polimorfik
		void Eat();
};

class HiuPutih : public Selachii {
	public :
		//ctor dengan parameter
		HiuPutih(int weight, int type, int tamed);

		//cctor
		HiuPutih(const HiuPutih& h);

		//dtor
		~HiuPutih();

		//operator=
		HiuPutih& operator=(const HiuPutih& hm);

		//deklarasi polimorfik
		void Eat();
};

class BigBlueOct : public Octopodiae {
	public :
		//ctor dengan parameter
		BigBlueOct(int weight, int type, int tamed);

		//cctor
		BigBlueOct(const BigBlueOct& b);

		//dtor
		~BigBlueOct();

		//operator=
		BigBlueOct& operator=(const BigBlueOct& bm);

		//deklarasi polimorfik
		void Eat();
};

class EastPacRedOct : public Octopodiae {
	public :
		//ctor dengan parameter
		EastPacRedOct(int weight, int type, int tamed);

		//cctor
		EastPacRedOct(const EastPacRedOct& e);

		//dtor
		~EastPacRedOct();

		//operator=
		EastPacRedOct& operator=(const EastPacRedOct& em);

		//deklarasi polimorfik
		void Eat();
};

/****************AIR ANIMAL*****************/
class Merpati : public Columbidae {
	public :
		//ctor dengan parameter
		Merpati(int weight, int type, int tamed);

		//cctor
		Merpati(const Merpati& m);

		//dtor
		~Merpati();

		//operator=
		Merpati& operator=(const Merpati& mm);

		//deklarasi polimorfik
		void Eat();
};

class Rajawali : public Accipitridae {
	public :
		//ctor dengan parameter
		Rajawali(int weight, int type, int tamed);

		//cctor
		Rajawali(const Rajawali& r);

		//dtor
		~Rajawali();

		//operator=
		Rajawali& operator=(const Rajawali& rm);

		//deklarasi polimorfik
		void Eat();
};

class Elang : public Accipitridae {
	public :
		//ctor dengan parameter
		Elang(int weight, int type, int tamed);

		//cctor
		Elang(const Elang& e);

		//dtor
		~Elang();

		//operator=
		Elang& operator=(const Elang& em);

		//deklarasi polimorfik
		void Eat();
};

class Kelelawar : public Molossidae {
	public :
		//ctor dengan parameter
		Kelelawar(int weight, int type, int tamed);

		//cctor
		Kelelawar(const Kelelawar& k);

		//dtor
		~Kelelawar();

		//operator=
		Kelelawar& operator=(const Kelelawar& km);

		//deklarasi polimorfik
		void Eat();

};

class Cendrawasih : public Paradisaeidae {
	public :
		//ctor dengan parameter
		Cendrawasih(int weight, int type, int tamed);

		//cctor
		Cendrawasih(const Cendrawasih& c);

		//dtor
		~Cendrawasih();

		//operator=
		Cendrawasih& operator=(const Cendrawasih& cm);

		//deklarasi polimorfik
		void Eat();
};

#endif