#include <string>
#ifndef header_H
#define header_H
using namespace std;

struct mhs{
    string nama;
    string NIM;
    float ipk;
    int semester;
    int kode;
};

void prodi(int i, mhs data[]);
void predikat(int i, mhs data[]);
void ipkTerbesar(int N, mhs data[]);
void ipkRata(int N, mhs data[]);
void jumMhs(int N, mhs data[]);
void kodeUnik(int i, mhs data[]);
#endif



