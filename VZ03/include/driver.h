
#ifndef DRIVER_H
#define DRIVER_H

#include <string>
#include "zoo.h"
using namespace std;
class Driver {
    public :
        //method baca file eksternal
        //ctor
        Driver();

        //dtor
        ~Driver();

        //method print map
        void PrintMap();

        //method print legenda
        void PrintLegend();

    private :
        string **matriks_map;
        Zoo mapzoo;
        int zoo_width;
        int zoo_height;

};

#endif