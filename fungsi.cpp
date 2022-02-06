//include digunakan untuk mengimport header.h dan fungsi.cpp
#include <iostream>
#include "header.h"
#include "fungsi.cpp"

using namespace std;

int main()
{   //ini input variable jenis dan plat 
    string jenis;
    string plat;
    cout << "input jenis kendaraan anda MOTOR/MOBIL : ";
    cin >> jenis;
    cout << "input plat nomor anda : ";
    cin >> plat;

    //hasil inputan dikirim sebagai parameter di fungsi tambahparking
    parking p = tambahPARKING(jenis,plat);
    //untuk memanggil fungsi outputparking 
    outputPARKING(p);

    return 0;
}
