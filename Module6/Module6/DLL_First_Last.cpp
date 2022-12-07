#include "DLL_First_Last.h"

void createList_1301202398(List &L){
    first(L) = NULL;
    last(L) = NULL;
}

adr createElemen_1301202398(infotype dataBaru){
    adr p = new elmList;

    info(p) = dataBaru;
    next(p) = NULL;
    prev(p) = NULL;

    return p;
}

void insertLast_1301202398(List &L, adr p){
    if (first(L) == NULL){
        first(L) = p;
        last(L) = p;
    }else{
        prev(p) = last(L);
        next(last(L)) = p;
        last(L) = p;
    }
}

void insertAfter_1301202398(List &L, adr prec, adr p){
    next(p) = next(prec);
    prev(next(prec)) = p;
    next(prec) = p;
    prev(p) = prec;
}

void deleteFirst_1301202398(List &L){
    adr p = first(L);

    if(next(first(L)) == NULL){
        first(L) = NULL;
        last(L) = NULL;
    }else{
        first(L) = next(first(L));
        prev(first(L)) = NULL;
        next(p) = NULL;
    }
}

void deleteAfter_1301202398(List &L, adr prec){
    adr p;

    p = next(prec);
    next(prec) = next(p);
    prev(next(p)) = prec;
    next(p) = NULL;
    prev(p) = NULL;
}

void printList_1301202398(List L){
    adr p;

    p = first(L);
    if (first(L) == NULL && last(L) == NULL){
        cout << "List Kosong!" << endl;
    }else{
        while (p != NULL){
        cout << info(p) << " ";
        p = next(p);
        }
        cout << endl;
    }

}

void insertFirst_1301202398(List &L, adr p){
    if (first(L)!=NULL && last(L)!=NULL){
        next(p) = first(L);
        prev(first(L)) = p;
        first(L) = p;
    }else{
        first(L) = p;
        last(L) = p;
    }
}

void insertAscending_1301202398(List &L, infotype dataBaru){
    adr p, q, prec;

    p = createElemen_1301202398(dataBaru);
    q = first(L);
    if (first(L) == NULL && last(L) == NULL){
        insertFirst_1301202398(L, p);
    }else{
        while (q != NULL && info(p) < info(q)){
            prec = q;
            q = next(q);
        }if (q == first(L)){
            insertFirst_1301202398(L, p);
        }else if (q ==NULL){
            insertLast_1301202398(L, p);
        }else{
            insertAfter_1301202398(L, prec, p);
        }
    }
}

void deleteLast_1301202398(List &L){
    adr p;

    if (first(L) != last(L)){
        p = last(L);
        last(L) = prev(last(L));
        prev(p) = NULL;
        next(last(L)) = NULL;
    }else{
        first(L) = NULL;
        last(L) = NULL;
    }
}

void deleteElm_1301202398(List &L, infotype dataHapus){
    adr p, prec;
    bool ketemu;

    p = first(L);
    ketemu = false;
    while (p != NULL && ketemu == false){
        if (info(p) == dataHapus){
            ketemu = true;
        }else{
            prec = p;
            p = next(p);
        }
    }
    if (ketemu == true){
        if (p == first(L)){
            deleteFirst_1301202398(L);
        }else if (p == last(L)){
            deleteLast_1301202398(L);
        }else{
            deleteAfter_1301202398(L, prec);
        }
    }else{
        cout << "Data tidak ditemukan" << endl;
    }
}

bool findElemen_1301202398(List L, infotype dataDicari){
    bool ketemu;
    adr p;

    ketemu = false;
    p = first(L);
    while (p != NULL && ketemu == false){
        if (info(p) == dataDicari){
            ketemu = true;
        }else{
            p = next(p);
        }
    }
    return ketemu;
}

int frequencyofElm_1301202398(List L, infotype dataDicari){
    int muncul;
    adr p;

    muncul = 0;
    p = first(L);
    while (p != NULL){
        if (info(p) == dataDicari){
            muncul++;
        }
        p = next(p);
    }
    return muncul;
}

void sortAscending(List &L){
    adr current, index;
    int temp;

    current = first(L);
    while (current != NULL){
        index = next(current);
        while (index != NULL){
            if (info(current) > info(index)){
                temp = info(current);
                info(current) = info(index);
                info(index) = temp;
            }
            index = next(index);
        }
        current = next(current);
    }
}

