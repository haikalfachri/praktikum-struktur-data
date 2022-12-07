#include <string>
#include "header.h"
#include <iostream>
using namespace std;

#include <stdio.h>


int main(){

    int N, kode;
    int i;
    cout << "Jumlah data: ";
    cin >> N;
    cout << endl;

    mhs data[N];

    for (i=0; i<N; i++){
        cout << "Data ke " << i+1 << endl;
        cout << "Nama: ";
        fflush(stdin);
        cin >> data[i].nama;
        //
        //scanf("%[^\n]s", &data[i].nama);
        cout << "NIM: ";
        fflush(stdin);
        cin >> data[i].NIM;
        //
        //scanf("%[^\n]s", &data[i].NIM);
        prodi(i, data);
        cout << "Ipk: ";
        cin >> data[i].ipk;
        cout << "Semester: ";
        cin >> data[i].semester;
        predikat(i, data);
        cout << "Kode unik: ";
        cin >> data[i].kode;
        kodeUnik(i, data);
        cout << endl;

    }
    cout << "_____INPUT DATA SELESAI_____" << endl;
    cout << endl;
    ipkTerbesar(N, data);
    ipkRata(N, data);
    jumMhs(N, data);
    return 0;
}
