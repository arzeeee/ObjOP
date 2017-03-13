#include <iostream>
#include "animal.h"

using namespace std;

/*******************/
/*DEFINISI  SPESIES*/
/*******************/

/****************LAND ANIMAL*****************/
//Implementasi Kucing
Kucing::Kucing() {
	setWeight(0);
	setTipe(0);
	setTamed(false);
	setX(0);
	setY(0);
}

Kucing::Kucing(int weight, int tipe, bool tamed,int x,int y){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Kucing::Kucing(const Kucing& k){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
	setX(this->getX());
	setY(this->getY());
} 

Kucing::~Kucing() {}

Kucing& Kucing::operator=(const Kucing& km) {
	setWeight(km.getWeight());
	setTipe(km.getTipe());
	setTamed(km.getTamed());
	setX(km.getX());
	setY(km.getY());
}

void Kucing::interact(){
	cout << "Meow!" << endl;
}

int Kucing::getWeight() 	{return animal_weight;}
int Kucing::getTipe() 		{return animal_tipe;}
bool Kucing::getTamed()		{return animal_tamed;}
int Kucing::getX()			{return location_x;}
int Kucing::getY()			{return location_y;}

void Kucing::setWeight(int n)	{animal_weight = n;}
void Kucing::setTipe(int n)		{animal_tipe = n;}
void Kucing::setTamed(bool n)	{animal_tamed = n;}
void Kucing::setX(int x)		{location_x = x;}
void Kucing::setY(int y)		{location_y = y;}

//Implementasi Harimau
Harimau::Harimau(){

}

Harimau::Harimau(int weight, int tipe, bool tamed,int x,int y) {
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Harimau::Harimau(const Harimau& h){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
	setX(this->getX());
	setY(this->getY());
} 

Harimau::~Harimau() {}

Harimau& Harimau::operator=(const Harimau& hm) {
	setWeight(hm.getWeight());
	setTipe(hm.getTipe());
	setTamed(hm.getTamed());
	setX(hm.getX());
	setY(hm.getY());
}

void Harimau::interact(){
	cout << "Grrr!" << endl;
}

int Harimau::getWeight() 	{return animal_weight;}
int Harimau::getTipe() 		{return animal_tipe;}
bool Harimau::getTamed()		{return animal_tamed;}
int Harimau::getX()			{return location_x;}
int Harimau::getY()			{return location_y;}

void Harimau::setWeight(int n)	{animal_weight = n;}
void Harimau::setTipe(int n)		{animal_tipe = n;}
void Harimau::setTamed(bool n)	{animal_tamed = n;}
void Harimau::setX(int x)		{location_x = x;}
void Harimau::setY(int y)		{location_y = y;}

//Implementasi Singa
Singa::Singa(int weight, int tipe, bool tamed,int x,int y){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Singa::Singa(const Singa& s){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
	setX(this->getX());
	setY(this->getY());
} 

Singa::~Singa() {}

Singa& Singa::operator=(const Singa& sm) {
	setWeight(sm.getWeight());
	setTipe(sm.getTipe());
	setTamed(sm.getTamed());
	setX(sm.getX());
	setY(sm.getY());
}

void Singa::interact(){
	cout << "Roar!" << endl;
}

int Singa::getWeight() 	{return animal_weight;}
int Singa::getTipe() 		{return animal_tipe;}
bool Singa::getTamed()		{return animal_tamed;}
int Singa::getX()			{return location_x;}
int Singa::getY()			{return location_y;}

void Singa::setWeight(int n)	{animal_weight = n;}
void Singa::setTipe(int n)		{animal_tipe = n;}
void Singa::setTamed(bool n)	{animal_tamed = n;}
void Singa::setX(int x)		{location_x = x;}
void Singa::setY(int y)		{location_y = y;}

//Implementasi Jerapah
Jerapah::Jerapah(int weight, int tipe, bool tamed,int x,int y) {
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Jerapah::Jerapah(const Jerapah& j){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
	setX(this->getX());
	setY(this->getY());
} 

Jerapah::~Jerapah() {}

Jerapah& Jerapah::operator=(const Jerapah& jm) {}



//Implementasi Okapi
Okapi::Okapi(int weight, int tipe, bool tamed,int x,int y){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Okapi::Okapi(const Okapi& o){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
	setX(this->getX());
	setY(this->getY());
} 

Okapi::~Okapi(){}

Okapi& Okapi::operator=(const Okapi& om) {}



//Implementasi Panda
Panda::Panda(int weight, int tipe, bool tamed,int x,int y){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Panda::Panda(const Panda& p){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
	setX(this->getX());
	setY(this->getY());
} 

Panda::~Panda(){}

Panda& Panda::operator=(const Panda& pm) {}



//Implementasi Beruang
Beruang::Beruang(int weight, int tipe, bool tamed,int x,int y){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Beruang::Beruang(const Beruang& b){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
	setX(this->getX());
	setY(this->getY());
} 

Beruang::~Beruang(){}

Beruang& Beruang::operator=(const Beruang& bm) {}



//Implementasi Zebra
Zebra::Zebra(int weight, int tipe, bool tamed,int x,int y){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Zebra::Zebra(const Zebra& z){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
	setX(this->getX());
	setY(this->getY());
} 

Zebra::~Zebra(){}

Zebra& Zebra::operator=(const Zebra& zm) {}



//Implementasi Kuda
Kuda::Kuda(int weight, int tipe, bool tamed,int x,int y){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Kuda::Kuda(const Kuda& k){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
	setX(this->getX());
	setY(this->getY());
} 

Kuda::~Kuda(){}

Kuda& Kuda::operator=(const Kuda& km) {}




/****************WATER ANIMAL*****************/
//Impelemntasi Ebosia
Ebosia::Ebosia(int weight, int tipe, bool tamed,int x,int y){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Ebosia::Ebosia(const Ebosia& e){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
	setX(this->getX());
	setY(this->getY());
} 

Ebosia::~Ebosia(){}

Ebosia& Ebosia::operator=(const Ebosia& em) {}



//Implementasi Lionfish
Lionfish::Lionfish(int weight, int tipe, bool tamed,int x,int y){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Lionfish::Lionfish(const Lionfish& l){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
	setX(this->getX());
	setY(this->getY());
} 

Lionfish::~Lionfish(){}

Lionfish& Lionfish::operator=(const Lionfish& lm) {}



//Implementasi LumbaLumba
LumbaLumba::LumbaLumba(int weight, int tipe, bool tamed,int x,int y) {
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

LumbaLumba::LumbaLumba(const LumbaLumba& l){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
	setX(this->getX());
	setY(this->getY());
} 

LumbaLumba::~LumbaLumba(){}

LumbaLumba& LumbaLumba::operator=(const LumbaLumba& lm) {}



//Implementasi HiuPutih
HiuPutih::HiuPutih(int weight, int tipe, bool tamed,int x,int y){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

HiuPutih::HiuPutih(const HiuPutih& h){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
	setX(this->getX());
	setY(this->getY());
} 

HiuPutih::~HiuPutih(){}

HiuPutih& HiuPutih::operator=(const HiuPutih& hm) {}



//Implementasi BigBlueOct
BigBlueOct::BigBlueOct(int weight, int tipe, bool tamed,int x,int y){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

BigBlueOct::BigBlueOct(const BigBlueOct& b){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
	setX(this->getX());
	setY(this->getY());
} 

BigBlueOct::~BigBlueOct(){}

BigBlueOct& BigBlueOct::operator=(const BigBlueOct& bm) {}



//Implementasi EastPacRedOct
EastPacRedOct::EastPacRedOct(int weight, int tipe, bool tamed,int x,int y) {
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

EastPacRedOct::EastPacRedOct(const EastPacRedOct& e){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
	setX(this->getX());
	setY(this->getY());
} 

EastPacRedOct::~EastPacRedOct(){}

EastPacRedOct& EastPacRedOct::operator=(const EastPacRedOct& em) {}




/****************AIR ANIMAL*****************/
//Implementasi Merpati
Merpati::Merpati(int weight, int tipe, bool tamed,int x,int y){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Merpati::Merpati(const Merpati& m){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
	setX(this->getX());
	setY(this->getY());
} 

Merpati::~Merpati(){}

Merpati& Merpati::operator=(const Merpati& mm) {}



//Impelementasi Rajawali
Rajawali::Rajawali(int weight, int tipe, bool tamed,int x,int y){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Rajawali::Rajawali(const Rajawali& r){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
	setX(this->getX());
	setY(this->getY());
} 

Rajawali::~Rajawali(){}

Rajawali& Rajawali::operator=(const Rajawali& rm) {}



//Impelementasi Elang
Elang::Elang(int weight, int tipe, bool tamed,int x,int y){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Elang::Elang(const Elang& e){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
	setX(this->getX());
	setY(this->getY());
} 

Elang::~Elang(){}

Elang& Elang::operator=(const Elang& em) {}



//Implementasi Kelelawar
Kelelawar::Kelelawar(int weight, int tipe, bool tamed,int x,int y) {
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Kelelawar::Kelelawar(const Kelelawar& k){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
	setX(this->getX());
	setY(this->getY());
} 

Kelelawar::~Kelelawar(){}

Kelelawar& Kelelawar::operator=(const Kelelawar& km) {}



//Implementasi Cendrawasih
Cendrawasih::Cendrawasih(int weight, int tipe, bool tamed,int x,int y){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Cendrawasih::Cendrawasih(const Cendrawasih& c){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
	setX(this->getX());
	setY(this->getY());
} 

Cendrawasih::~Cendrawasih(){}

Cendrawasih& Cendrawasih::operator=(const Cendrawasih& cm) {}



