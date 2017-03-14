#include <iostream>
#include "cage.h"
#include "animal.h"

using namespace std;

Cage::Cage(){
    id = 0;
    x = 0;
    y = 0;
    animal_id = 0;
}

Cage::Cage(int _x,int _y, int _id, int _animal_id) {
    id = _id;
    x = _x;
    y = _y;
    animal_id = _animal_id;        
}

Cage::Cage(const Cage& c) {
    id = c.id;
    x = c.x;
    y = c.y;
    animal_id = c.animal_id;
}

Cage::~Cage() {}

Cage& Cage::operator=(const Cage& c) {
    if (this != &c) {
        id = c.id;
        x = c.x;
        y = c.y;
        animal_id = c.animal_id;
    }
    return *this;
}

int Cage::GetX() {
    return x;
}

int Cage::GetY() {
    return y;
}

int Cage::GetAnimal() {
    return animal_id;
}

int Cage::GetId() {
    return id;
}

void Cage::setCage(int _x,int _y, int _id, int _animal_id) {
    x = _x;
    y = _y;
    id = _id;
    animal_id = _animal_id;
    if (animal_id == 1) {
        Kucing K(10,2,true,x,y);
    } else if (animal_id == 2) {
        Harimau H(200,2,true,x,y);
    } else if (animal_id == 3) {
        Singa S(150,2,true,x,y);
    } else if (animal_id == 4) {
        Jerapah J(1200,1,true,x,y);
    } else if (animal_id == 5) {
        Okapi O(300,1,true,x,y);
    } else if (animal_id == 6) {
        Panda P(100,1,true,x,y);
    } else if (animal_id == 7) {
        Beruang K(10,2,true,x,y);
    } else if (animal_id == 8) {
        Zebra K(10,2,true,x,y);
    } else if (animal_id == 9) {
        Kuda K(10,2,true,x,y);
    } else if (animal_id == 10) {
        Ebosia K(10,2,true,x,y);
    } else if (animal_id == 11) {
        Lionfish K(10,2,true,x,y);
    } else if (animal_id == 12) {
        LumbaLumba K(10,2,true,x,y);
    } else if (animal_id == 13) {
        HiuPutih K(10,2,true,x,y);
    } else if (animal_id == 14) {
        BigBlueOct K(10,2,true,x,y);
    } else if (animal_id == 15) {
        EastPacRedOct K(10,2,true,x,y);
    } else if (animal_id == 16) {
        Merpati K(10,2,true,x,y);
    } else if (animal_id == 17) {
        Rajawali K(10,2,true,x,y);
    } else if (animal_id == 18) {
        Elang K(10,2,true,x,y);
    } else if (animal_id == 19) {
        Kelelawar K(10,2,true,x,y);
    } else if (animal_id == 20) {
        Cendrawasih K(10,2,true,x,y);
    }
}

