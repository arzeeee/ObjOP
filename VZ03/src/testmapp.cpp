#include <fstream>
#include <string>
#include <iostream>

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
        }
     }
            
    return 0;
}