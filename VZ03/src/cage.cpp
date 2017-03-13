#include <iostream>
#include "cage.h"

using namespace std;

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
}