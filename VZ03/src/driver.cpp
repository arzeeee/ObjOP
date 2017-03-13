#include <iostream>
#include <string>
#include "driver.h"
#include <fstream>
#include <cstdlib>
#include "zoo.h"

/*
#include "cell.h"
#include "cage.h"
#include "cages.h"
#include "animal.h"
#include "render.h"
*/
#include <string>
/* FOREGROUND */
#define RST  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

#define teks matriks_map[i][j][0]

#define FRED(x) KRED << x << RST
#define FGRN(x) KGRN << x << RST
#define FYEL(x) KYEL << x << RST
#define FBLU(x) KBLU << x << RST
#define FMAG(x) KMAG << x << RST
#define FCYN(x) KCYN << x << RST
#define FWHT(x) KWHT << x << RST

#define BOLD(x) "\x1B[1m" x RST
#define UNDL(x) "\x1B[4m" x RST


using namespace std;

Driver::Driver() : zoo_width(20), zoo_height(20) {
    //Implementasi matriks_map
    int i,j;

    ifstream infile;
    infile.open ("mapZoo.txt");
    string str;

    matriks_map = new string *[zoo_height];
    for (i = 0; i < zoo_height; i++) {
        matriks_map[i] = new string [zoo_width];
    }

    int idx_str;

    for (i = 0; i < zoo_height; i++) {
        getline(infile, str);
        idx_str = 0;
        for (j = 0; j < zoo_width; j++) {
                matriks_map[i][j] = str.substr(idx_str, 3);
                idx_str += 3;
        }
     }

     //Implementasi translasi matriks_map ke zoo
     Zoo mapzoo(zoo_height, zoo_width); 
     for (i = 0; i < zoo_height ; i++) {
         for (j = 0; j < zoo_width; j++) {
             if (matriks_map[i][j][0] == '#' || matriks_map[i][j][0] == 'S' || matriks_map[i][j][0] == 'J' || matriks_map[i][j][0] == 'H' || matriks_map[i][j][0] == 'B' || matriks_map[i][j][0] == 'Z' || matriks_map[i][j][0] == 'O' || matriks_map[i][j][0] == 'U' || matriks_map[i][j][0] == 'D' ||matriks_map[i][j][0] == 'K') {
                 mapzoo.SetElementZoo(i,j,1);
             } else if (matriks_map[i][j][0] == '@' || matriks_map[i][j][0] == 'A' || matriks_map[i][j][0] == 'N' || matriks_map[i][j][0] == 'W' || matriks_map[i][j][0] == 'C' || matriks_map[i][j][0] == 'M') {
                 mapzoo.SetElementZoo(i,j,2);
             } else if (matriks_map[i][j][0] == '$' || matriks_map[i][j][0] == 'T' || matriks_map[i][j][0] == 'R' || matriks_map[i][j][0] == 'Y' || matriks_map[i][j][0] == 'L' || matriks_map[i][j][0] == 'E' || matriks_map[i][j][0] == 'I' || matriks_map[i][j][0] == 'G')  {
                 mapzoo.SetElementZoo(i,j,3);
             } else if (matriks_map[i][j][0] == '-') {
                 mapzoo.SetElementZoo(i,j,-1);
             } else if (matriks_map[i][j][0] == 'P') {
                 mapzoo.SetElementZoo(i,j,-2);
             } else if (matriks_map[i][j][0] == '&') {
                 mapzoo.SetElementZoo(i,j,-3);
             } else if (matriks_map[i][j][0] == '-' && (j == mapzoo.nkolom- 1)) {
                 mapzoo.SetElementZoo(i,j,-4);
             } else if (matriks_map[i][j][0] == '-' && (i == 0)) {
                 mapzoo.SetElementZoo(i,j,-5);
             }
         }
     }

     //menutup file eksternal
     infile.close();
}

Driver::~Driver() {
    for (int i = 0;i<zoo_height;i++) {
        delete [] matriks_map[i];
    }
    delete [] matriks_map;
}

void Driver::PrintMap() {
    //tiap cage beda warna
    for (int i = 0;i<20;i++) {
        for (int j = 0;j<20;j++) {
            char x = matriks_map[i][j][0];
            cout << FBLU(x) << " ";
        }
        cout << endl;
    }
}

void Driver::PrintLegend() {
    cout << "Legenda" << endl;
    cout << "> ";
}
