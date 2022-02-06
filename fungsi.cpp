#include "header.h"
#include <iostream>
#include <string.h>

using namespace std;
// memasukkan data hasil parameter kedalam struktur baru yang dibuat
parking tambahPARKING(string jeniskendaraan,string nomorplat){
    parking p;

    p.jeniskendaraan = jeniskendaraan;
    p.nomorplat = nomorplat;

    return p;
}
// untuk menampilkan data dari sturktur 
void outputPARKING(parking p) {
    cout << "jenis kendaraan yang terparkir : "<<p.jeniskendaraan << endl;
    cout << "nomor plat kendaraan yang terparkir : "<<p.nomorplat << endl;
}

    

 