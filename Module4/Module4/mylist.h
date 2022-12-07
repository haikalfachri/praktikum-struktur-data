#ifndef MYLIST_H_INCLUDED
#define MYLIST_H_INCLUDED

#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)

struct mahasiswa{
    string nama;
    string nim;
    float ipk;
};

typedef mahasiswa infotype;
typedef struct elmList *adr;

struct elmList {
    infotype info;
    adr next;
};

struct List{
    adr first;
};

void createList(List &L);
infotype newMahasiswa(string nama, string nim, float ipk);
adr newElement(infotype dataBaru);
void insertFirst(List &L, adr p);
void deleteFirst(List &L, adr p);
void printList(List L);
void insertLast(List &L, adr p);
void deleteLast(List &L, adr p);


#endif // MYLIST_H_INCLUDED
