#include <iostream>
#include "cagesnew.h"

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

int Cages::GetArrayCage() {
    return array_id;
}

int Cages::GetNeff() {
    return neff;
}

void Cages::SetIdx(int idx, Cage _cage) {
    array_id[idx - 1] = _cage; 
}