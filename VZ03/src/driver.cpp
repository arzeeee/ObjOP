#include <iostream>
#include "driver.h"
#include <string>

using namespace std;

void Driver::InputMap() {
    ifstream file("mapZoo.txt");
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
        string **zoofile_eks;
        Cell **mapzoo;
        int zoo_width;
        int zoo_height;

};