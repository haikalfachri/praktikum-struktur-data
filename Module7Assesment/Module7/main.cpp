#include "SLL.h"

int main(){
    listSingle L;
    adrSingle p;
    infotype new_data, x;
    int i;
    bool ketemu;

    create_list_1301202398(L); //a

    for (i=1; i<=10; i++){ //b
        cout << "Masukkan data ke-" << i << ": ";
        cin >> new_data;
        p = alokasi_1301202398(new_data);
        insert_first_1301202398(L, p);
    }
    cout << endl;
    show_1301202398(L); //c
    cout << endl;

    cout << "Masukkan data yang ingin dicari: ";
    cin >> x;
    ketemu = findString_1301202398(L, x); //d
    if (ketemu){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }
    cout << endl;

    //NIM 1301202398 -> digit akhir = 8
    for (i=1; i<=8; i++){
        delete_last_1301202398(L); //e
    }

    show_1301202398(L); //f
}
