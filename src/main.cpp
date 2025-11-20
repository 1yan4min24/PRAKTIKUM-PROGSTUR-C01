#include <iostream>
#include "../Include/role.hpp"
using namespace std;

int main(){
  int pilihan;
  do{
    cout<<"\n=== Pilih Role ===\n";
    cout<<"1. Nelayan"<<endl;
    cout<<"2. Petugas TPI"<<endl;
    cout<<"3. Tengkulak"<<endl;
    cout<<"4. Orang Pasar"<<endl;
    cout<<"0. Keluar"<<endl;
    cout<<"Pilih: ";
    cin>>pilihan;

    switch (pilihan)
    {
      case 1: MenuNelayan();
      case 2: MenuPetugasTPI();
      case 3: MenuTengkulak();
      case 4: MenuOrangPasar();
      default: cout<<"Inputan tidak valid!!"<<endl;
    }
  }while (pilihan != 0);
}