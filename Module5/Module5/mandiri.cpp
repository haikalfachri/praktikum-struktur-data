#include "SLL.h"

int selectMenu(){
    cout << "===== MENU =====" << endl;
    cout << "1. Tambah data pegawai" << endl;
    cout << "2. Tampilkan data pegawai" << endl;
    cout << "3. Cari data pegawai berdasarkan NIP" << endl;
    cout << "4. Hapus data berdasarkan NIP" << endl;
    cout << "5. Jumlah pegawai saat ini" << endl;
    cout << "6. Rata-rata penghasilan pegawai" << endl;
    cout << "7. Nama pegawai dan gaji tertinggi" << endl;
    cout << "0. Exit" << endl;
    cout << "Pilihan Menu:  ";

    int input;
    cin >> input;

    return input;
}

int main(){
    List L;
    create_list(L);
    int pilihan;
    address p;
    string NIP;

    pilihan = selectMenu();
    while (pilihan != 0){
        switch(pilihan){
            case 1:
                add_N_data(L);
                break;
            case 2:
                show_all_data(L);
                break;
            case 3:
                cout << "Masukkan NIP yang ingin dicari: ";
                cin >> NIP;
                p = search_by_NIP(L, NIP);
                cout << info(p).nama << " ";
                cout << info(p).NIP << " ";
                cout << info(p).gaji << " ";
                cout << endl;
                break;
            case 4:
                cout << "Masukkan NIP yang ingin dihapus: ";
                cin >> NIP;
                delete_Data(L, NIP);
                cout << endl;
                break;
            case 5:
                cout << jumlah_pegawai(L) << endl;
                cout << endl;
                break;
            case 6:
                int salary;
                float rata2;
                salary = total_salary(L);
                rata2 = (salary / jumlah_pegawai(L));
                cout << "Rata-rata gaji: " << rata2 << endl;
                cout << endl;
                break;
            case 7:
                infotype temp;
                int gajiMax;
                string namaMax;
                p = first(L);
                temp = info(p);
                while (next(p) != NULL){
                    if (info(p).gaji > temp.gaji){
                        temp = info(p);
                        namaMax = info(p).nama;
                        gajiMax = info(p).gaji;
                        p = next(p);
                    }else{
                        p = next(p);
                    }
                }
                cout << namaMax << " " << gajiMax << endl;
                cout << endl;
                break;
            }
        pilihan = selectMenu();
        cout << endl;
    }
    return 0;



}
