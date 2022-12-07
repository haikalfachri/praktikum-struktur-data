#include "multi.h"

int main(){
    mll list_sales;
    infotype dataSales;
    int jumlahSales, jumlahData, dataJual;
    string nama_sales;
    adr_sales s;
    adr_jual j;

    create_list_1301202398(list_sales);
    cout << "Masukkan jumlah sales  : ";
    cin >> jumlahSales;
    for (int i=1; i<=jumlahSales; i++){
        cout << "[" << i << "]" << endl;
        cout << "Masukkan nama sales : ";
        cin >> dataSales.nama;
        cout << "Masukkan gol sales  : ";
        cin >> dataSales.gol;
        s = newElm_sales_1301202398(dataSales);
        insertLast_sales_1301202398(list_sales, s);
        cout << "Jumlah data penjualan   : ";
        cin >> jumlahData;
        for (int k=1; k<=jumlahData; k++){
            cout << "     ";
            cout << "Masukkan data penjualan ke-" << k << ": ";
            cin >> dataJual;
            j = newElm_jual_1301202398(dataJual);
            insertNew_penjualan_1301202398(list_sales, s, j);
        }
    }
    cout << endl;
    cout << "MLL sebelum delete_penjualan:" << endl;
    showData_sales_1301202398(list_sales);
    delete_penjualan_1301202398(list_sales);
    cout << endl;
    cout << "MLL setelah delete_penjualan:"<< endl;
    showData_sales_1301202398(list_sales);
    cout << endl;
    cout << "Masukkan nama sales yang ingin dicari: ";
    cin >> nama_sales;
    cout << search_sales_1301202398(list_sales, nama_sales);
}
