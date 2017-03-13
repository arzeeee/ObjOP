#include <iostream>
#include "driver.h"
#include <string>

using namespace std;

Driver::Driver() : zoo_widht(20), zoo_height(20) {
    //Implementasi matriks_map
    int i,j;

    ifstream infile ("mapZoo.txt");
    string str;

    matriks_map = new string *[zoo_height];
    for (i = 0; i < zoo_height; i++) {
        matriks_map[i] = new string [zoo_widht];
    }

    int idx_str;

    for (i = 0; i < zoo_height; i++) {
        getline(infile, str);
        idx_str = 0;
        for (j = 0; j < zoo_widht; j++) {
                matriks_map[i][j] = str.substr(idx_str, 3);
                idx_str += 3;
        }
     }

     //Implementasi translasi matriks_map ke zoo
     Zoo mapzoo(zoo_height, zoo_widht); 
     for (i = 0; i < zoo_height ; i++) {
         for (j = 0; j < zoo_widht; j++) {
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
             } else if (matriks_map[i][j][0] == '-' && (j == nkolom - 1)) {
                 mapzoo.SetElementZoo(i,j,-4);
             } else if (matriks_map[i][j][0] == '-' && (i == 0)) {
                 mapzoo.SetElementZoo(i,j,-5);
             }
         }
     }

     //menutup file eksternal
     infile.close();
}


void Driver::PrintMap() {
    
}

void Driver::PrintLegend() {
    cout << "Legenda" << endl;
    cout << "> ";
}

Driver

class Driver {
    public :
        //method baca file eksternal
        void InputMap();

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