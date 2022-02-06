#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>
#include <string.h>

using namespace std;
//struct untuk membuat struktur baru
struct parking{
    string jeniskendaraan;
    string nomorplat;
};

//deklarasi fungsi baru
parking tambahPARKING(string jeniskendaraan,string nomorplat);
void outputPARKING(parking p);




#endif 