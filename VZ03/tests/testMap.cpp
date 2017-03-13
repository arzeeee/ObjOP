#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    char **id;
    id = new char*[20];
    for (int i = 0;i<20;i++) {
        id[i] = new char[20];
    }
    int *temp;
    temp = new int[400];

    ifstream file("mapZoo.txt");
    string str; 
    string::size_type sz;
    while (file >> str){
        for (int i=0; i<str.length(); i+=3){
            id[i] = str[i];
            temp[i] = stoi(str[i++]+str[i+2],&sz);
        }
    }

    for (int i = 0; i<20; i++) {
        for (int j = 0; j<20; j++) {
            cout << id[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i<400; i++){
        cout << temp[i] << endl;
    }
    return 0;
}