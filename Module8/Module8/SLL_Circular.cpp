#include "SLL_Circular.h"

void createList_1301202398(List &L){
    first(L) = NULL;
}

adr createElemen_1301202398(infotype dataBaru){
    adr p = new elmList;

    info(p) = dataBaru;
    next(p) = NULL;
    return p;
}

void insertFirst_1301202398(List &L, adr p){
    adr q;

    if (first(L) == NULL){
        first(L) = p;
        next(p) = first(L);
    }else{
        next(p) = first(L);
        q = first(L);
        while (next(q) != first(L)){
            q = next(q);
        }
        next(q) = p;
        first(L) = p;
    }
}

void insertLast_1301202398(List &L, adr p){
    adr q;
    if (first(L) == NULL){
        first(L) = p;
        next(p) = first(L);
    }else{
        next(p) = first(L);
        q = first(L);
        while (next(q) != first(L)){
           q = next(q);
        }
        next(q) = p;

    }
}
void insertAfter_1301202398(List &L, adr prec, adr p){
    next(p) = next(prec);
    next(prec) = p;
}

void insertDescending_1301202398(List &L, infotype dataBaru){
    adr p, q, prec;

    p = createElemen_1301202398(dataBaru);
    q = first(L);
    if (first(L) == NULL){
        insertFirst_1301202398(L, p);
    }else{
        while (next(q) != first(L) && info(p).prioritas > info(q).prioritas){
            prec = q;
            q = next(q);
        }if (q == first(L)){
            insertFirst_1301202398(L, p);
        }else if (next(q) == first(L)){
            insertLast_1301202398(L, p);
        }else{
            insertAfter_1301202398(L, prec, p);
        }
    }
}

void deleteFirst_1301202398(List &L){
    adr p, q;

    p = first(L);
    if (next(first(L)) == first(L)){
        first(L) = NULL;
        next(p) = NULL;
    }else{
        first(L) = next(first(L));
        next(p) = NULL;
        q = first(L);
        while (next(q) != p){
            q = next(q);
        }
        next(q) = first(L);
    }
}

void deleteLast_1301202398(List &L){
    adr p, q;
    q = first(L);
    p = first(L);
    while (next(p) != first(L)){
        q = p;
        p = next(p);
    }
    p = next(q);
    next(q) = first(L);
    next(p) = NULL;
}

void deleteAfter_1301202398(List &L, adr prec){
    adr p;

    p = next(prec);
    next(prec) = next(p);
    next(p) = NULL;
}

void deleteElm_1301202398(List &L, adr p){
    adr q, prec;
    bool ketemu;

    q = first(L);
    ketemu = false;
    while (next(q) != first(L) && ketemu == false){
        if (info(q).nama == info(p).nama){
            ketemu = true;
        }else{
            prec = q;
            q = next(q);
        }
    }
    if (ketemu == true){
        if (q == first(L)){
            deleteFirst_1301202398(L);
        }else if (next(q) == first(L)){
            deleteLast_1301202398(L);
        }else{
            deleteAfter_1301202398(L, prec);
        }
    }else{
        cout << "Data tidak ditemukan" << endl;
    }
}

void printList_1301202398(List L){
    adr p;
    int i;

    i = 1;
    if(first(L) == NULL){
        cout << "List Kosong!" << endl;
    }else{
        p = first(L);
        while (next(p) != first(L)){
            cout << "[" << i << "] ";
            cout << info(p).nama;
            cout << info(p).prioritas;
            cout << info(p).sisa_durasi;
            cout << endl;
            i++;
            p = next(p);
        }
        cout << "[" << i << "] ";
        cout << info(p).nama;
        cout << info(p).prioritas;
        cout << info(p).sisa_durasi;
        cout << endl;
    }
}

int panjangList_1301202398(List L){
    int jum;
    adr p;

    jum = 0;
    p = first(L);
    while (next(p) != first(L)){
        jum++;
        p = next(p);
    }
    jum++;
    return jum;
}

void insertAplikasi_1301202398(List &L, infotype dataBaru){
    adr p;
    int panjang;

    panjang = panjangList_1301202398(L);
    if (panjang == 0){
        insertDescending_1301202398(L, dataBaru);
    }else if (panjang <= 5){
        insertDescending_1301202398(L, dataBaru);
    }else{
         p = first(L);
         while (next(p) != first(L)){
            p = next(p);
         }
         if (dataBaru.prioritas > info(p).prioritas){
            deleteElm_1301202398(L, p);
            insertAplikasi_1301202398(L, dataBaru);
        }
    }
}

int eksekusi_1301202398(adr p, int durasi){
    int sisa;

    sisa = info(p).sisa_durasi - durasi;
    return sisa;
}

void eksekusiMulti_1301202398(List &L, adr &current, int N, int duration){
    int i;

    i = 1;
    while (i<=N){
        eksekusi_1301202398(current, duration);
        if (info(current).sisa_durasi <= 0){
            deleteElm_1301202398(L, current);
        }
        current = next(current);
        i++;
    }
}

