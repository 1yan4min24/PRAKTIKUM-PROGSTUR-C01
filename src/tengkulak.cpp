#include <iostream>
#include "../Include/role.hpp"
#include "../Include/database.hpp"
using namespace std;


void LihatLOT(){
  cout<<"\n=== Lihat LOT ==\n";
  for(int i = 0; i < lotLelang.size(); i++){
      cout<<i+1 << "Jenis: "<<lotLelang[i].jenis<<" | "<< "Berat(kg): "<< lotLelang[i].berat<<" kg"
      <<" | "<< "Harga: "<<lotLelang[i].harga<<endl;

    }
    cout<<endl;
}



void Jual_ikan(){
  cout<<"\n=== Jual Ikan ===\n";
  if (stokTengkulak.empty()){
    cout<<"Belum ada ikan yang dapat dijual";
  }

  for (auto &st:stokTengkulak){
    cout<< "Jenis: "<< st.jenis<< " | "<< "Berat (kg): "<<st.berat<<" kg"<<endl;
    cout<<"Harga: ";
    cin>>st.harga;
    pasar.push_back(st);
    cout<<endl;
  }
  stokTengkulak.clear();
  cout<<"Menjual Ikan!"<<endl;
}

void MenuTengkulak(){
   int pilihan;
   do{
    cout<<"\n=== Menu Tengkulak ===\n";
    cout<<"1. Lihat Permintaan Pasar"<<endl;
    cout<<"2. Lihat LOT Lelang"<<endl;
    cout<<"3. Beli Ikan Lelang"<<endl;
    cout<<"4. Jual Ikan"<<endl;
    cout<<"0. Kembali"<<endl;
    cout<<"Pilih: ";
    cin>>pilihan;

    switch (pilihan)
    {
      case 1: LihatPermintaan();break;
      case 2: LihatLOT(); break;
      case 3:
      case 4: Jual_ikan();break;
      default:cout<<"Inputan tidak valid!"<<endl;

    }
   }while (pilihan != 0);
}