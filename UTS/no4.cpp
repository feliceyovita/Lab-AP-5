#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    int tinggi;
    cout << "Masukkan tinggi diamond (ganjil): ";
    cin >> tinggi;

    while (tinggi % 2 == 0) {
        cout << "Tinggi diamond harus ganjil.\n";
        return 0;
    }

    int setengah = tinggi / 2 + 1;
    for (int i = 1; i <= setengah; i++) {
        for (int j = setengah; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = setengah - 1; i >= 1; i--) {
        for (int j = setengah; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
