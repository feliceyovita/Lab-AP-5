#include <iostream>
using namespace std;

int kombinasi(int n, int k) {
    if (k == 1 || k == n)
        return 1;
    return kombinasi(n - 1, k - 1) + kombinasi(n - 1, k);
}

void segitigaPascal(int tinggi) {
    for (int i = 1; i <= tinggi; i++) {
        for (int j = 1; j <= tinggi - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << kombinasi(i, j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int tinggi, baris, kolom;
    
    do {
        cout << "Masukkan tinggi segitiga Pascal (1-30): ";
        cin >> tinggi;
    } while (tinggi < 1 || tinggi > 30);

    cout << "Segitiga Pascal dengan tinggi " << tinggi << ":\n";
    segitigaPascal(tinggi);
    
    do {
        cout << "\nMasukkan baris dan kolom yang ingin diakses (baris >= 1, baris >= kolom): ";
        cin >> baris >> kolom;
    } while (baris < 1 || kolom > 30 || baris < kolom);

    cout << "Nilai pada baris " << baris << " dan kolom " << kolom << " adalah: " << kombinasi(baris, kolom) << endl;

    return 0;
}


