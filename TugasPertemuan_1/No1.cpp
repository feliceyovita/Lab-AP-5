#include <iostream>
#include <cctype>;
using namespace std;

int main() {
    system("cls");
    string nama, kom;
    int nim;
    float ipk;

    cout << "Pendataan Mahasiswa = " << endl;
    cout << "Nama      = ";
    getline(cin, nama); //mengambil input yang menggunakan spasi
    cout << "NIM       = ";
    cin >> nim;
    cout << "Kom       = ";
    cin >> kom;
    cout << "IPK       = ";
    cin >> ipk;

    // Mengonversi kom menjadi huruf besar
    for (char &c : kom) {
        c = toupper(c);
    }

    system("cls");
    // Menampilkan data yang dimasukkan
    cout << "\nData Mahasiswa" << endl;
    cout << "Nama: " << nama << endl;
    cout << "NIM: " << nim << endl;
    cout << "Kom: " << kom << endl;
    cout << "IPK: " << ipk << endl;
    return 0;
}