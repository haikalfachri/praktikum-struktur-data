#ifndef DLL_FIRST_LAST_H_INCLUDED
#define DLL_FIRST_LAST_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) ((L).first)
#define last(L) ((L).last)

typedef int infotype;
typedef struct elmList *adr;

struct elmList {
    infotype info;
    adr next;
    adr prev;
};

struct List{
    adr first;
    adr last;
};

void createList_1301202398(List &L);
adr createElemen_1301202398(infotype dataBaru);
void insertFirst_1301202398(List &L, adr p);
void insertLast_1301202398(List &L, adr p);
void insertAfter_1301202398(List &L, adr prec, adr p);
void insertAscending_1301202398(List &L, infotype dataBaru);
void deleteFirst_1301202398(List &L);
void deleteLast_1301202398(List &L);
void deleteAfter_1301202398(List &L, adr prec);
void deleteElm_1301202398(List &L, infotype dataHapus);
void printList_1301202398(List L);
bool findElemen_1301202398(List L, infotype dataDicari);
int frequencyofElm_1301202398(List L, infotype dataDicari);
void sortAscending(List &L);


#endif // DLL_FIRST_LAST_H_INCLUDED
