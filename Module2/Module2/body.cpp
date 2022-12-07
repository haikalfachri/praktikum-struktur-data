#include <string>
#include <iostream>
using namespace std;

#include "header.h"

void prodi(int i, mhs data[]){
    char digit;

    digit = data[i].NIM[1];
    if (digit == '1'){
        cout << "Prodi Anda adalah Art of Coffee";
    } else if (digit == '2'){
        cout << "Prodi Anda adalah Creative Content";
    } else{
        cout << "Prodi Anda adalah Mental Health";
    }
    cout << endl;

}

void predikat(int i, mhs data[]){
    float ipk;
    int sem;

    ipk = data[i].ipk;
    sem = data[i].semester;

    if (ipk > 3.5 && sem <= 8){
        cout << "CUMLAUDE";
        cout << endl;
    }
}

void ipkTerbesar(int N, mhs data[]){
    float ipkT, temp;
    string namaT;
    int i;

    ipkT = 0.0;

    for (i=0; i<N; i++){
        temp = data[i].ipk;
        if (temp > ipkT){
            ipkT = temp;
            namaT = data[i].nama;
        }
    }
    cout << "IPK terbesar didapatkan oleh " << namaT << endl;

}

void ipkRata(int N, mhs data[]){
    float jumlah, rata;
    int i;

    rata = 0.0;
    jumlah = 0.0;
    for (i=0; i<N; i++){
        jumlah += data[i].ipk;
    }
    rata = jumlah / N;
    cout << "IPK Rata-rata : " << rata << endl;
}

void jumMhs(int N, mhs data[]){
    int jumAoC, jumCC, jumMH;
    int i;
    char digit;

    jumAoC = 0;
    jumCC = 0;
    jumMH = 0;
    for (i=0; i<N; i++){
        digit = data[i].NIM[1];
        if (digit == '1'){
            jumAoC++;
        } else if (digit == '2'){
            jumCC++;
        } else{
            jumMH++;
        }
    }
    cout << "Program Studi Art of Coffee : " << jumAoC << endl;
    cout << "Program Studi Creative Content : " << jumCC << endl;
    cout << "Program Studi Mental Health : " << jumMH << endl;
}

void kodeUnik(int i, mhs data[]){
    int kode, j;
    bool prima;

    prima = true;
    kode = data[i].kode;
    for (j=2; j<kode; j++){
        if (kode % j == 0){
            prima = false;
        }
    }
    if (prima == true){
        cout << "MAHASISWA BERPRESTASI" << endl;
    }
}
