#include <iostream>
#include "cages.h"

using namespace std;

Cages::Cages() : neff(0) {
    array_id = new Cage [neff];
}

Cages::Cages(int _neff) : neff(_neff) {
    array_id = new Cage [neff];
}

Cages::Cages(const Cages& c) : neff(c.neff){
    array_id = new Cage [neff];
}

Cages::~Cages() {
    delete [] array_id;
}

Cages& Cages::operator=(const Cages& cs) {
    if (this != &cs) {
        neff = cs.neff;
        array_id = new Cage [neff];
    }
}

Cage Cages::GetArrayCage() {
    return *array_id;
}

int Cages::GetNeff() {
    return neff;
}

void Cages::SetIdx(Cage _cage) {
    for (int i = 0;i<neff;i++) {
        array_id[i] = _cage;     
    }
    
}