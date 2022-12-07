#include "header.h"

int main()
{
    Himpunan set1, set2, set3;
    cout << "Anggota Himpunan 1: ";
    inputAnggotaHimpunan(set1);
    cout << "Anggota Himpunan 2: ";
    inputAnggotaHimpunan(set2);

    printHimpunan(set1);
    printHimpunan(set2);

    set3 = irisan(set1, set2);
    printHimpunan(set3);
    return 0;
}
