#include "SLL.h"

void create_list_1301202398(listSingle &L){
    first(L) = NULL;
}

adrSingle alokasi_1301202398(infotype new_data){
    adrSingle p = new elmtSingle;
    info(p) = new_data;
    next(p) = NULL;
    return p;
}

void show_1301202398(listSingle L){
    adrSingle p;
    int i;

    i = 1;
    p = first(L);
    while (p != NULL){
        cout << "[" << i << "]" << info(p) << " ";
        p = next(p);
        i++;
    }
    cout << endl;
}

void insert_first_1301202398(listSingle &L, adrSingle p){
     if (first(L) == NULL){
        first(L) = p;
    } else{
        next(p) = first(L);
        first(L) = p;
    }
}

void delete_last_1301202398(listSingle &L){
    adrSingle p, q;

    if (first(L) == NULL){
        p = NULL;
        cout << "List Kosong" << endl;
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

//1301202398 -> 8 mod 3 = 2 -> string
bool findString_1301202398(listSingle L, infotype x){
    bool ketemu;
    adrSingle p;

    ketemu = false;
    p = first(L);
    while (p != NULL && ketemu == false){
        if (info(p) == x){
            ketemu = true;
        }
        p = next(p);
    }
    return ketemu;
}
