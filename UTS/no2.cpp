#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    int angka;
    cout << "Masukkan sebuah bilangan: ";
    cin >> angka;

    if (angka % 2 == 0) {
        cout << "Angka " << angka << " adalah bilangan genap" << endl;
    } else {
        cout << "Angka " << angka << " adalah bilangan ganjil" << endl;
    }

    if (angka % 3 == 0) {
        cout << "Angka " << angka << " habis dibagi 3" << endl;
    } else {
        cout << "Angka " << angka << " tidak habis dibagi 3" << endl;
    }

    if (angka % 5 == 0) {
        cout << "Angka " << angka << " habis dibagi 5" << endl;
    } else {
        cout << "Angka " << angka << " tidak habis dibagi 5" << endl;
    }

    if (angka % 7 == 0) {
        cout << "Angka " << angka << " habis dibagi 7" << endl;
    } else {
        cout << "Angka " << angka << " tidak habis dibagi 7" << endl;
    }

    return 0;
}
