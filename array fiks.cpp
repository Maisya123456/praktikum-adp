#include <iostream>

using namespace std;

int main(){
    cout<<" Nama: Maisya Zahra Fitri\n Nim : 2310431027\n Shift:4\n";
    int sizeArrayA, sizeArrayB, sizeArrayC;
    int i, j, angka, count, flag;
    
    cout << "Masukkan Banyaknya Array A : ";
    cin >> sizeArrayA;
    
    int arrayA[sizeArrayA];
    i = 0;
    while(i < sizeArrayA){
        cout << "Masukkan Nilai ke-" << i+1 << " : ";
        cin >> angka;
        
        if(angka >= 0 && angka <= 9){
            arrayA[i] = angka;
            i += 1;
        }else{
            cout << "[!] Input Harus Angka dengan Rentang 0-9" << endl;
        }
    }
    
    cout << endl;
    
    cout << "Masukkan Banyaknya Array B : ";
    cin >> sizeArrayB;
    
    int arrayB[sizeArrayB];
    i = 0;
    while(i < sizeArrayB){
        cout << "Masukkan Nilai ke-" << i+1 << " : ";
        cin >> angka;
        
        if(angka >= 0 && angka <= 9){
            arrayB[i] = angka;
            i += 1;
        }else{
            cout << "[!] Input Harus Angka dengan Rentang 0-9" << endl;
        }
    }
    
    cout << endl;
    
    cout << "Hasil :" << endl;
    cout << "Hanya ada di Array A : ";
    count = 0;
    for(i=0; i<sizeArrayA; i++){
        flag = 0;
        for(j=0; j<sizeArrayB; j++){
            if(arrayA[i] == arrayB[j]){
                flag = 1;
                break;
            }
        }
        
        if(flag == 0){
            cout << arrayA[i] << " ";
            count += 1;
        }
    }
    
    if(count == 0){
        cout << "-";
    }
    cout << endl;
    
    cout << "Hanya ada di Array B : ";
    count = 0;
    for(i=0; i<sizeArrayB; i++){
        flag = 0;
        for(j=0; j<sizeArrayA; j++){
            if(arrayB[i] == arrayA[j]){
                flag = 1;
                break;
            }
        }
        
        if(flag == 0){
            cout << arrayB[i] << " ";
            count += 1;
        }
    }
    
    if(count == 0){
        cout << "-";
    }
    cout << endl;
    
    cout << "Ada di Array A dan B : ";
    count = 0;
    for(i=0; i<sizeArrayA; i++){
        flag = 0;
        for(j=0; j<sizeArrayB; j++){
            if(arrayA[i] == arrayB[j]){
                flag = 1;
                break;
            }
        }
        
        if(flag == 1){
            cout << arrayA[i] << " ";
            count += 1;
        }
    }
    
    if(count == 0){
        cout << "-";
    }
    cout << endl;

    return 0;
}