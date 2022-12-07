#include "SLL.h"

void create_list(List &L){
     first(L) = NULL;
}

void insert_last(List &L, address P){
    if (first(L)==NULL){
        first(L)=P;
    } else if (next(first(L)) == NULL){
        next(first(L)) = P;
    } else {
        address addressBerjalan = first(L);
        while (next(addressBerjalan) != NULL) {
            addressBerjalan = next(addressBerjalan);
        }
        next(addressBerjalan) = P;
    }
}

void delete_first(List &L, address &P) {
    P = first(L);
    if (next(first(L)) == NULL) {
        first(L) = NULL;
    } else {
        first(L) = next(first(L));
    }
    next(P) = NULL;
}


void delete_after(List &L, address Prec, address &P){
    P = next(Prec);
    next(Prec) = next(P);
    next(P) = NULL;
}

void delete_last(List &L, address &P){
    if (next(first(L)) == NULL) {
        P = first(L);
        next(first(L)) = NULL;
    } else {
        address q = first(L);
        while (next(next(q)) != NULL){
            q = next(q);
        }
        P=next(q);
        next(q)= NULL;
    }
}

address new_element(infotype peg){
    address p = new ElmtPeg;

    info(p) = peg;
    next(p) = NULL;
    return p;
}

void add_N_data(List &ListPeg){
    int N, i;
    infotype peg;
    address p;

    cout << "Tambahkan berapa data: ";
    cin >> N;
    for (i=1;i<=N;i++){
        cout << "Masukkan Nama: ";
        cin >> peg.nama;
        cout << "Masukkan NIP: ";
        cin >> peg.NIP;
        cout << "Masukkan gaji: ";
        cin >> peg.gaji;
        cout << endl;
        p = new_element(peg);
        insert_last(ListPeg, p);
    }
}

void show_all_data(List ListPeg){
    address p;
    int i;

    if (first(ListPeg) == NULL){
        cout << "List Kosong!" << endl;
        cout << endl;
    }else{
        i = 1;
        p = first(ListPeg);
        cout << "List: " << endl;
        while (next(p)!= NULL){
            cout << "[" << i  << "]";
            cout << info(p).nama << " ";
            cout << info(p).NIP << " ";
            cout << info(p).gaji << " " << endl;
            p = next(p);
            i++;
        }
        cout << "List selesai ditampilkan!" << endl;
        cout << endl;
    }
}

address search_by_NIP(List ListPeg, string NIP){
    address p;

    p = first(ListPeg);
    while (next(p) != NULL){
        if (info(p).NIP == NIP){
            return p;
            break;
        }else{
            p = next(p);
        }
    }
}
void delete_Data(List &ListPeg, string NIP){
    address p, q;

    p = first(ListPeg);
    if (first(ListPeg) == NULL){
        cout << "List Kosong!" << endl;
        cout << endl;
    }else{
        while (next(p) != NULL){
        if (info(p).NIP == NIP){
            delete_after(ListPeg, p, q);
            break;
        }else{
            p = next(p);
            }
        }
    }
}

int jumlah_pegawai(List ListPeg){
    int jumPeg;
    address p;

    jumPeg = 0;
    p = first(ListPeg);
    while (next(p)!= NULL){
            jumPeg++;
        }
    return jumPeg;
}

int total_salary(List ListPeg){
    int total;
    address p;

    total = 0;
    p = first(ListPeg);
    while (next(p)!= NULL){
        total += info(p).gaji;
    }
    return total;
}
