#include <iostream>
#include <string>
#include "../include/driver.h"
#include <fstream>
#include <cstdlib>
#include "zoo.h"

#include "cell.h"
#include "cage.h"
#include "cages.h"
#include "animal.h"
#include "render.h"

/* FOREGROUND */
#define RST  "\033[0m"
#define KI0 "\033[38;5;0m"
#define KI1 "\033[38;5;1m"
#define KI2 "\033[38;5;2m"
#define KI3 "\033[38;5;3m"
#define KI4 "\033[38;5;4m"
#define KI5 "\033[38;5;5m"
#define KI6 "\033[38;5;6m"
#define KI7 "\033[38;5;7m"
#define KI8 "\033[38;5;8m"
#define KI9 "\033[38;5;9m"
#define KI10 "\033[38;5;10m"
#define KI11 "\033[38;5;11m"
#define KI12 "\033[38;5;12m"
#define KI13 "\033[38;5;13m"
#define KI14 "\033[38;5;14m"
#define KI15 "\033[38;5;15m"
#define KI16 "\033[38;5;16m"
#define KI17 "\033[38;5;17m"
#define KI18 "\033[38;5;18m"
#define KI19 "\033[38;5;19m"
#define KI20 "\033[38;5;20m"
#define KI21 "\033[38;5;21m"
#define KI22 "\033[38;5;22m"
#define KI23 "\033[38;5;23m"
#define KI24 "\033[38;5;24m"



#define teks matriks_map[i][j][0]

#define FI0(x) KI0 << x << RST
#define FI1(x) KI1 << x << RST
#define FI2(x) KI2 << x << RST
#define FI3(x) KI3 << x << RST
#define FI4(x) KI4 << x << RST
#define FI5(x) KI5 << x << RST
#define FI6(x) KI6 << x << RST
#define FI7(x) KI7 << x << RST
#define FI8(x) KI8 << x << RST
#define FI9(x) KI9 << x << RST
#define FI10(x) KI10 << x << RST
#define FI11(x) KI11 << x << RST
#define FI12(x) KI12 << x << RST
#define FI13(x) KI13 << x << RST
#define FI14(x) KI14 << x << RST
#define FI15(x) KI15 << x << RST
#define FI16(x) KI16 << x << RST
#define FI17(x) KI17 << x << RST
#define FI18(x) KI18 << x << RST
#define FI19(x) KI19 << x << RST
#define FI20(x) KI20 << x << RST
#define FI21(x) KI21 << x << RST
#define FI22(x) KI22 << x << RST
#define FI23(x) KI23 << x << RST
#define FI24(x) KI24 << x << RST

#define BOLD(x) "\x1B[1m" x RST
#define UNDL(x) "\x1B[4m" x RST


using namespace std;

Driver::Driver() : zoo_width(20), zoo_height(20) {
    //Implementasi matriks_map
    int i,j;
    int aid;
    int cid;

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

    //alokasi cage
    Cage** kandang;
    kandang = new Cage*[zoo_height];
    for (i = 0;i<zoo_height;i++) {
        kandang[i] = new Cage[zoo_width];
    }

    //inisiasi cage dari matriks_map
    for (i = 0;i<zoo_height;i++) {
        for (j = 0; j < zoo_width; j++){
            cid = ((matriks_map[i][j][1] - '0') * 10) + (matriks_map[i][j][2] - '0');    
            if (matriks_map[i][j][0] == 'K') {
                aid = 1;
            } else if (matriks_map[i][j][0] == 'H') {
                aid = 2;
            } else if (matriks_map[i][j][0] == 'S') {
                aid = 3;
            } else if (matriks_map[i][j][0] == 'J') {
                aid = 4;
            } else if (matriks_map[i][j][0] == 'O') {
                aid = 5;
            } else if (matriks_map[i][j][0] == 'D') {
                aid = 6;
            } else if (matriks_map[i][j][0] == 'B') {
                aid = 7;
            } else if (matriks_map[i][j][0] == 'Z') {
                aid = 8;
            } else if (matriks_map[i][j][0] == 'U') {
                aid = 9;
            } else if (matriks_map[i][j][0] == 'E') {
                aid = 10;
            } else if (matriks_map[i][j][0] == 'I') {
                aid = 11;
            } else if (matriks_map[i][j][0] == 'L') {
                aid = 12;
            } else if (matriks_map[i][j][0] == 'T') {
                aid = 13;
            } else if (matriks_map[i][j][0] == 'G') {
                aid = 14;
            } else if (matriks_map[i][j][0] == 'R') {
                aid = 15;
            } else if (matriks_map[i][j][0] == 'M') {
                aid = 16;
            } else if (matriks_map[i][j][0] == 'W') {
                aid = 17;
            } else if (matriks_map[i][j][0] == 'N') {
                aid = 18;
            } else if (matriks_map[i][j][0] == 'A') {
                aid = 19;
            } else if (matriks_map[i][j][0] == 'C') {
                aid = 20;
            } else if (matriks_map[i][j][0] == 'Y') {
                aid = 21;
            }
            kandang[i][j].setCage(i,j,cid,aid);
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
    //Setiap cage memiliki warna yang berbeda
    //Fungsinya belum diimplementasikan

    //Cara menggunakan warna: Pilih salah satu warna yang sudah terdefinisi
    //lalu dalam parameternya masukan sebuah karakter

   
    for (int i = 0;i<20;i++) {
        for (int j = 0;j<20;j++) {
            char x = matriks_map[i][j][0];
            int cid = ((matriks_map[i][j][1] - '0') * 10) + (matriks_map[i][j][2] - '0');
            if (cid==0){
                cout << FI0(x) << " ";
            } else if (cid==1){
                cout << FI1(x) << " ";
            } else if (cid==2){
                cout << FI2(x) << " ";
            } else if (cid==3){
                cout << FI3(x) << " ";
            } else if (cid==4){
                cout << FI4(x) << " ";
            } else if (cid==5){
                cout << FI5(x) << " ";
            } else if (cid==6){
                cout << FI6(x) << " ";
            } else if (cid==7){
                cout << FI7(x) << " ";
            } else if (cid==8){
                cout << FI8(x) << " ";
            } else if (cid==9){
                cout << FI9(x) << " ";
            } else if (cid==10){
                cout << FI10(x) << " ";
            } else if (cid==11){
                cout << FI11(x) << " ";
            } else if (cid==12){
                cout << FI12(x) << " ";
            } else if (cid==13){
                cout << FI13(x) << " ";
            } else if (cid==14){
                cout << FI14(x) << " ";
            } else if (cid==15){
                cout << FI15(x) << " ";
            } else if (cid==16){
                cout << FI16(x) << " ";
            } else if (cid==17){
                cout << FI17(x) << " ";
            } else if (cid==18){
                cout << FI18(x) << " ";
            } else if (cid==19){
                cout << FI19(x) << " ";
            } else if (cid==20){
                cout << FI20(x) << " ";
            } else if (cid==21){
                cout << FI21(x) << " ";
            } else if (cid==22){
                cout << FI22(x) << " ";
            } else if (cid==23){
                cout << FI23(x) << " ";
            } else if (cid==24){
                cout << FI24(x) << " ";
            } 
        }
        cout << endl;
    }
}

void Driver::PrintLegend() {
    cout << "Legenda" << endl;
    cout << "> ";
}
