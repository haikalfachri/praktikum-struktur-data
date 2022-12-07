#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>

using namespace std;

const int nMax = 10;
struct Himpunan {
    int anggota[nMax];
    int panjang;
};

bool anggotaHimpunan(Himpunan himp, int bil);
void inputAnggotaHimpunan(Himpunan &himp);
Himpunan irisan(Himpunan himp1, Himpunan himp2);
void printHimpunan(Himpunan himp);


#endif // HEADER_H_INCLUDED
