#include <iostream>
using namespace std;

int main() {
    int angka;
    bool prima = true;

    cout << "Masukkan sebuah bilangan: ";
    cin >> angka;

    if (angka < 1) {
        prima = false;
    } else {
        for (int i = 2; i <= angka / 2; i++) {
            if (angka % i == 0) {
                prima = false;
                break;
            }
        }
    }

    if (prima && angka != 1) {
        cout << "Angka " << angka << " adalah bilangan prima." << endl;
    } else {
        cout << "Angka " << angka << " bukan bilangan prima." << endl;
    }

    return 0;
}

