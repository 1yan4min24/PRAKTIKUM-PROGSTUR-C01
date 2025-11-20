#include <iostream>
#include "../Include/role.hpp"
#include "../Include/database.hpp"
using namespace std;


void LihatLOT(){
  cout<<"\n=== Lihat LOT ==\n";
  for(auto )
}



void MenuTengkulak(){
   int pilihan;
   do{
    cout<<"\n=== Menu Tengkulak ===\n";
    cout<<"1. Lihat Permintaan Pasar"<<endl;
    cout<<"2. Lihat LOT Lelang"<<endl;
    cout<<"3. Beli Ikan Lelang"<<endl;
    cout<<"4. Jual Ikan"<<endl;
    cout<<"Pilih: ";
    cin>>pilihan;

    switch (pilihan)
    {
      case 1: LihatPermintaan();break;
      case 2:

    }
   }while (pilihan != 0)
}