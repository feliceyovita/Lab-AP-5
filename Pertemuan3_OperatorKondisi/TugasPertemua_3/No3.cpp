#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

    cout << "Program menghitung Body Mass Index (BMI)\n";
    float berat, tinggi;
    float bmi;
    
    cout << "Masukkan berat badan anda (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan anda (cm): ";
    cin >> tinggi;
    tinggi = tinggi/100;
    
    bmi = (berat / pow(tinggi, 2));

    cout << "==========================================================" << endl;
    cout << "BMI anda: " << fixed << setprecision(2) << bmi << endl;

    if (bmi >0 && bmi < 18.5) {
        cout << "Kategori berat badan: Berat badan kurang" << endl;
    } else if (bmi >= 18.5 && bmi < 25) {
        cout << "Kategori berat badan: Berat badan normal" << endl;
    } else if (bmi >= 25 && bmi < 30) {
        cout << "Kategori berat badan: Berat badan berlebih" << endl;
    } else if (bmi >= 30) {
        cout << "Kategori berat badan: Obesitas" << endl;
    } else {
        cout << "Error" << endl;
    }

    return 0;
}
