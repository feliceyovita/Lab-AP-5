#include <iostream>
using namespace std;

int faktorial(int input) {
    int hasil=1;
    if (input >1) {
        return input*faktorial(input-1);
    }else {
        return 1;
    }
}

int main() {
    int angka;
    system("cls");
    cout <<" Masukkan angka: ";
    cin >> angka;
    cout << "Hasil= " << faktorial(angka);
    
    
    return 0;
}