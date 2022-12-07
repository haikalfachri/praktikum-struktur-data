#include "SLL_Circular.h"

int main(){
    List L;
    adr p;
    infotype dataBaru;

    const max_application = 5;

    createList_1301202398(L)
    for (int i=1; i<=5; i++){
        cout << "Masukkan data ke-" << i << ":"  << endl;
        cout << "Nama: ";
        cin >> dataBaru.nama;
        cout << "Prioritas: ";
        cin >> dataBaru.prioritas;
        cout << "Sisa Durasi: ";
        cin >> dataBaru.sisa_durasi;
        cout << endl;
        insertAplikasi_1301202398(L, dataBaru);
    }

    printList_1301202398(L);

    p = first(L);
    eksekusiMulti_1301202398(p, 3, 10);

    printList_1301202398(L);

    eksekusiMulti_1301202398(p, 3, 10);

    printList_1301202398(L);
}
