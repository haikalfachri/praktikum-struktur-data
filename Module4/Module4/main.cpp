#include "mylist.h"

int main()
{
    List L;
    adr P, temp;
    infotype Mhs;

    createList(L);
    printList(L);

    Mhs = newMahasiswa("Alice", "1301190202", 3.5);
    P = newElement(Mhs);
    insertLast(L,P);

    Mhs = newMahasiswa("Bob", "1301190203", 4);
    P = newElement(Mhs);
    insertLast(L,P);

    printList(L);

    Mhs = newMahasiswa("Chihaya", "1301190204", 3.6);
    P = newElement(Mhs);
    insertLast(L,P);

    Mhs = newMahasiswa("Delta", "1301190205", 2.7);
    P = newElement(Mhs);
    insertLast(L,P);

    Mhs = newMahasiswa("Euniche", "1301190201", 3.9);
    P = newElement(Mhs);
    insertLast(L,P);

    printList(L);

    deleteFirst(L,temp);
    deleteLast(L,temp);

    printList(L);

    cout << "Soal Mandiri" << endl;
    //soal mandiri
    //menerima inputan pertama
    cout << "Nama   : ";
    cin >> Mhs.nama;
    cout << "NIM    : ";
    cin >> Mhs.nim;
    cout << "IPK    : ";
    cin >> Mhs.ipk;
    cout << endl;
    //memasukkan kedalam SSL, NIM : 1301202398(Genap)
    P = newElement(Mhs);
    insertFirst(L,P);
    //pengkondisian input
    if (stoi(Mhs.nim) % 3 == 0){   //stoi untuk convert str to int
        while (Mhs.nama != "-"){
            cout << "Nama   : ";
            cin >> Mhs.nama;
            cout << "NIM    : ";
            cin >> Mhs.nim;
            cout << "IPK    : ";
            cin >> Mhs.ipk;
            cout << endl;
            P = newElement(Mhs);
            insertFirst(L,P);
        }
    }else if (stoi(Mhs.nim) % 3 == 1){
        while (Mhs.nim != "-"){
            cout << "Nama   : ";
            cin >> Mhs.nama;
            cout << "NIM    : ";
            cin >> Mhs.nim;
            cout << "IPK    : ";
            cin >> Mhs.ipk;
            cout << endl;
            P = newElement(Mhs);
            insertFirst(L,P);
        }
    }else if (stoi(Mhs.nim) % 3 == 2){
        while (Mhs.nama != "-" && Mhs.nim == "-"){
            cout << "Nama   : ";
            cin >> Mhs.nama;
            cout << "NIM    : ";
            cin >> Mhs.nim;
            cout << "IPK    : ";
            cin >> Mhs.ipk;
            cout << endl;
            P = newElement(Mhs);
            insertFirst(L,P);
    }
    printList(L);

    while (first(L)!= NULL){
        deleteFirst(L, P);
        cout << "Nama terhapus  : " << info(P).nama << endl;
        cout << "Nim Terhapus   : " << info(P).nim << endl;
        cout << "Ipk Terhapus   : " << info(P).ipk << endl;
        cout << endl;
    }
    printList(L);
    return 0;
    }
}
