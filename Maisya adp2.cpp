#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int u1,u2,u3,u4,u5,u6,n;
  float ratarata,ragam,simpangan_baku;
  cout<<endl<<"Menghitung rata rata,ragam dan simpangan baku dari umur mahasiswa";
  cout<<endl<< "Masukan umur 1:";
  cin>> u1;
  cout<<endl<< "Masukan umur 2:";
  cin>> u2;
  cout<<endl<< "Masukan umur 3:";
  cin>> u3;
  cout<<endl<< "Masukan umur 4:";
  cin>> u4;
  cout<<endl<< "Masukan umur 5:";
  cin>> u5;
  cout<<endl<< "Masukan umur 6:";
  cin>> u6;
  cout<<endl<< "Masukan banyak data:";
  cin>> n;
  
  ratarata=(u1+u2+u3+u4+u5+u6)/n;
  cout<< "hasil rata rata umur mahasiswa adalah"<< ratarata;
  ragam= ((u1-ratarata)*(u1-ratarata))+((u2-ratarata)*(u2-ratarata))+((u3-ratarata)*(u3-ratarata))+((u4-ratarata)*(u4-ratarata))+((u5-ratarata)*(u5-ratarata))+((u6-ratarata)*(u6-ratarata))/n;
  cout<< endl<<"hasil ragam umur mahasiswa adalah"<< ragam;
  simpangan_baku= sqrt(ragam);
  cout<<endl<< "hasil simpangan baku umur mahasiswa adalah "<<simpangan_baku;
  
  cout<<endl<< "Nama: Maisya Zahra Fitri";
  cout<<endl<< "noBP: 2310431027";
  cout<<endl<< "shift:4";
  
  return 0;
}