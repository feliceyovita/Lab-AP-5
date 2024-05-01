#include <iostream>
using namespace std;

main ()
{
    system("cls");
    double panjang_meter, panjang_kilometer;
    cout << "Program mengkonversi satuan panjang meter menjadi kilometer: " << endl;
    cout << "Panjang (meter): ";
    cin >> panjang_meter;
    panjang_kilometer = panjang_meter / 1000;
    system("cls");
    cout << "Hasil konversi: " << endl;
    cout << "Meter = " << panjang_meter << endl;
    cout << "Kilometer = " << panjang_kilometer;
}