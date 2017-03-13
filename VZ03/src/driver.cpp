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
     

}

void Driver::PrintMap() {
    
}

void Driver::PrintLegend() {
    cout << "Legenda" << endl;
    cout << "> "
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
        Cell **mapzoo;
        int zoo_width;
        int zoo_height;

};