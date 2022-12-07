#include "catalog.h"

#include <iostream>
using namespace std;

int main(){
    //Inisiasi Varabel
    catalog storage;
    storage.max = 8;
    storage.num = -1;
    //Menambahkan data & Output
    add_data_1301202398(storage, 6);
    view_data_1301202398(storage);
    add_data_1301202398(storage, 4);
    view_data_1301202398(storage);
    add_data_1301202398(storage, 8);
    view_data_1301202398(storage);
    add_data_1301202398(storage, 2);
    view_data_1301202398(storage);
    cout<<endl;
    //mencari index
    int i;
    i = search_data_1301202398(storage, 8);
    cout<<i<<endl;
    i = search_data_1301202398(storage, 5);
    cout<<i<<endl;
    //Reversed view
    cout << endl;
    reversed_view_1301202398(storage);
    add_data_1301202398(storage, 5);
    reversed_view_1301202398(storage);

    cout << endl;

    //Delete data index terakhir
    view_data_1301202398(storage);
    delete_data_1301202398(storage);
    view_data_1301202398(storage);

    return 0;
}
