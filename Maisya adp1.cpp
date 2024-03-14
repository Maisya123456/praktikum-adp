#include <iostream>
using namespace std;

int main() {
    float phi= 3.14;
    float jari;
    float luas_permukaan, volume;
    cout<<endl<< " Hitung volume dan luas permukaan bola ";

    cout<<endl<< "Nilai jari-jari :";
    cin>>jari;
    luas_permukaan = 4*phi*jari*jari;
    cout<< "Hasil luas permukaan bola :" << luas_permukaan;
    volume = 4/(float)3*phi*jari*jari*jari;
    cout<<endl<< " Hasil volume bola     :" << volume;
    cout<<endl<< " Nama :Maisya Zahra Fitri";
    cout<<endl<< " noBP:2310431027";
    cout<<endl<< "shift :4";
}