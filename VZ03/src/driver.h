
#ifndef DRIVERT_H
#define DRIVERT_H

#include <string>
#include "zoo.h"
#include "cage.h"
#include "cages.h"
#include "player.h"
using namespace std;
class Driver {
    public :
        //method baca file eksternal
        //ctor
        Driver();

        //dtor
        ~Driver();

        //method print map
        void PrintMap(int user_x,int user_y);

        //method print map dengan parameter
        void PrintMap(int x1, int y1, int x2,int y2);

        //method print legenda
        void PrintLegend();

        //method print user interface
        void PrintInterface();

        //method memasukkan dan melakukan kegiatan atas pilihan interface
        void InputPilihan();

        //method interface tour
        void PrintInterfaceTour();

        //method memasukkan pilihan pada saat tour
        void InputPilihanTour();

        //method untuk berinteraksi dengan binatang
        void Interaksi();

        //method untuk mengetahui banyaknya makanan yang dimakan suatu binatang per satu hari
        void Makanan();

        Player user;
    private :
        string **matriks_map;
        Zoo mapzoo;
        int zoo_width;
        int zoo_height;
        Cages* kandang_kandang;
        Cage** kandang;
        

};

#endif