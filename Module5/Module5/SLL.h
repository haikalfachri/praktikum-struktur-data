#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)

struct pegawai{
    string nama;
    string NIP;
    int gaji;
};

typedef pegawai infotype;
typedef struct ElmtPeg *address;

struct ElmtPeg {
    infotype info;
    address next;
};

struct List{
    address first;
};

void create_list(List &L);
void insert_last(List &L, address P);
void delete_first(List &L, address &P);
void delete_last(List &L, address &P);
void delete_after(List &L, address Prec, address &P);

address new_element(infotype peg);
void add_N_data(List &ListPeg);
void show_all_data(List ListPeg);
address search_by_NIP(List ListPeg, string NIP);
void delete_Data(List &ListPeg, string NIP);
int jumlah_pegawai(List ListPeg);
int total_salary(List ListPeg);

#endif // SLL_H_INCLUDED

