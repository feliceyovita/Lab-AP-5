#include <iostream>
using namespace std;

void kalkulasi(int* a, int* b, int* hasil, char operasi) {
    switch (operasi) {
        case '+':
            *hasil = *a + *b;
            break;
        case '-':
            *hasil = *a - *b;
            break;
        case '*':
            *hasil = *a * *b;
            break;
        case '/':
            if (*b != 0) {
                *hasil = *a / *b;
            } else {
                cout << "Error: Pembagian dengan nol!" << endl;
            }
            break;
        default:
            cout << "Operasi tidak valid!" << endl;
            break;
    }
}

int main() {
    int a, b, hasil;
    char operasi;

    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan operasi (+, -, *, /): ";
    cin >> operasi;
    cout << "Masukkan angka kedua: ";
    cin >> b;

    kalkulasi(&a, &b, &hasil, operasi);

    if (operasi == '/' && b == 0) {
        // Tidak menampilkan hasil jika pembagian dengan nol
    } else {
        cout << "Hasil: " << hasil << endl;
    }

    return 0;
}