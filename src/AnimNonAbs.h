#ifndef ANIMNONABS_H
#define ANIMNONABS_H
#include "AnimAbs.h"

class Kucing : public Felidae, public Karnivora {
	public :
		Kucing();
		void Eat();
};

class Harimau : public Felidae, public Karnivora {
	public :
		Harimau();
		void Eat();
};

class Singa : public Felidae, public Karnivora {
	public :
		Singa();
		void Eat();
};

class Jerapah : public Giraffidae, public Herbivora {
	public :
		Jerapah();
		void Eat();
};

class Okapi : public Giraffidae, public Herbivora {
	public :
		Okapi();
		void Eat();
};

class Panda : public Ursidae, public Herbivora {
	public :
		Panda();
		void Eat();
};

class Beruang : public Ursidae, public Omnivora {
	public :
		Beruang();
		void Eat();
};

class Zebra : public Equidae, public Herbivora {
	public :
		Zebra();
		void Eat();
};

class Kuda : public Equidae, public Herbivora {
	public :
		Kuda();
		void Eat();
};

class IkanEbosia : public Scorpaenidae, public Omnivora {
	public :
		IkanEbosia();
		void Eat();
};

class LionFish : public Scorpaenidae, public Omnivora {
	public :
		LionFish();
		virtual void Eat();
};

class LumbaLumba : public Delphidae, public Karnivora {
	public :
		LumbaLumba();
		void Eat();
};

class HiuPutih : public Delphidae, public Karnivora  {
	public :
		HiuPutih();
		void Eat();
};

class BigBlueOct : public Octopodiae, public Karnivora  {
	public :
		BigBlueOct();
		void Eat();
};

class EastPacRedOct : public Octopodiae, public Karnivora  {
	public :
		EastPacRedOct();
		void Eat();
};

class Merpati : public Columbidae, public Herbivora {
	public :
		Merpati();
		void Eat();
};

class Rajawali : public Accipitridae, public Karnivora {
	public :
		Rajawali();
		void Eat();
};

class Elang : public Accipitridae, public Karnivora {
	public :
		Elang();
		void Eat();
};

class Kelelawar : public Molossidae, public Karnivora {
	public :
		Kelelawar();
		void Eat();
};

class Cendrawasih : public Paradisaeidae, public Herbivora {
	public :
		Cendrawasih();
		void Eat();
};

#endif
