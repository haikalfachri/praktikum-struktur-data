#ifndef CATALOG_H_INCLUDED
#define CATALOG_H_INCLUDED

#include <iostream>
using namespace std;

const int nMax = 50;

struct catalog{
    int data[nMax];
    int max;
    int num;
};

void add_data_1301202398(catalog &C, int x);
void view_data_1301202398(catalog C);
int search_data_1301202398(catalog C, int x);
void reversed_view_1301202398(catalog C);
void delete_data_1301202398(catalog &C);

#endif // CATALOG_H_INCLUDED

