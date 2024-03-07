#include <iostream>
#include <string>
using namespace std;

int main() {
    system("cls");
    string nama, kom;
    int nim;
    float ipk;

    cout << "Pendataan Mahasiswa = " << endl;
    cout << "Nama      = ";
    getline(cin, nama);
    cout << "NIM       = ";
    cin >> nim;
    cout << "Kom       = ";
    cin >> kom;
    cout << "IPK       = ";
    cin >> ipk;

    // Menampilkan data yang dimasukkan
    cout << "\nData Mahasiswa" << endl;
    cout << "Nama: " << nama << endl;
    cout << "NIM: " << nim << endl;
    cout << "Kom: " << kom << endl;
    cout << "IPK: " << ipk << endl;
    return 0;
}
