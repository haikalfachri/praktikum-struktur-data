#include "queue.h"

int main(){
    queue q;
    adr p;
    infotype data_transaksi;

    cout << "======Mandiri=======" << endl;
    createQueue_1301202398(q);
    masukkan_transaksi_1301202398(q, "Andi transfer doni 50.000");
    masukkan_transaksi_1301202398(q, "Doni Trasnfer Saras 10.000");
    masukkan_transaksi_1301202398(q, "Tono Trasnfer Bili 20.000");
    cout << "Isi dari queue: " << endl;
    printQueue_1301202398(q);
    cout << endl;

    data_transaksi = proses_transaksi_1301202398(q);
    cout << "data_transaksi: " << data_transaksi << endl;
    cout << "Isi dari queue setelah proses_transaksi: " << endl;
    printQueue_1301202398(q);
    cout << endl;

    data_transaksi = proses_transaksi_1301202398(q);
    cout << "data_transaksi: " << data_transaksi << endl;
    cout << "Isi dari queue setelah proses_transaksi: " << endl;
    printQueue_1301202398(q);
    cout << endl;

    data_transaksi = proses_transaksi_1301202398(q);
    cout << "data_transaksi: " << data_transaksi << endl;
    cout << "Isi dari queue setelah proses_transaksi: " << endl;
    printQueue_1301202398(q);
    cout << endl;
}
