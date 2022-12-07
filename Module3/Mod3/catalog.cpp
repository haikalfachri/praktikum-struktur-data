#include "catalog.h"
#include <iostream>
using namespace std;

void add_data_1301202398(catalog &C, int x){
    // Muhamad Fachri Haikal
    // 1301202398

    C.num += 1;
    C.data[C.num] = x;
}

void view_data_1301202398(catalog C){
    // Muhamad Fachri Haikal
    // 1301202398

    int i;

    for (i=0; i<=C.num; i++){
       cout << C.data[i] << " ";
    }
    cout << endl;
}

int search_data_1301202398(catalog C, int x){
    // Muhamad Fachri Haikal
    // 1301202398

    int i;

    for (i=0; i<C.num; i++){
        if (C.data[i] == x){
            return i;
            break;
        }
    }
     return -1;
}

void reversed_view_1301202398(catalog C){
    // Muhamad Fachri Haikal
    // 1301202398

    int i;

    i = C.num;

    while (i >= 0){
        cout << C.data[i] << " ";
        i--;
    }
    cout << endl;
}

//void delete_data(catalog &C){

void delete_data_1301202398(catalog &C){
    // Muhamad Fachri Haikal
    //1301202398 //

    C.num -= 1;
}

