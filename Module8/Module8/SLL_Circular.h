#ifndef SLL_CIRCULAR_H_INCLUDED
#define SLL_CIRCULAR_H_INCLUDED

#include <string>
#include <iostream>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)

struct data{
    string nama;
    int prioritas;
    int sisa_durasi;
};

typedef data infotype;
typedef struct elmList *adr;

struct elmList{
    infotype info;
    adr next;
};

struct List{
    adr first;
};

void createList_1301202398(List &L);
adr createElemen_1301202398(infotype dataBaru);
void insertFirst_1301202398(List &L, adr p);
void insertLast_1301202398(List &L, adr p);
void insertAfter_1301202398(List &L, adr p);
void insertDescending_1301202398(List &L, infotype dataBaru);
void deleteFirst_1301202398(List &L);
void deleteLast_1301202398(List &L);
void deleteAfter_1301202398(List &L, adr prec);
void deleteElm_1301202398(List &L, adr p);
void printList_1301202398(List L);
int panjangList_1301202398(List L);
void insertAplikasi_1301202398(List &L, infotype dataBaru);
int eksekusi_1301202398(adr p, int durasi);
void eksekusiMulti_1301202398(List &L, adr &current, int N, int duration)

#endif // SLL_CIRCULAR_H_INCLUDED
