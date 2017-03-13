#include <fstream>
#include <string>
using namespace std;

int main(){
    id = new int*[20];
    for (int i = 0;i<20;i++) {
        id[i] = new int[20];
    }

    ifstream file("mapZoo.txt");
    string str;
    while (getline(file,str)){
        for (int i=0; i<str.length(); i+=3){
            id[i]=str[i];
        }
    }

    for (int i = 0; i<20; i++) {
        for (int j = 0; j<20; j++) {
            cout << id[i][j];
        }
        cout << endl;
    }
}