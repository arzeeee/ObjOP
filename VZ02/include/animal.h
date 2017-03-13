#ifndef ANIMAL_H
#define ANIMAL_H

/*******************/
/*DEKLARASI SPESIES*/
/*******************/

/****************LAND ANIMAL*****************/
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

class Harimau : public Felidae {
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
		void Eat(){};
};

class Singa : public Felidae {
	public :
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
};

class Jerapah : public Giraffidae {
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
};

class Okapi : public Giraffidae {
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
};

class Panda : public Ursidae {
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
};

class Beruang : public Ursidae {
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
};

class Zebra : public Equidae {
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
};

class Kuda : public Equidae {
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
};

/****************WATER ANIMAL*****************/
class Ebosia : public Scorpaenidae {
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

};

class Lionfish : public Scorpaenidae {
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
};

class LumbaLumba : public Delphidae {
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
};

class HiuPutih : public Selachii {
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
};

class BigBlueOct : public Octopodiae {
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
};

class EastPacRedOct : public Octopodiae {
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
};

/****************AIR ANIMAL*****************/
class Merpati : public Columbidae {
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
};

class Rajawali : public Accipitridae {
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
};

class Elang : public Accipitridae {
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
};

class Kelelawar : public Molossidae {
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

};

class Cendrawasih : public Paradisaeidae {
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
};

#endif
