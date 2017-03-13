#include <fstream>
#include <string>
#include <iostream>
#include "../include/zoo.h"
using namespace std;

int main () {
    int i,j;
    int nbaris, nkolom;
    string **matriks_map;

    int idx_str;

    ifstream infile ("mapZoo.txt");
    string str;

    nbaris = 20;
    nkolom = 20;
    matriks_map = new string *[nbaris];
    for (i = 0; i < nbaris; i++) {
        matriks_map[i] = new string [nkolom];
    }

    int k;
    for (i = 0; i < nbaris; i++) {
        getline(infile, str);
        k = 0;
        for (j = 0; j < nkolom; j++) {
                matriks_map[i][j] = str.substr(k, 3);
                k += 3;
                cout << matriks_map[i][j][0] << " ";
        }
        cout << endl;
     }

     Zoo mapZoo(nbaris, nkolom); 
     for (i = 0; i < nbaris ; i++) {
         for (j = 0; j < nkolom; j++) {
             if (matriks_map[i][j][0] == '#' || matriks_map[i][j][0] == 'S' || matriks_map[i][j][0] == 'J' || matriks_map[i][j][0] == 'H' || matriks_map[i][j][0] == 'B' || matriks_map[i][j][0] == 'Z' || matriks_map[i][j][0] == 'O' || matriks_map[i][j][0] == 'U' || matriks_map[i][j][0] == 'D' ||matriks_map[i][j][0] == 'K') {
                 mapZoo.SetElementZoo(i,j,1);
             } else if (matriks_map[i][j][0] == '@' || matriks_map[i][j][0] == 'A' || matriks_map[i][j][0] == 'N' || matriks_map[i][j][0] == 'W' || matriks_map[i][j][0] == 'C' || matriks_map[i][j][0] == 'M') {
                 mapZoo.SetElementZoo(i,j,2);
             } else if (matriks_map[i][j][0] == '$' || matriks_map[i][j][0] == 'T' || matriks_map[i][j][0] == 'R' || matriks_map[i][j][0] == 'Y' || matriks_map[i][j][0] == 'L' || matriks_map[i][j][0] == 'E' || matriks_map[i][j][0] == 'I' || matriks_map[i][j][0] == 'G')  {
                 mapZoo.SetElementZoo(i,j,3);
             } else if (matriks_map[i][j][0] == '-') {
                 mapZoo.SetElementZoo(i,j,-1);
             } else if (matriks_map[i][j][0] == 'P') {
                 mapZoo.SetElementZoo(i,j,-2);
             } else if (matriks_map[i][j][0] == '&') {
                 mapZoo.SetElementZoo(i,j,-3);
             } else if (matriks_map[i][j][0] == '-' && (j == nkolom - 1)) {
                 mapZoo.SetElementZoo(i,j,-4);
             } else if (matriks_map[i][j][0] == '-' && (i == 0)) {
                 mapZoo.SetElementZoo(i,j,-5);
             }
         }
     }

     mapZoo.printZoo(20,20);
            
    return 0;
}