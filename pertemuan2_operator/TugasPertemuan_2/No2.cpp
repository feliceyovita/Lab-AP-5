#include <iostream>
#include <cmath> //library untuk fungsi matematika
using namespace std;

int main() {
    system("cls");
    int a,b,c;
    cout << "Program  menghitung nilai-nilai persamaan kuadrat dengan rumus ABC" << endl;
    cout << "Persamaan Ax^2 + Bx + C :\n";
    cout << "Masukkan nilai A : ";
    cin >> a;
    cout << "Masukkan nilai B : ";
    cin >> b;
    cout << "Masukkan nilai C : ";
    cin >> c;

    double diskriminan = b * b - 4 * a * c;
    if (diskriminan > 0) {
        double root1 = (-b + sqrt(diskriminan)) / (2 * a);
        double root2 = (-b - sqrt(diskriminan)) / (2 * a);
        cout << "Akar-akar persamaan kuadrat: " << root1 << " dan " << root2 << endl;
    } else if (diskriminan == 0) {
        double root = -b / (2 * a);
        cout << "Persamaan kuadrat memiliki akar kembar: " << root << endl;
    } else {
        cout << "Persamaan kuadrat tidak memiliki akar real" << endl;
    }

}