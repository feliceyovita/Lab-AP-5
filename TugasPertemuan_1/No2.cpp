#include <iostream>
#include <limits>
using namespace std;

int main()
{
    system("cls");
    string nama, nama2;
    cout << "Program ini untuk menunjukkan perbedaan penggunaan cin dan getline" << endl;
    cout << "Berikan nama lengkap anda: ";
    cin >> nama; 
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "\n";
    cout << "Perintah cin hanya mengambil inputan sampai spasi, yang dimana pada nama lengkap yang anda input,\nhanya terdeteksi sampai" << " \"" << nama << "\"" << endl;
    cout << "\n";
    cout << "Berikan nama lengkap anda lagi: ";
    getline(cin, nama2);
    cout << "\n";
    cout << "Perintah getline akan memasukkan seluruh baris teks yang diinput pengguna, \noleh karena itu, yang terdeteksi adalah" << " \"" << nama2 << "\"";
}