#include <iostream>
#include "../Include/role.hpp"
#include "../Include/database.hpp"
using namespace std;



void LihatTangkapan(){
  cout<<"\n=== Lihat Hasil Tangkapan Nelayan ===\n";
  for(auto &dt : dataTangkapan){
    cout<<"- "<<"Jenis: "<< dt.jenis << " | "<< "Berat (kg): "<<dt.berat<<"kg"<<endl;
  }
}

void Lelang(){
  cout<<"\n=== Mulai Lelang ===\n";
  if (dataTangkapan.empty()){
    cout<<"Tidak ada ikan yang dapat dilelang"<<endl;
  }

  for(auto &dt : dataTangkapan){
    cout<<"Jenis: "<<dt.jenis<<" | "<<"Berat(kg): "<<dt.berat<<" kg"<<endl;
    cout<<"Harga: ";
    cin>>dt.harga;
    lotLelang.push_back(dt);
  }
  dataTangkapan.clear();
}


void MenuPetugasTPI(){
  int pilihan;
  do{
    cout<<"\n=== Menu Petugas TPI ===\n";
    cout<<"1. Lihat Hasil Tangkapan Nelayan"<<endl;
    cout<<"2. Melakukan Lelang"<<endl;
    cout<<"0. Kembali"<<endl;
    cin>>pilihan;

    switch (pilihan)
    {
      case 1: LihatTangkapan();break;
      case 2: Lelang();break;
      default : cout<<"Inputan Tidak valid!"<<endl;
    }
  }while(pilihan != 0);
}
