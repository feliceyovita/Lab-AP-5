#include <iostream>
using namespace std;

int operasi(int num1, int num2) {
    return num1 * num2;
}

float operasi(float num1, float num2) {
    return num1 / num2;
}

int main() {
    system("cls");
    
    int num1Int, num2Int;
    float num1Float, num2Float;
    cout << "Masukkan angka pertama (int): ";
    cin >> num1Int;
    cout << "Masukkan angka kedua (int): ";
    cin >> num2Int;
    cout << "Hasil perkalian: " << operasi(num1Int, num2Int) << endl;2
    
    cout << "\nMasukkan angka pertama (float): ";
    cin >> num1Float;

    cout << "Masukkan angka kedua (float): ";
    cin >> num2Float;

    cout << "Hasil pembagian: " << operasi(num1Float, num2Float) << endl;
    
    return 0;
}

