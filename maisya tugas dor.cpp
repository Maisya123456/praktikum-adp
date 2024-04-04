#include <iostream>
using namespace std;

int main (){
int jumlah;
jumlah=0;
     
     for (int i=1; i<=100; i++){
         if ((i%3==0) || (i%5==0)){
         cout << "DOR"<< " ";
         jumlah++;
         }
         
         else {
           cout <<i<< " ";
           }
           if (i%10==0){
          cout <<endl;
       }
       }
       
     cout<<endl;
     cout << "Jumlah DOR yang muncul:" <<jumlah;
}