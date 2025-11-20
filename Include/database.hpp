#ifndef DATABASE_HPP
#define DATABASE_HPP
#include <vector>
#include <string>
using namespace std;

struct Ikan{
   string jenis;
   int berat;
   int harga;
};
extern vector<Ikan>dataTangkapan;
extern vector<Ikan>lotLelang;
extern vector<Ikan>stokTengkulak;
extern vector<Ikan>pasar;
extern vector<string>permintaanPasar;

#endif
