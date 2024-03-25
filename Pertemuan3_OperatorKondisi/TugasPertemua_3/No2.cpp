#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    system("CLS");
    string nama;
    int gol, anak;
    float gaji, gajibersih, t_anak;
    const float pajak = 0.95;

    cout << "Program menghitung gaji\n";
    cout << "Masukkan nama anda: ";
    getline(cin, nama);
    cout << "Golongan kepegawaian (1/2/3) : ";
    cin >> gol;

    switch (gol) {
        case 1:
        cout << "Gaji pokok = Rp5.000.000" << endl;
        gaji = 5000000 * pajak; //gaji pokok dipotong 5%
        cout << "Gaji pokok dipotong pajak: " << fixed << setprecision(0) << gaji << endl;
        break;
        case 2:
        cout << "Gaji pokok = Rp3.000.000" << endl; 
        gaji = 3000000 * pajak;
        cout << "Gaji pokok dipotong pajak: " << fixed << setprecision(0) << gaji << endl;
        break;
        case 3:
        cout << "Gaji pokok = Rp2.500.000" << endl;
        gaji = 2500000 * pajak;
        cout << "Gaji pokok dipotong pajak: " << fixed << setprecision(0) << gaji << endl;
        break;
        default:
        cout << "Error, pastikan golongan yang diinput angka 1/2/3";
    }
    
    cout << "Jumlah anak: ";
    cin >> anak;

    if (anak == 1 || anak ==2) {
        t_anak = 500000 * anak; //karena 500.000 per anak
        cout << "Tunjuangan anak: Rp" << fixed << setprecision(0) << t_anak << endl;
    }  else if (anak > 2) {
        t_anak = 750000 * anak;
        cout << "Tunjuangan anak: Rp" << fixed << setprecision(0) << t_anak << endl;
    } else {
        t_anak = 0;
        cout << "Tunjuangan anak: Rp" << fixed << setprecision(0) << t_anak << endl;
    }

    gajibersih = gaji + t_anak;
    cout << "==========================================================" << endl;
    cout << "Nama anda: " << nama << endl;
    cout << "Golongan kepegawaian: " << gol << endl;
    cout << "Jumlah anak: " << anak << endl;
    cout << "Gaji total: Rp" << fixed << setprecision(0) << gajibersih << endl;
    
    return 0;
}