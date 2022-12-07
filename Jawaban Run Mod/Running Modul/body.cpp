#include "header.h"

bool anggotaHimpunan(Himpunan himp, int bil){
    bool found = false;
    int i = 0;
    while(i <= himp.panjang && !found) {
        found = bil == himp.anggota[i];
        i = i + 1;
    }
    return found;
}

void inputAnggotaHimpunan(Himpunan &himp){
    int bilangan;
    himp.panjang = -1;
    cin >> bilangan;
    while (himp.panjang < nMax - 1 && !anggotaHimpunan(himp, bilangan)) {
        himp.panjang = himp.panjang + 1;
        himp.anggota[himp.panjang] = bilangan;
        cin >> bilangan;
    }
}
Himpunan irisan(Himpunan himp1, Himpunan himp2) {
    Himpunan intersect;
    intersect.panjang = -1;
    int i, j;
    i = 0;
    do {
        j = 0;
        do {
            if(himp1.anggota[i] == himp2.anggota[j]) {
                intersect.panjang = intersect.panjang + 1;
                intersect.anggota[intersect.panjang] = himp1.anggota[i];
            }
            j++;
        } while(j <= himp2.panjang);
        i++;
    } while(i <= himp1.panjang);
    return intersect;
}

void printHimpunan(Himpunan himp) {
    int i = 0;
    while (i <= himp.panjang){
        cout << himp.anggota[i] << "-";
        i++;
    }
    cout << endl;
}
