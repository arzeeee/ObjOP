#include <iostream>
#include <string>
#include "driver.h"
#include <fstream>
#include <cstdlib>
#include "zoo.h"

#include "cell.h"
#include "cage.h"
#include "cages.h"
#include "animal.h"
#include "render.h"
#include "player.h"

/* FOREGROUND */
#define RST  "\033[0m"
#define KROAD "\033[48;5;3m\033[38;5;0m"
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
#define FROAD(x) KROAD << x << RST
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
    int mcid = 0;
    
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
    kandang = new Cage*[zoo_height];
    for (i = 0;i<zoo_height;i++) {
        kandang[i] = new Cage[zoo_width];
    }

    //inisiasi cage dari matriks_map
    for (i = 0;i<zoo_height;i++) {
        for (j = 0; j < zoo_width; j++){
            cid = ((matriks_map[i][j][1] - '0') * 10) + (matriks_map[i][j][2] - '0');    
            if (mcid<cid) {
                mcid = cid;
            }
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
    //Alokasi array of cages, ukuran indeks 1 ~ mcid
    kandang_kandang = new Cages[mcid+1];

    for (int a = 1;a<=mcid;a++) {
        int amount = 0;
        for (i = 0;i<zoo_height;i++) {
            for (j = 0; j < zoo_width; j++){
                if (kandang[i][j].GetId() == a) {
                    amount++;
                }
            }
        }
        Cages dummy(amount);
        i = 0;
        j = 0;
        int found = 0;
        while ((i<zoo_height) && (found == 0)) {
            while ((j<zoo_width) && (found == 0)) {
                if (kandang[i][j].GetId() == a) {
                    dummy.SetIdx(kandang[i][j]);
                    found = 1;
                } else {
                    j++;
                }
            }
            i++;
        }
        kandang_kandang[a] = dummy;
    }

    //menutup file eksternal
     infile.close();
}

Driver::~Driver() {
    for (int i = 0;i<zoo_height;i++) {
        delete [] matriks_map[i];
        delete [] kandang[i];
    }
    delete [] matriks_map;
    delete [] kandang;
    delete [] kandang_kandang;
}

void Driver::PrintMap(int user_x, int user_y) {
    //Setiap cage memiliki warna yang berbeda
    //Fungsinya belum diimplementasikan

    //Cara menggunakan warna: Pilih salah satu warna yang sudah terdefinisi
    //lalu dalam parameternya masukan sebuah karakter

   
    for (int i = 0;i<20;i++) {
        for (int j = 0;j<20;j++) {
            char x;
            if ((i != user_x) && (j != user_y)) { 
                x = matriks_map[i][j][0];
            } else {
                x = '!';
            }
            int cid = ((matriks_map[i][j][1] - '0') * 10) + (matriks_map[i][j][2] - '0');
            if ((cid==0) && ((x == '-') || (x == '!'))){
                cout << FROAD(x) << FROAD(' ');
            } else if (cid==0){
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
    cout << endl;
}

void Driver::PrintMap(int x1, int y1, int x2,int y2) {
    //Setiap cage memiliki warna yang berbeda
    //Fungsinya belum diimplementasikan

    //Cara menggunakan warna: Pilih salah satu warna yang sudah terdefinisi
    //lalu dalam parameternya masukan sebuah karakter
    if ((((x1<0||x1>zoo_height)||(x2<0||x2>zoo_height))
        ||((y1<0||y1>zoo_width)||(x2<0||x2>zoo_width)))
        ||((x1>x2)||(y1>y2))) {
        cout << "parameter invalid" << endl;
    } else {
        for (int i = x1;i<x2;i++) {
            for (int j = y1;j<y2;j++) {
                char x = matriks_map[i][j][0];
                int cid = ((matriks_map[i][j][1] - '0') * 10) + (matriks_map[i][j][2] - '0');
                if ((cid == 0) && (x == '-')){
                    cout << FROAD(x) << FROAD(' ');
                } else if (cid==0){
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
    cout << endl;
}

void Driver::PrintLegend() {
    cout << "\033[48;5;3m\033[38;5;0m                    ~::Legenda::~                    \033[0m" << endl;
    cout << "\033[48;5;3m\033[38;5;0m#: Land Habitat     $: Water Habitat                 \033[0m" << endl;
    cout << "\033[48;5;3m\033[38;5;0m@: Air Habitat      -: Road (Can be Exit or Entrance)\033[0m" << endl;
    cout << "\033[48;5;3m\033[38;5;0mP: Park             &: Restaurant                    \033[0m" << endl;
    cout << "\033[48;5;3m\033[38;5;0mK: Kucing           H: Harimau                       \033[0m" << endl;
    cout << "\033[48;5;3m\033[38;5;0mS: Singa            J: Jerapah                       \033[0m" << endl;
    cout << "\033[48;5;3m\033[38;5;0mO: Okapi            D: Panda                         \033[0m" << endl;
    cout << "\033[48;5;3m\033[38;5;0mB: Beruang          Z: Zebra                         \033[0m" << endl;
    cout << "\033[48;5;3m\033[38;5;0mU: Kuda             E: Ebosia                        \033[0m" << endl;
    cout << "\033[48;5;3m\033[38;5;0mI: Lionfish         L: Lumba-Lumba                   \033[0m" << endl;
    cout << "\033[48;5;3m\033[38;5;0mT: Hiu Putih        G: Gurita Biru                   \033[0m" << endl;
    cout << "\033[48;5;3m\033[38;5;0mR: Gurita Merah     M: Merpati                       \033[0m" << endl;
    cout << "\033[48;5;3m\033[38;5;0mW: Rajawali         N: Elang                         \033[0m" << endl;
    cout << "\033[48;5;3m\033[38;5;0mA: Kelelawar        C: Cendrawasih                   \033[0m" << endl;
    cout << "\033[48;5;3m\033[38;5;0mY: Penyu                                             \033[0m" << endl;
}

void Driver::PrintInterface() {
    cout << "Selamat Datang di Kebun Binatang" << endl;
    cout << "Berikut adalah kegiatan yang dapat kamu lakukan di Kebun Binatang" << endl;
    cout << "1. Menampilkan Peta Kebun Binatang" << endl;
    cout << "2. Melakukan Tour Kebun Binatang" << endl;
    cout << "3. Keluar dari Kebun Binatang" << endl;
    cout << "Masukan nomor pilihan kegiatan yang ingin kamu lakukan : ";
}

void Driver::InputPilihan() {
    int pilihan;
    cin >> pilihan;
    while ((pilihan != 3) && (pilihan >= 1) && (pilihan <= 3)) {
        if (pilihan == 1) {
            int x1,y1,x2,y2;
            cout << "Masukkan koordinat titik kiri atas : ";
            cin >> x1 >> y1;
            cout << "Masukkan koordinat titik kanan bawah : ";
            cin >> x2 >> y2;
            PrintMap(x1,y1,x2,y2);
            PrintLegend();
        } else if (pilihan == 2) {
            int i = 0;
            int j = 0;
            int found = 0;

            while ((i<zoo_height) && (found == 0)) {
                while ((j<zoo_width) && (found == 0)) {
                    if (mapzoo.GetElementZoo(i,j) == -4) {
                        found = 1;
                    } else {
                        j++;
                    }
                }
                i++;
            }
            user.setX(i);
            user.setY(j);
            PrintMap(i,j);
            PrintLegend();
        }
        PrintInterface();
        cin >> pilihan;
    } 
    
}

void Driver::PrintInterfaceTour() {
    cout << "Hal yang dapat Anda lakukan saat Tour adalah " << endl;
    cout << "1. Berinteraksi dengan binatang" << endl;
    cout << "2. Mengetahui banyaknya makanan yang dikonsumsi binatang per hari" << endl;
    cout << "3. Melanjutkan Tour" << endl;
    cout << "4. Mengakhiri Tour" << endl;
}

void Driver::InputPilihanTour() {
    int pilihan_tour;
    cin >> pilihan_tour;
    while ((pilihan_tour != 4) && (pilihan_tour >= 1) && (pilihan_tour <= 4)) {
        if (pilihan_tour == 1) {

        } else if (pilihan_tour == 2) {

        } else if (pilihan_tour == 3) {

        }
        PrintInterfaceTour();
        cin >> pilihan_tour;
    }
}