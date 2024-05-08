#include <iostream>
#include <cmath> 
#include <climits> 
using namespace std;

double efisiensiTrioEinstein(int a, int b, int c) {
    return sqrt(a * a + b * b + c * c);
}

int main() {
    int tabel[3][3];

    cout << "Masukkan nilai untuk tabel 3x3:\n";
    for (int i = 0; i < 3; ++i) {
        string nama;
        if (i == 0)
            nama = "Andi";
        else if (i == 1)
            nama = "Budi";
        else if (i == 2)
            nama = "Chelly";

        cout << "Masukkan nilai untuk Baris " << i + 1 << " (" << nama << "): ";
        cin >> tabel[i][0] >> tabel[i][1] >> tabel[i][2];
    }
    system("cls");
    cout << "\nNilai terbesar di setiap baris:\n";
    int nilaiMax[3]; // Array untuk menyimpan nilai terbesar di setiap baris
    for (int i = 0; i < 3; ++i) {
        nilaiMax[i] = INT_MIN; // Inisialisasi dengan nilai minimum yang mungkin
        for (int j = 0; j < 3; ++j) {
            if (tabel[i][j] > nilaiMax[i]) {
                nilaiMax[i] = tabel[i][j];
            }
        }
        cout << "Nilai terbesar di baris " << i + 1 << ": " << nilaiMax[i] << endl;
    }

    double hasil = efisiensiTrioEinstein(nilaiMax[0], nilaiMax[1], nilaiMax[2]);
    cout << "\nHasil nilai efisiensi untuk Andi, Budi, dan Chelly: " << hasil << endl;

    return 0;
}




