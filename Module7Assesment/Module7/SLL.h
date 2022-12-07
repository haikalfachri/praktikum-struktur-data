#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

#include <string>
#include <iostream>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)

//1301202398 -> 8 mod 3 = 2 -> string
typedef string infotype;
typedef struct elmtSingle *adrSingle;

struct elmtSingle{
    infotype info;
    adrSingle next;
};

struct listSingle{
    adrSingle first;
};

void create_list_1301202398(listSingle &L);
adrSingle alokasi_1301202398(infotype new_data);
void show_1301202398(listSingle L);
void insert_first_1301202398(listSingle &L, adrSingle p);
void delete_last_1301202398(listSingle &L);
//1301202398 -> 8 mod 3 = 2 -> string
bool findString_1301202398(listSingle L, infotype x);

#endif // SLL_H_INCLUDED
