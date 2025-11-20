#include <iostream>
#include "../Include/role.hpp"
#include "../Include/database.hpp"
using namespace std;


void LihatPermintaan(){
  cout<<"\n=== Permintaan Pasar ===\n";
  for(auto &p : permintaanPasar){
    cout<<"- "<<p<<endl;
  }
} 


void inputTangkapan(){
  cout<<"\n=== Input Hasil Tangkapan ===\n";
  Ikan ik;
  cout<<"Jenis: ";
  cin>>ik.jenis;
  cout<<"Berat (kg): ";
  cin>>ik.berat;

  ik.harga = 0;
  dataTangkapan.push_back(ik);
  cout<<"Ikan Berhasil Disimpan!"<<endl;
}



void MenuNelayan(){
  int pilihan;
  do{
    cout<<"\n=== Menu Nelayan ===\n";
    cout<<"1. Lihat Permintaan Pasar"<<endl;
    cout<<"2. Input Hasil Tangkapan"<<endl;
    cout<<"0. Kembali"<<endl;
    cout<<"Pilih: ";
    cin>>pilihan;

    switch (pilihan)
    {
      case 1: LihatPermintaan();break;
      case 2: inputTangkapan;break;
      default: cout<<"Inputan tidak valid!"<<endl;
    
    }
  }while (pilihan != 0);
}