#include <iostream>
using namespace std;

int main(){
string nama,jenis_kelamin,tujuan;
int harga1,harga2,umur;
int kode;

  cout << "Maskapai Penerbangan Garuda Indonesia"<<endl;
  cout << "Silahkan Mengisi Data Diri dibawah ini:"<<endl;
  

  cout << "-------------------------------"<<endl;
  cout << "|     Tujuan Kota  |  Harga   |"<<endl;
  cout << "|  1. Jakarta      | 700.000  |"<<endl;
  cout << "|  2. Surabaya     | 500.000  |"<<endl;
  cout << "|  3. Medan        | 350.000  |"<<endl;
 cout << "--------------------------------"<<endl;
   cout << "Masukan Kode Tujuan Kota=";cin >>kode;
    if (kode==1){
            cout << "Jakarta"; harga1=700.000;
    }
    else if (kode==2) {
         cout <<  "Surabaya "; harga1=500.000;
    }

    else if(kode==3) {
            cout << "Medan"; harga1=350.000;
    }

    else {
        cout << "Pilihan tidak ada";
    }
 cout <<endl<<"------Menu Kelas Maskapai------"<<endl;
 cout<< "| 1. First Class    | 300.000|"<< endl;
 cout <<"| 2. Bisnis Class   | 200.000|"<< endl;
 cout <<"| 3. Ekonomi Class  | 100.000|"<< endl;
 cout <<"----------------------------"<<endl;
 int kelas;
cout <<endl<< "Masukan Kode Jenis Kelas ="; cin>> kelas;

 if (kelas==1) {
    cout << "First Class"; harga2=300.000;
     }
     else if (kelas==2){
        cout << "Bisnis Class"; harga2 = 200.000;
     }
     else if (kelas ==3) {
        cout << "Ekonomi Class"; harga2 =100.000;
     }
     else {
        cout << "Pilihan tidak ada";}

     int jumlah_tiket;
     cout<< endl<< "Masukan Jumlah Tiket=";cin>> jumlah_tiket;
     float diskon=0;

     if (jumlah_tiket>=3) {
   cout << "Dapat diskon"; diskon=0.25;}
     else{
        cout << "Tidak dapat diskon";
     }
     cout<<endl;
     float total= (harga1+harga2)* jumlah_tiket;
      diskon =diskon*total;
      float total_bayar=total-diskon;
      
    cout << "-----------------------------"<<endl;
    cout<<endl;
    cout << "Nama          :"; cin >> nama;
    cout << "Umur          :"; cin >> umur;
    cout << "Jenis Kelamin :"; cin >> jenis_kelamin;
    cout<<endl;
    cout <<"-----------------------------"<<endl;
    cout << "Total diskon =" <<diskon<< endl;
    cout << "Total Harga =" << total<< endl;
    cout << "Total yang harus dibayar =" << total_bayar;
    cout <<endl;
    cout << "---Selamat menikmati perjalanan----" <<endl;
    cout << "----------Terima Kasih-------------"<< endl;





    }