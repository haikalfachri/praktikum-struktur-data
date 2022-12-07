#include "mylist.h"

void createList(List &L){
    first(L) = NULL;
}

infotype newMahasiswa(string nama, string nim, float ipk){
    mahasiswa mhs;

    mhs.nama = nama;
    mhs.nim = nim;
    mhs.ipk = ipk;

    return mhs;
}

adr newElement(infotype dataBaru){
    adr p = new elmList;

    info(p) = dataBaru;
    next(p) = NULL;
    return p;
}

void insertFirst(List &L, adr p){
    if (first(L) == NULL){
        first(L) = p;
    } else{
        next(p) = first(L);
        first(L) = p;
    }
}

void deleteFirst(List &L, adr p){
    p = first(L);
    if (next(first(L)) == NULL){
        first(L) = NULL;
    }else{
        first(L) = next(first(L));
    }
    next(p) = NULL;
}

void printList(List L){
    adr p;
    int i;

    if (first(L) == NULL){
        cout << "List Kosong!" << endl;
        cout << endl;
    }else{
        i = 1;
        p = first(L);
        while (p != NULL){
            cout << "[" << i  << "]" << endl;
            cout << "Nama   : " << info(p).nama << endl;
            cout << "NIM    : " << info(p).nim << endl;
            cout << "IPK    : " << info(p).ipk << endl;
            p = next(p);
            i++;
        }
        cout << "List selesai ditampilkan!" << endl;
        cout << endl;
    }
}

void insertLast(List &L, adr p){
    adr last;
    if (first(L) == NULL){
        first(L) = p;
    } else if (next(first(L)) == NULL){
        next(first(L)) = p;
    } else{
        last = first(L);
        while (next(last)!= NULL){
            last = next(last);
        }
         next(last) = p;
    }
}

void deleteLast(List &L, adr p){
    adr q;

    if (first(L) == NULL){
        p = NULL;
        cout << "List Kosong";
    } else if (next(first(L)) == NULL){
        p = first(L);
        first(L) = NULL;
    } else{
        q = first(L);
        p = first(L);
        while (next(p) != NULL){
            q = p;
            p = next(p);
        }
        next(q) = NULL;
    }
}
