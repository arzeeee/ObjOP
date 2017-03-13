#include <iostream>
#include "AnimAbs.h"

using namespace std;

/******************/
/*DEFINISI  ANIMAL*/
/******************/

//Tidak direalisasikan karena kelas ABC

//ctor tanpa parameter
LandAnimal::LandAnimal(){
	setWeight(0);
	setTipe(0);
	setTamed(false);
	setX(0);
	setY(0);
}

//ctor dengan parameter
LandAnimal::LandAnimal(int weight, int tipe, bool tamed,int x,int y) {
	animal_weight = weight;
	animal_tipe = tipe;
	animal_tamed = tamed;
	location_x = x;
	location_y = y;
}

//cctor
LandAnimal::LandAnimal(const LandAnimal& la) {
	this->animal_weight = la.animal_weight;
	this->animal_tipe = la.animal_tipe;
	this->animal_tamed = la.animal_tamed;	
	this->location_x = la.location_x;
	this->location_y = la.location_y;
}

//dtor
LandAnimal::~LandAnimal() {}

//operator=
LandAnimal& LandAnimal::operator=(const LandAnimal& lam) {
	this->animal_weight = lam.animal_weight;
	this->animal_tipe = lam.animal_tipe;
	this->animal_tamed = lam.animal_tamed;
	this->location_x = lam.location_x;
	this->location_y = lam.location_y;
}


//Air Animal

//ctor tanpa parameter
AirAnimal::AirAnimal(){
	setWeight(0);
	setTipe(0);
	setTamed(false);
	setX(0);
	setY(0);
}

//ctor dengan parameter
AirAnimal::AirAnimal(int weight, int tipe, bool tamed,int x,int y){
	animal_weight = weight;
	animal_tipe = tipe;
	animal_tamed = tamed;
	location_x = x;
	location_y = y;
}

//cctor
AirAnimal::AirAnimal(const AirAnimal& aa) {
	this->animal_weight = aa.animal_weight;
	this->animal_tipe = aa.animal_tipe;
	this->animal_tamed = aa.animal_tamed;
	this->location_x = aa.location_x;
	this->location_y = aa.location_y;
}

//dtor
AirAnimal::~AirAnimal() {}

//operator=
AirAnimal& AirAnimal::operator=(const AirAnimal& aam) {
	this->animal_weight = aam.animal_weight;
	this->animal_tipe = aam.animal_tipe;
	this->animal_tamed = aam.animal_tamed;
	this->location_x = aam.location_x;
	this->location_y = aam.location_y;
} 

//Water Animal

//ctor tanpa parameter
WaterAnimal::WaterAnimal(){
	setWeight(0);
	setTipe(0);
	setTamed(false);
	setX(0);
	setY(0);
}

//ctor dengan parameter
WaterAnimal::WaterAnimal(int weight, int tipe, bool tamed,int x,int y){
	animal_weight = weight;
	animal_tipe = tipe;
	animal_tamed = tamed;
	location_x = x;
	location_y = y;
}

//cctor
WaterAnimal::WaterAnimal(const WaterAnimal& wa) {
	this->animal_weight = wa.animal_weight;
	this->animal_tipe = wa.animal_tipe;
	this->animal_tamed = wa.animal_tamed;
	this->location_x = wa.location_x;
	this->location_y = wa.location_y;
}

//dtor
WaterAnimal::~WaterAnimal() {}

//operator=
WaterAnimal& WaterAnimal::operator=(const WaterAnimal& wam) {
	this->animal_weight = wam.animal_weight;
	this->animal_tipe = wam.animal_tipe;
	this->animal_tamed = wam.animal_tamed;
	this->location_y = wam.location_y;
	this->location_x = wam.location_x;
} 



/*************************/
/*DEFINISI  FAMILI ANIMAL*/
/*************************/

//Implementasi Felidae
Felidae::Felidae(){
	setWeight(0);
	setTipe(0);
	setTamed(false);
	setX(0);
	setY(0);
}

Felidae::Felidae(int weight,int tipe,bool tamed,int x,int y){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Felidae::Felidae(const Felidae& f){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
	setX(this->getX());
	setY(this->getY());
} 

Felidae::~Felidae() {}

Felidae& Felidae::operator=(const Felidae& fm) {}



//Implementasi Giraffidae
Giraffidae::Giraffidae(){
	setWeight(0);
	setTipe(0);
	setTamed(false);
	setX(0);
	setY(0);
}

Giraffidae::Giraffidae(int weight,int tipe,bool tamed,int x,int y){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Giraffidae::Giraffidae(const Giraffidae& g){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
	setX(this->getX());
	setY(this->getY());
} 

Giraffidae::~Giraffidae() {}

Giraffidae& Giraffidae::operator=(const Giraffidae& gm) {}



//Implementasi Ursidae
Ursidae::Ursidae(){
	setWeight(0);
	setTipe(0);
	setTamed(false);
	setX(0);
	setY(0);
}

Ursidae::Ursidae(int weight,int tipe,bool tamed,int x,int y){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}


Ursidae::Ursidae(const Ursidae& u) {
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
	setX(this->getX());
	setY(this->getY());
} 

Ursidae::~Ursidae() {}

Ursidae& Ursidae::operator=(const Ursidae& um) {}



//Implementasi Equidae
Equidae::Equidae(){
	setWeight(0);
	setTipe(0);
	setTamed(false);
	setX(0);
	setY(0);
}

Equidae::Equidae(int weight,int tipe,bool tamed,int x,int y){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Equidae::Equidae(const Equidae& e){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
	setX(this->getX());
	setY(this->getY());
} 

Equidae::~Equidae() {}

Equidae& Equidae::operator=(const Equidae& em) {}



//Implementasi Scorpaenidae
Scorpaenidae::Scorpaenidae(){
	setWeight(0);
	setTipe(0);
	setTamed(false);
	setX(0);
	setY(0);
}

Scorpaenidae::Scorpaenidae(int weight,int tipe,bool tamed,int x,int y) {
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Scorpaenidae::Scorpaenidae(const Scorpaenidae& s){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
	setX(this->getX());
	setY(this->getY());
} 

Scorpaenidae::~Scorpaenidae() {}

Scorpaenidae& Scorpaenidae::operator=(const Scorpaenidae& sm) {}



//Implementasi Delphidae
Delphidae::Delphidae(){
	setWeight(0);
	setTipe(0);
	setTamed(false);
	setX(0);
	setY(0);
}

Delphidae::Delphidae(int weight,int tipe,bool tamed,int x,int y){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Delphidae::Delphidae(const Delphidae& d){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
	setX(this->getX());
	setY(this->getY());
} 

Delphidae::~Delphidae() {}

Delphidae& Delphidae::operator=(const Delphidae& dm) {}



//Implementasi Selachii
Selachii::Selachii(){
	setWeight(0);
	setTipe(0);
	setTamed(false);
	setX(0);
	setY(0);
}

Selachii::Selachii(int weight,int tipe,bool tamed,int x,int y){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Selachii::Selachii(const Selachii& s){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
	setX(this->getX());
	setY(this->getY());
} 

Selachii::~Selachii() {}

Selachii& Selachii::operator=(const Selachii& sm) {}



//Implementasi Octopodiae
Octopodiae::Octopodiae(){
	setWeight(0);
	setTipe(0);
	setTamed(false);
	setX(0);
	setY(0);
}

Octopodiae::Octopodiae(int weight,int tipe,bool tamed,int x,int y) {
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Octopodiae::Octopodiae(const Octopodiae& o){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
	setX(this->getX());
	setY(this->getY());
} 

Octopodiae::~Octopodiae() {}

Octopodiae& Octopodiae::operator=(const Octopodiae& om) {}



//Implementasi Columbidae
Columbidae::Columbidae(){
	setWeight(0);
	setTipe(0);
	setTamed(false);
	setX(0);
	setY(0);
}

Columbidae::Columbidae(int weight,int tipe,bool tamed,int x,int y) {
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Columbidae::Columbidae(const Columbidae& c){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
	setX(this->getX());
	setY(this->getY());
} 

Columbidae::~Columbidae() {}

Columbidae& Columbidae::operator=(const Columbidae& cm) {}



//Implementasi Accipitridae
Accipitridae::Accipitridae(){
	setWeight(0);
	setTipe(0);
	setTamed(false);
	setX(0);
	setY(0);
}

Accipitridae::Accipitridae(int weight,int tipe,bool tamed,int x,int y) {
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Accipitridae::Accipitridae(const Accipitridae& a){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
	setX(this->getX());
	setY(this->getY());
} 

Accipitridae::~Accipitridae() {}

Accipitridae& Accipitridae::operator=(const Accipitridae& am) {}



//Implementasi Molossidae
Molossidae::Molossidae(){
	setWeight(0);
	setTipe(0);
	setTamed(false);
	setX(0);
	setY(0);
}

Molossidae::Molossidae(int weight,int tipe,bool tamed,int x,int y) {
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Molossidae::Molossidae(const Molossidae& m){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
	setX(this->getX());
	setY(this->getY());
} 

Molossidae::~Molossidae() {}

Molossidae& Molossidae::operator=(const Molossidae& mm) {}



//Implementasi Paradisaeidae
Paradisaeidae::Paradisaeidae(){
	setWeight(0);
	setTipe(0);
	setTamed(false);
	setX(0);
	setY(0);
}

Paradisaeidae::Paradisaeidae(int weight,int tipe,bool tamed,int x,int y){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Paradisaeidae::Paradisaeidae(const Paradisaeidae& p){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
	setX(this->getX());
	setY(this->getY());
} 

Paradisaeidae::~Paradisaeidae() {}

Paradisaeidae& Paradisaeidae::operator=(const Paradisaeidae& pm) {}



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

Kucing& Kucing::operator=(const Kucing& km) {}



//Implementasi Harimau
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

Harimau& Harimau::operator=(const Harimau& hm) {}



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

Singa& Singa::operator=(const Singa& sm) {}



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



