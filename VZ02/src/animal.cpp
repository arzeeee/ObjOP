#include <iostream>
#include "../include/animal.h"

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
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
} 

Kucing::~Kucing() {}

Kucing& Kucing::operator=(const Kucing& k) {
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
	return *this;
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
	setWeight(0);
	setTipe(0);
	setTamed(false);
	setX(0);
	setY(0);
}

Harimau::Harimau(int weight, int tipe, bool tamed,int x,int y) {
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Harimau::Harimau(const Harimau& k){
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
} 

Harimau::~Harimau() {}

Harimau& Harimau::operator=(const Harimau& k) {
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
	return *this;
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
Singa::Singa(){
	setWeight(0);
	setTipe(0);
	setTamed(false);
	setX(0);
	setY(0);
}

Singa::Singa(int weight, int tipe, bool tamed,int x,int y){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Singa::Singa(const Singa& k){
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
} 

Singa::~Singa() {}

Singa& Singa::operator=(const Singa& k) {
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
	return *this;
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
Jerapah::Jerapah(){
	setWeight(0);
	setTipe(0);
	setTamed(false);
	setX(0);
	setY(0);
}

Jerapah::Jerapah(int weight, int tipe, bool tamed,int x,int y) {
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Jerapah::Jerapah(const Jerapah& k){
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
} 

Jerapah::~Jerapah() {}

Jerapah& Jerapah::operator=(const Jerapah& k) {
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
	return *this;
}

void Jerapah::interact(){
	cout << "Nomnom:3" << endl;
}
int Jerapah::getWeight() 	{return animal_weight;}
int Jerapah::getTipe() 		{return animal_tipe;}
bool Jerapah::getTamed()		{return animal_tamed;}
int Jerapah::getX()			{return location_x;}
int Jerapah::getY()			{return location_y;}

void Jerapah::setWeight(int n)	{animal_weight = n;}
void Jerapah::setTipe(int n)		{animal_tipe = n;}
void Jerapah::setTamed(bool n)	{animal_tamed = n;}
void Jerapah::setX(int x)		{location_x = x;}
void Jerapah::setY(int y)		{location_y = y;}

//Implementasi Okapi
Okapi::Okapi(){
	setWeight(0);
	setTipe(0);
	setTamed(false);
	setX(0);
	setY(0);	
}
Okapi::Okapi(int weight, int tipe, bool tamed,int x,int y){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Okapi::Okapi(const Okapi& k){
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
} 

Okapi::~Okapi(){}

Okapi& Okapi::operator=(const Okapi& k) {
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
	return *this;
}

void Okapi::interact(){
	cout << "Okokok" << endl;
}

int Okapi::getWeight() 	{return animal_weight;}
int Okapi::getTipe() 		{return animal_tipe;}
bool Okapi::getTamed()		{return animal_tamed;}
int Okapi::getX()			{return location_x;}
int Okapi::getY()			{return location_y;}

void Okapi::setWeight(int n)	{animal_weight = n;}
void Okapi::setTipe(int n)		{animal_tipe = n;}
void Okapi::setTamed(bool n)	{animal_tamed = n;}
void Okapi::setX(int x)		{location_x = x;}
void Okapi::setY(int y)		{location_y = y;}
//Implementasi Panda
Panda::Panda(){
	setWeight(0);
	setTipe(0);
	setTamed(false);
	setX(0);
	setY(0);	
}

Panda::Panda(int weight, int tipe, bool tamed,int x,int y){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Panda::Panda(const Panda& k){
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
} 

Panda::~Panda(){}

Panda& Panda::operator=(const Panda& k) {
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
	
	return *this;
}

void Panda::interact(){
	cout << "HelloPandaa!" << endl;
}

int Panda::getWeight() 	{return animal_weight;}
int Panda::getTipe() 		{return animal_tipe;}
bool Panda::getTamed()		{return animal_tamed;}
int Panda::getX()			{return location_x;}
int Panda::getY()			{return location_y;}

void Panda::setWeight(int n)	{animal_weight = n;}
void Panda::setTipe(int n)		{animal_tipe = n;}
void Panda::setTamed(bool n)	{animal_tamed = n;}
void Panda::setX(int x)		{location_x = x;}
void Panda::setY(int y)		{location_y = y;}

//Implementasi Beruang
Beruang::Beruang(){
	setWeight(0);
	setTipe(0);
	setTamed(false);
	setX(0);
	setY(0);	
}

Beruang::Beruang(int weight, int tipe, bool tamed,int x,int y){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Beruang::Beruang(const Beruang& k){
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
} 

Beruang::~Beruang(){}

Beruang& Beruang::operator=(const Beruang& k) {
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
	return *this;
}

void Beruang::interact(){
	cout << "TeddyBear!!" << endl;
}

int Beruang::getWeight() 	{return animal_weight;}
int Beruang::getTipe() 		{return animal_tipe;}
bool Beruang::getTamed()		{return animal_tamed;}
int Beruang::getX()			{return location_x;}
int Beruang::getY()			{return location_y;}

void Beruang::setWeight(int n)	{animal_weight = n;}
void Beruang::setTipe(int n)		{animal_tipe = n;}
void Beruang::setTamed(bool n)	{animal_tamed = n;}
void Beruang::setX(int x)		{location_x = x;}
void Beruang::setY(int y)		{location_y = y;}

//Implementasi Zebra
Zebra::Zebra(){
	setWeight(0);
	setTipe(0);
	setTamed(false);
	setX(0);
	setY(0);	
}

Zebra::Zebra(int weight, int tipe, bool tamed,int x,int y){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Zebra::Zebra(const Zebra& k){
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
} 

Zebra::~Zebra(){}

Zebra& Zebra::operator=(const Zebra& k) {
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
	return *this;
}

void Zebra::interact(){
	cout << "Zebzebrahh!" << endl;
}

int Zebra::getWeight() 	{return animal_weight;}
int Zebra::getTipe() 		{return animal_tipe;}
bool Zebra::getTamed()		{return animal_tamed;}
int Zebra::getX()			{return location_x;}
int Zebra::getY()			{return location_y;}

void Zebra::setWeight(int n)	{animal_weight = n;}
void Zebra::setTipe(int n)		{animal_tipe = n;}
void Zebra::setTamed(bool n)	{animal_tamed = n;}
void Zebra::setX(int x)		{location_x = x;}
void Zebra::setY(int y)		{location_y = y;}

//Implementasi Kuda
Kuda::Kuda(){
	setWeight(0);
	setTipe(0);
	setTamed(false);
	setX(0);
	setY(0);	
}

Kuda::Kuda(int weight, int tipe, bool tamed,int x,int y){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Kuda::Kuda(const Kuda& k){
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
} 

Kuda::~Kuda(){}

Kuda& Kuda::operator=(const Kuda& k) {
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
	return *this;
}

void Kuda::interact(){
	cout << "Horseyy!" << endl;
}

int Kuda::getWeight() 	{return animal_weight;}
int Kuda::getTipe() 		{return animal_tipe;}
bool Kuda::getTamed()		{return animal_tamed;}
int Kuda::getX()			{return location_x;}
int Kuda::getY()			{return location_y;}

void Kuda::setWeight(int n)	{animal_weight = n;}
void Kuda::setTipe(int n)		{animal_tipe = n;}
void Kuda::setTamed(bool n)	{animal_tamed = n;}
void Kuda::setX(int x)		{location_x = x;}
void Kuda::setY(int y)		{location_y = y;}

/****************WATER ANIMAL*****************/
//Impelemntasi Ebosia
Ebosia::Ebosia(){
	setWeight(0);
	setTipe(0);
	setTamed(false);
	setX(0);
	setY(0);
}
Ebosia::Ebosia(int weight, int tipe, bool tamed,int x,int y){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Ebosia::Ebosia(const Ebosia& k){
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
} 

Ebosia::~Ebosia(){}

Ebosia& Ebosia::operator=(const Ebosia& k) {
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
	return *this;	
}

void Ebosia::interact(){
	cout << "Ebosianiaa!" << endl;
}

int Ebosia::getWeight() 	{return animal_weight;}
int Ebosia::getTipe() 		{return animal_tipe;}
bool Ebosia::getTamed()		{return animal_tamed;}
int Ebosia::getX()			{return location_x;}
int Ebosia::getY()			{return location_y;}

void Ebosia::setWeight(int n)	{animal_weight = n;}
void Ebosia::setTipe(int n)		{animal_tipe = n;}
void Ebosia::setTamed(bool n)	{animal_tamed = n;}
void Ebosia::setX(int x)		{location_x = x;}
void Ebosia::setY(int y)		{location_y = y;}

//Implementasi Lionfish
Lionfish::Lionfish(){
	setWeight(0);
	setTipe(0);
	setTamed(false);
	setX(0);
	setY(0);
}

Lionfish::Lionfish(int weight, int tipe, bool tamed,int x,int y){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Lionfish::Lionfish(const Lionfish& k){
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
} 

Lionfish::~Lionfish(){}

Lionfish& Lionfish::operator=(const Lionfish& k) {
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
	return *this;
}

void Lionfish::interact(){
	cout << "Fishyfishylion!" << endl;
}

int Lionfish::getWeight() 	{return animal_weight;}
int Lionfish::getTipe() 		{return animal_tipe;}
bool Lionfish::getTamed()		{return animal_tamed;}
int Lionfish::getX()			{return location_x;}
int Lionfish::getY()			{return location_y;}

void Lionfish::setWeight(int n)	{animal_weight = n;}
void Lionfish::setTipe(int n)		{animal_tipe = n;}
void Lionfish::setTamed(bool n)	{animal_tamed = n;}
void Lionfish::setX(int x)		{location_x = x;}
void Lionfish::setY(int y)		{location_y = y;}
//Implementasi LumbaLumba
LumbaLumba::LumbaLumba(){
	setWeight(0);
	setTipe(0);
	setTamed(false);
	setX(0);
	setY(0);	
}

LumbaLumba::LumbaLumba(int weight, int tipe, bool tamed,int x,int y) {
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

LumbaLumba::LumbaLumba(const LumbaLumba& k){
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
} 

LumbaLumba::~LumbaLumba(){}

LumbaLumba& LumbaLumba::operator=(const LumbaLumba& k) {
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
	return *this;
}

void LumbaLumba::interact(){
	cout << "Dolphinoo!" << endl;
}
int LumbaLumba::getWeight() 	{return animal_weight;}
int LumbaLumba::getTipe() 		{return animal_tipe;}
bool LumbaLumba::getTamed()		{return animal_tamed;}
int LumbaLumba::getX()			{return location_x;}
int LumbaLumba::getY()			{return location_y;}

void LumbaLumba::setWeight(int n)	{animal_weight = n;}
void LumbaLumba::setTipe(int n)		{animal_tipe = n;}
void LumbaLumba::setTamed(bool n)	{animal_tamed = n;}
void LumbaLumba::setX(int x)		{location_x = x;}
void LumbaLumba::setY(int y)		{location_y = y;}

//Implementasi HiuPutih
HiuPutih::HiuPutih(){
	setWeight(0);
	setTipe(0);
	setTamed(false);
	setX(0);
	setY(0);
}
HiuPutih::HiuPutih(int weight, int tipe, bool tamed,int x,int y){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

HiuPutih::HiuPutih(const HiuPutih& k){
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
} 

HiuPutih::~HiuPutih(){}

HiuPutih& HiuPutih::operator=(const HiuPutih& k) {
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
	return *this;
}

void HiuPutih::interact(){
	cout << "WhiteSharky!" << endl;
}
int HiuPutih::getWeight() 	{return animal_weight;}
int HiuPutih::getTipe() 		{return animal_tipe;}
bool HiuPutih::getTamed()		{return animal_tamed;}
int HiuPutih::getX()			{return location_x;}
int HiuPutih::getY()			{return location_y;}

void HiuPutih::setWeight(int n)	{animal_weight = n;}
void HiuPutih::setTipe(int n)		{animal_tipe = n;}
void HiuPutih::setTamed(bool n)	{animal_tamed = n;}
void HiuPutih::setX(int x)		{location_x = x;}
void HiuPutih::setY(int y)		{location_y = y;}

//Implementasi BigBlueOct
BigBlueOct::BigBlueOct(){
	setWeight(0);
	setTipe(0);
	setTamed(false);
	setX(0);
	setY(0);	
}
BigBlueOct::BigBlueOct(int weight, int tipe, bool tamed,int x,int y){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

BigBlueOct::BigBlueOct(const BigBlueOct& k){
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
} 

BigBlueOct::~BigBlueOct(){}

BigBlueOct& BigBlueOct::operator=(const BigBlueOct& k) {
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
	return *this;
}

void BigBlueOct::interact(){
	cout << "bigbigblue!" << endl;
}

int BigBlueOct::getWeight() 	{return animal_weight;}
int BigBlueOct::getTipe() 		{return animal_tipe;}
bool BigBlueOct::getTamed()		{return animal_tamed;}
int BigBlueOct::getX()			{return location_x;}
int BigBlueOct::getY()			{return location_y;}

void BigBlueOct::setWeight(int n)	{animal_weight = n;}
void BigBlueOct::setTipe(int n)		{animal_tipe = n;}
void BigBlueOct::setTamed(bool n)	{animal_tamed = n;}
void BigBlueOct::setX(int x)		{location_x = x;}
void BigBlueOct::setY(int y)		{location_y = y;}
//Implementasi EastPacRedOct
EastPacRedOct::EastPacRedOct(){
	setWeight(0);
	setTipe(0);
	setTamed(false);
	setX(0);
	setY(0);	
}
EastPacRedOct::EastPacRedOct(int weight, int tipe, bool tamed,int x,int y) {
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

EastPacRedOct::EastPacRedOct(const EastPacRedOct& k){
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
} 

EastPacRedOct::~EastPacRedOct(){}

EastPacRedOct& EastPacRedOct::operator=(const EastPacRedOct& k) {
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
	return *this;
}

void EastPacRedOct::interact(){
	cout << "Pactpact" << endl;
}

int EastPacRedOct::getWeight() 	{return animal_weight;}
int EastPacRedOct::getTipe() 		{return animal_tipe;}
bool EastPacRedOct::getTamed()		{return animal_tamed;}
int EastPacRedOct::getX()			{return location_x;}
int EastPacRedOct::getY()			{return location_y;}

void EastPacRedOct::setWeight(int n)	{animal_weight = n;}
void EastPacRedOct::setTipe(int n)		{animal_tipe = n;}
void EastPacRedOct::setTamed(bool n)	{animal_tamed = n;}
void EastPacRedOct::setX(int x)		{location_x = x;}
void EastPacRedOct::setY(int y)		{location_y = y;}

/****************AIR ANIMAL*****************/
//Implementasi Merpati
Merpati::Merpati(){
	setWeight(0);
	setTipe(0);
	setTamed(false);
	setX(0);
	setY(0);	
}

Merpati::Merpati(int weight, int tipe, bool tamed,int x,int y){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Merpati::Merpati(const Merpati& k){
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
} 

Merpati::~Merpati(){}

Merpati& Merpati::operator=(const Merpati& k) {
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
	return *this;
}

void Merpati::interact(){
	cout << "Dovedove" << endl;
}

int Merpati::getWeight() 	{return animal_weight;}
int Merpati::getTipe() 		{return animal_tipe;}
bool Merpati::getTamed()		{return animal_tamed;}
int Merpati::getX()			{return location_x;}
int Merpati::getY()			{return location_y;}

void Merpati::setWeight(int n)	{animal_weight = n;}
void Merpati::setTipe(int n)		{animal_tipe = n;}
void Merpati::setTamed(bool n)	{animal_tamed = n;}
void Merpati::setX(int x)		{location_x = x;}
void Merpati::setY(int y)		{location_y = y;}
//Impelementasi Rajawali
Rajawali::Rajawali(){
	setWeight(0);
	setTipe(0);
	setTamed(false);
	setX(0);
	setY(0);	
}
Rajawali::Rajawali(int weight, int tipe, bool tamed,int x,int y){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Rajawali::Rajawali(const Rajawali& k){
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
} 

Rajawali::~Rajawali(){}

Rajawali& Rajawali::operator=(const Rajawali& k) {
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);	
	return *this;
}

void Rajawali::interact(){
	cout << "Rowkrowk" << endl;
}

int Rajawali::getWeight() 	{return animal_weight;}
int Rajawali::getTipe() 		{return animal_tipe;}
bool Rajawali::getTamed()		{return animal_tamed;}
int Rajawali::getX()			{return location_x;}
int Rajawali::getY()			{return location_y;}

void Rajawali::setWeight(int n)	{animal_weight = n;}
void Rajawali::setTipe(int n)		{animal_tipe = n;}
void Rajawali::setTamed(bool n)	{animal_tamed = n;}
void Rajawali::setX(int x)		{location_x = x;}
void Rajawali::setY(int y)		{location_y = y;}
//Impelementasi Elang
Elang::Elang(){
	setWeight(0);
	setTipe(0);
	setTamed(false);
	setX(0);
	setY(0);	
}
Elang::Elang(int weight, int tipe, bool tamed,int x,int y){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Elang::Elang(const Elang& k){
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
} 

Elang::~Elang(){}

Elang& Elang::operator=(const Elang& k) {
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
	return *this;
}

void Elang::interact(){
	cout << "Quarkk!" << endl;
}

int Elang::getWeight() 	{return animal_weight;}
int Elang::getTipe() 		{return animal_tipe;}
bool Elang::getTamed()		{return animal_tamed;}
int Elang::getX()			{return location_x;}
int Elang::getY()			{return location_y;}

void Elang::setWeight(int n)	{animal_weight = n;}
void Elang::setTipe(int n)		{animal_tipe = n;}
void Elang::setTamed(bool n)	{animal_tamed = n;}
void Elang::setX(int x)		{location_x = x;}
void Elang::setY(int y)		{location_y = y;}
//Implementasi Kelelawar
Kelelawar::Kelelawar(){
	setWeight(0);
	setTipe(0);
	setTamed(false);
	setX(0);
	setY(0);	
}

Kelelawar::Kelelawar(int weight, int tipe, bool tamed,int x,int y) {
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Kelelawar::Kelelawar(const Kelelawar& k){
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
} 

Kelelawar::~Kelelawar(){}

Kelelawar& Kelelawar::operator=(const Kelelawar& k) {
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
	return *this;
}

void Kelelawar::interact(){
	cout << "Krokkrok!" << endl;
}

int Kelelawar::getWeight() 	{return animal_weight;}
int Kelelawar::getTipe() 		{return animal_tipe;}
bool Kelelawar::getTamed()		{return animal_tamed;}
int Kelelawar::getX()			{return location_x;}
int Kelelawar::getY()			{return location_y;}

void Kelelawar::setWeight(int n)	{animal_weight = n;}
void Kelelawar::setTipe(int n)		{animal_tipe = n;}
void Kelelawar::setTamed(bool n)	{animal_tamed = n;}
void Kelelawar::setX(int x)		{location_x = x;}
void Kelelawar::setY(int y)		{location_y = y;}


//Implementasi Cendrawasih
Cendrawasih::Cendrawasih(){
	setWeight(0);
	setTipe(0);
	setTamed(false);
	setX(0);
	setY(0);	
}
Cendrawasih::Cendrawasih(int weight, int tipe, bool tamed,int x,int y){
	setWeight(weight);
	setTipe(tipe);
	setTamed(tamed);
	setX(x);
	setY(y);
}

Cendrawasih::Cendrawasih(const Cendrawasih& k){
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
} 

Cendrawasih::~Cendrawasih(){}

Cendrawasih& Cendrawasih::operator=(const Cendrawasih& k) {
	setWeight(k.animal_weight);
	setTipe(k.animal_tipe);
	setTamed(k.animal_tamed);
	setX(k.location_x);
	setY(k.location_y);
	return *this;
	}

void Cendrawasih::interact(){
	cout << "Kukukuk!" << endl;
}

int Cendrawasih::getWeight() 	{return animal_weight;}
int Cendrawasih::getTipe() 		{return animal_tipe;}
bool Cendrawasih::getTamed()		{return animal_tamed;}
int Cendrawasih::getX()			{return location_x;}
int Cendrawasih::getY()			{return location_y;}

void Cendrawasih::setWeight(int n)	{animal_weight = n;}
void Cendrawasih::setTipe(int n)		{animal_tipe = n;}
void Cendrawasih::setTamed(bool n)	{animal_tamed = n;}
void Cendrawasih::setX(int x)		{location_x = x;}
void Cendrawasih::setY(int y)		{location_y = y;}



