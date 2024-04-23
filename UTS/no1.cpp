#include <iostream>
using namespace std;

int main() {
    system("cls");
    string kalimat;
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    string terbalik = "";
    for (int i = kalimat.length() - 1; i >= 0; i--) {
        terbalik += kalimat[i];
    }

    for (char c: terbalik) {
        cout << c << endl;
    }

    return 0;
}