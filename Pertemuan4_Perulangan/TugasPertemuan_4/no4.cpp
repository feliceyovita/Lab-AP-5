#include <iostream>
using namespace std;

int main() {
    int tahun, interval;

    while (true) {
        cout << "Masukkan tahun (1000 <= tahun <= 9000): "; 
        cin >> tahun;
        cout << "Masukkan interval (-tahun <= interval <= 9999-tahun): "; 
        cin >> interval;

        if (tahun >= 1000 && tahun <= 9000 && interval >= -tahun && interval <= 9999 - tahun) {
            break;
        } else {
            cout << "Input tidak valid." << endl;
        }
    }

    int mulai, akhir;
    if (interval > 0) {
        mulai = tahun;
        akhir = tahun + interval;
        for (int i = mulai; i <= akhir; i++) {
            if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
                cout << i << " kabisat" << endl;
            else 
                cout << i << " bukan kabisat" << endl;
        }
    } else {
        mulai = tahun + interval;
        akhir = tahun;
        for (int i = akhir; i >= mulai; i--) {
            if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
                cout << i << " kabisat" << endl;
            else 
                cout << i << " bukan kabisat" << endl;
        }
    }

    return 0;
}



