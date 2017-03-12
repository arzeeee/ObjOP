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
	setTamed(0);
}

//ctor dengan parameter
LandAnimal::LandAnimal(int weight,int tipe, int tamed) {
	animal_weight = weight;
	animal_tipe = tipe;
	animal_tamed = tamed;
}

//cctor
LandAnimal::LandAnimal(const LandAnimal& la) {
	this->animal_weight = la.animal_weight;
	this->animal_tipe = la.animal_tipe;
	this->animal_tamed = la.animal_tamed;	
}

//dtor
LandAnimal::~LandAnimal() {}

//operator=
LandAnimal& LandAnimal::operator=(const LandAnimal& lam) {
	this->animal_weight = lam.animal_weight;
	this->animal_tipe = lam.animal_tipe;
	this->animal_tamed = lam.animal_tamed;
}

//method eat
void LandAnimal::Eat() const {}


//Air Animal

//ctor tanpa parameter
AirAnimal::AirAnimal(){
	setWeight(0);
	setTipe(0);
	setTamed(0);
}

//ctor dengan parameter
AirAnimal::AirAnimal(int weight,int tipe, int tamed){
	animal_weight = weight;
	animal_tipe = tipe;
	animal_tamed = tamed;
}

//cctor
AirAnimal::AirAnimal(const AirAnimal& aa) {
	this->animal_weight = aa.animal_weight;
	this->animal_tipe = aa.animal_tipe;
	this->animal_tamed = aa.animal_tamed;
}

//dtor
AirAnimal::~AirAnimal() {}

//operator=
AirAnimal& AirAnimal::operator=(const AirAnimal& aam) {
	this->animal_weight = aam.animal_weight;
	this->animal_tipe = aam.animal_tipe;
	this->animal_tamed = aam.animal_tamed;
} 

//method eat
void AirAnimal::Eat() const {}


//Water Animal

//ctor tanpa parameter
WaterAnimal::WaterAnimal(){
	setWeight(0);
	setTipe(0);
	setTamed(0);
}

//ctor dengan parameter
WaterAnimal::WaterAnimal(int weight,int tipe, int tamed){
	animal_weight = weight;
	animal_tipe = tipe;
	animal_tamed = tamed;
}

//cctor
WaterAnimal::WaterAnimal(const WaterAnimal& wa) {
	this->animal_weight = wa.animal_weight;
	this->animal_tipe = wa.animal_tipe;
	this->animal_tamed = wa.animal_tamed;
}

//dtor
WaterAnimal::~WaterAnimal() {}

//operator=
WaterAnimal& WaterAnimal::operator=(const WaterAnimal& wam) {
	this->animal_weight = wam.animal_weight;
	this->animal_tipe = wam.animal_tipe;
	this->animal_tamed = wam.animal_tamed;
} 

//method eat
void WaterAnimal::Eat() const {}



/*************************/
/*DEFINISI  FAMILI ANIMAL*/
/*************************/

//Implementasi Felidae
Felidae::Felidae(){
	setWeight(0);
	setTipe(0);
	setTamed(0);
}

Felidae::Felidae(int weight,int tipe,int tamed){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
}

Felidae::Felidae(const Felidae& f){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
} 

Felidae::~Felidae() {}

Felidae& Felidae::operator=(const Felidae& fm) {}

void Felidae::Eat() const{}

//Implementasi Giraffidae
Giraffidae::Giraffidae(){
	setWeight(0);
	setTipe(0);
	setTamed(0);
}

Giraffidae::Giraffidae(int weight,int tipe,int tamed){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
}

Giraffidae::Giraffidae(const Giraffidae& g){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
} 

Giraffidae::~Giraffidae() {}

Giraffidae& Giraffidae::operator=(const Giraffidae& gm) {}

void Giraffidae::Eat() const{}

//Implementasi Ursidae
Ursidae::Ursidae(){
	setWeight(0);
	setTipe(0);
	setTamed(0);
}

Ursidae::Ursidae(int weight,int tipe,int tamed){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
}


Ursidae::Ursidae(const Ursidae& u) {
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
} 

Ursidae::~Ursidae() {}

Ursidae& Ursidae::operator=(const Ursidae& um) {}

void Ursidae::Eat() const{}

//Implementasi Equidae
Equidae::Equidae(){
	setWeight(0);
	setTipe(0);
	setTamed(0);
}

Equidae::Equidae(int weight,int tipe,int tamed){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
}

Equidae::Equidae(const Equidae& e){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
} 

Equidae::~Equidae() {}

Equidae& Equidae::operator=(const Equidae& em) {}

void Equidae::Eat() const{}

//Implementasi Scorpaenidae
Scorpaenidae::Scorpaenidae(){
	setWeight(0);
	setTipe(0);
	setTamed(0);
}

Scorpaenidae::Scorpaenidae(int weight,int tipe,int tamed) {
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
}

Scorpaenidae::Scorpaenidae(const Scorpaenidae& s){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
} 

Scorpaenidae::~Scorpaenidae() {}

Scorpaenidae& Scorpaenidae::operator=(const Scorpaenidae& sm) {}

void Scorpaenidae::Eat() const{}

//Implementasi Delphidae
Delphidae::Delphidae(){
	setWeight(0);
	setTipe(0);
	setTamed(0);
}

Delphidae::Delphidae(int weight,int tipe,int tamed){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
}

Delphidae::Delphidae(const Delphidae& d){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
} 

Delphidae::~Delphidae() {}

Delphidae& Delphidae::operator=(const Delphidae& dm) {}

void Delphidae::Eat() const{}

//Implementasi Selachii
Selachii::Selachii(){
	setWeight(0);
	setTipe(0);
	setTamed(0);
}

Selachii::Selachii(int weight,int tipe,int tamed){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
}

Selachii::Selachii(const Selachii& s){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
} 

Selachii::~Selachii() {}

Selachii& Selachii::operator=(const Selachii& sm) {}

void Selachii::Eat() const{}

//Implementasi Octopodiae
Octopodiae::Octopodiae(){
	setWeight(0);
	setTipe(0);
	setTamed(0);
}

Octopodiae::Octopodiae(int weight,int tipe,int tamed) {
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
}

Octopodiae::Octopodiae(const Octopodiae& o){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
} 

Octopodiae::~Octopodiae() {}

Octopodiae& Octopodiae::operator=(const Octopodiae& om) {}

void Octopodiae::Eat() const{}

//Implementasi Columbidae
Columbidae::Columbidae(){
	setWeight(0);
	setTipe(0);
	setTamed(0);
}

Columbidae::Columbidae(int weight,int tipe,int tamed) {
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
}

Columbidae::Columbidae(const Columbidae& c){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
} 

Columbidae::~Columbidae() {}

Columbidae& Columbidae::operator=(const Columbidae& cm) {}

void Columbidae::Eat() const{}

//Implementasi Accipitridae
Accipitridae::Accipitridae(){
	setWeight(0);
	setTipe(0);
	setTamed(0);
}

Accipitridae::Accipitridae(int weight,int tipe,int tamed) {
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
}

Accipitridae::Accipitridae(const Accipitridae& a){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
} 

Accipitridae::~Accipitridae() {}

Accipitridae& Accipitridae::operator=(const Accipitridae& am) {}

void Accipitridae::Eat() const{}

//Implementasi Molossidae
Molossidae::Molossidae(){
	setWeight(0);
	setTipe(0);
	setTamed(0);
}

Molossidae::Molossidae(int weight,int tipe,int tamed) {
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
}

Molossidae::Molossidae(const Molossidae& m){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
} 

Molossidae::~Molossidae() {}

Molossidae& Molossidae::operator=(const Molossidae& mm) {}

void Molossidae::Eat() const{}

//Implementasi Paradisaeidae
Paradisaeidae::Paradisaeidae(){
	setWeight(0);
	setTipe(0);
	setTamed(0);
}

Paradisaeidae::Paradisaeidae(int weight,int tipe,int tamed){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
}

Paradisaeidae::Paradisaeidae(const Paradisaeidae& p){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
} 

Paradisaeidae::~Paradisaeidae() {}

Paradisaeidae& Paradisaeidae::operator=(const Paradisaeidae& pm) {}

void Paradisaeidae::Eat() const{}

/*******************/
/*DEFINISI  SPESIES*/
/*******************/

/****************LAND ANIMAL*****************/
//Implementasi Kucing
Kucing::Kucing() {
	setWeight(0);
	setTipe(0);
	setTamed(0);
}

Kucing::Kucing(int weight, int tipe, int tamed){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
}

Kucing::Kucing(const Kucing& k){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
} 

Kucing::~Kucing() {}

Kucing& Kucing::operator=(const Kucing& km) {}

void Kucing::Eat() const{}

//Implementasi Harimau
Harimau::Harimau(int weight, int tipe, int tamed) {
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
}

Harimau::Harimau(const Harimau& h){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
} 

Harimau::~Harimau() {}

Harimau& Harimau::operator=(const Harimau& hm) {}

void Harimau::Eat() const{}

//Implementasi Singa
Singa::Singa(int weight, int tipe, int tamed){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
}

Singa::Singa(const Singa& s){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
} 

Singa::~Singa() {}

Singa& Singa::operator=(const Singa& sm) {}

void Singa::Eat() const{}

//Implementasi Jerapah
Jerapah::Jerapah(int weight, int tipe, int tamed) {
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
}

Jerapah::Jerapah(const Jerapah& j){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
} 

Jerapah::~Jerapah() {}

Jerapah& Jerapah::operator=(const Jerapah& jm) {}

void Jerapah::Eat() const{}

//Implementasi Okapi
Okapi::Okapi(int weight, int tipe, int tamed){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
}

Okapi::Okapi(const Okapi& o){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
} 

Okapi::~Okapi(){}

Okapi& Okapi::operator=(const Okapi& om) {}

void Okapi::Eat() const{}

//Implementasi Panda
Panda::Panda(int weight, int tipe, int tamed){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
}

Panda::Panda(const Panda& p){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
} 

Panda::~Panda(){}

Panda& Panda::operator=(const Panda& pm) {}

void Panda::Eat() const{}

//Implementasi Beruang
Beruang::Beruang(int weight, int tipe, int tamed){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
}

Beruang::Beruang(const Beruang& b){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
} 

Beruang::~Beruang(){}

Beruang& Beruang::operator=(const Beruang& bm) {}

void Beruang::Eat() const{}

//Implementasi Zebra
Zebra::Zebra(int weight, int tipe, int tamed){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
}

Zebra::Zebra(const Zebra& z){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
} 

Zebra::~Zebra(){}

Zebra& Zebra::operator=(const Zebra& zm) {}

void Zebra::Eat() const{}

//Implementasi Kuda
Kuda::Kuda(int weight, int tipe, int tamed){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
}

Kuda::Kuda(const Kuda& k){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
} 

Kuda::~Kuda(){}

Kuda& Kuda::operator=(const Kuda& km) {}

void Kuda::Eat() const{}


/****************WATER ANIMAL*****************/
//Impelemntasi Ebosia
Ebosia::Ebosia(int weight, int tipe, int tamed){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
}

Ebosia::Ebosia(const Ebosia& e){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
} 

Ebosia::~Ebosia(){}

Ebosia& Ebosia::operator=(const Ebosia& em) {}

void Ebosia::Eat() const{}

//Implementasi Lionfish
Lionfish::Lionfish(int weight, int tipe, int tamed){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
}

Lionfish::Lionfish(const Lionfish& l){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
} 

Lionfish::~Lionfish(){}

Lionfish& Lionfish::operator=(const Lionfish& lm) {}

void Lionfish::Eat() const{}

//Implementasi LumbaLumba
LumbaLumba::LumbaLumba(int weight, int tipe, int tamed) {
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
}

LumbaLumba::LumbaLumba(const LumbaLumba& l){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
} 

LumbaLumba::~LumbaLumba(){}

LumbaLumba& LumbaLumba::operator=(const LumbaLumba& lm) {}

void LumbaLumba::Eat() const{}

//Implementasi HiuPutih
HiuPutih::HiuPutih(int weight, int tipe, int tamed){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
}

HiuPutih::HiuPutih(const HiuPutih& h){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
} 

HiuPutih::~HiuPutih(){}

HiuPutih& HiuPutih::operator=(const HiuPutih& hm) {}

void HiuPutih::Eat() const{}

//Implementasi BigBlueOct
BigBlueOct::BigBlueOct(int weight, int tipe, int tamed){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
}

BigBlueOct::BigBlueOct(const BigBlueOct& b){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
} 

BigBlueOct::~BigBlueOct(){}

BigBlueOct& BigBlueOct::operator=(const BigBlueOct& bm) {}

void BigBlueOct::Eat() const{}

//Implementasi EastPacRedOct
EastPacRedOct::EastPacRedOct(int weight, int tipe, int tamed) {
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
}

EastPacRedOct::EastPacRedOct(const EastPacRedOct& e){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
} 

EastPacRedOct::~EastPacRedOct(){}

EastPacRedOct& EastPacRedOct::operator=(const EastPacRedOct& em) {}

void EastPacRedOct::Eat() const{}


/****************AIR ANIMAL*****************/
//Implementasi Merpati
Merpati::Merpati(int weight, int tipe, int tamed){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
}

Merpati::Merpati(const Merpati& m){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
} 

Merpati::~Merpati(){}

Merpati& Merpati::operator=(const Merpati& mm) {}

void Merpati::Eat() const{}

//Impelementasi Rajawali
Rajawali::Rajawali(int weight, int tipe, int tamed){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
}

Rajawali::Rajawali(const Rajawali& r){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
} 

Rajawali::~Rajawali(){}

Rajawali& Rajawali::operator=(const Rajawali& rm) {}

void Rajawali::Eat() const{}

//Impelementasi Elang
Elang::Elang(int weight, int tipe, int tamed){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
}

Elang::Elang(const Elang& e){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
} 

Elang::~Elang(){}

Elang& Elang::operator=(const Elang& em) {}

void Elang::Eat() const{}

//Implementasi Kelelawar
Kelelawar::Kelelawar(int weight, int tipe, int tamed) {
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
}

Kelelawar::Kelelawar(const Kelelawar& k){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
} 

Kelelawar::~Kelelawar(){}

Kelelawar& Kelelawar::operator=(const Kelelawar& km) {}

void Kelelawar::Eat() const{}

//Implementasi Cendrawasih
Cendrawasih::Cendrawasih(int weight, int tipe, int tamed){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
}

Cendrawasih::Cendrawasih(const Cendrawasih& c){
	setWeight(this->getWeight());
	setTipe(this->getTipe());
	setTamed(this->getTamed());
} 

Cendrawasih::~Cendrawasih(){}

Cendrawasih& Cendrawasih::operator=(const Cendrawasih& cm) {}

void Cendrawasih::Eat() const{}

