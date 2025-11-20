#include <iostream>
#include "../include/database.hpp"
#include"../include/role.hpp"
using namespace std;

void Beli_Ikan(){
    if (pasar.empty()) {
        cout<< "Pasar Kosong.\n\n";
        return;
    }
    cout<< "--- Ikan di Pasar ---\n";
    for (int i=0; i <pasar.size(); i ++) {
        cout<< i+1 << ". " << pasar[i].jenis<< "| " <<pasar[i].berat<< "Kg | Rp" << pasar[i].harga<<endl;
    }
    int pilih;
    cout<<"Pilih Ikan";
    cin>>pilih;

    if (pilih>0 && pilih <= pasar.size()) {
        cout <<">>Anda Membeli<<" <<pasar[pilih-1].jenis<<endl;
    }else(
        cout<<"Pilihan Tidak Valid.\n" 
    );
    cout<<endl;
}

void informasikan(){
    for (auto &i: pasar)
    cout<< "-"<< i.jenis << "|"<< i.berat<<"Kg\n";
    cout<< endl;
}
void MenuOrangPasar(){
    int pilih;
    do {
        cout<<"\n=== MENU ORANG PASAR ===\n";
        cout<<"1. Beli Ikan\n";
        cout<<"0. Kembali\n";
        cout<<"PIlih: ";
        cin>>pilih;
        switch (pilih) {
            case 1: Beli_Ikan(); break;
            default: cout<<"Inputan tidak valid!"<<endl;
        }
    }while(pilih !=0);
}