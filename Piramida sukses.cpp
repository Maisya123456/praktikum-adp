#include <iostream>
using namespace std;
int main() {
    int tinggi;
    cout << "Masukkan tinggi piramida: ";
    cin >> tinggi;

    char huruf = 'A';

    
    for (int i = 1; i <= tinggi; ++i) {
        
        for (int j = 0; j < tinggi - i; ++j) {
            cout << " ";
        }

        
        for (int j = 1; j <= i; ++j) {
            cout << huruf++;
        }

        huruf--;
        for (int j = i - 1; j >= 1; --j) {
            cout << --huruf;
        }

        cout << endl;
        huruf = 'A';
    }

    return 0;
}
    