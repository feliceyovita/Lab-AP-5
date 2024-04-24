#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    int n;
    cout << "Program menjumlahkan semua kuadrat bilangan genap sampai n\n";
    cout << "Masukkan n: ";
    cin >> n;

    int hasil = 0;
    for (int i = 0; i < n+1; i++) { //agar nanti diperhitangannya sampe n
        if (i % 2 == 0) { //agar i selalu yg genap
            hasil += i * i;
            if (i == 0) {
                cout << i * i;
            } else {
                cout << " + " << i * i;
            }
        }
    }

    cout << " = " << hasil << endl;
    cout << "Jumlah kuadrat bil genap sampai " << n << " adalah " << hasil;
    return 0;
}
