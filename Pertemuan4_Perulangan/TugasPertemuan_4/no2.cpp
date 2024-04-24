#include <iostream>
#include <string>
using namespace std;

int main() {
    system("cls");
    string kalimat;
    char huruf;
    
    cout << "Sebuah kalimat: ";
    getline(cin, kalimat);
    
    cout << "Masukkan huruf yang ingin dihapus: ";
    cin >> huruf;

    for (int i = 0; i < kalimat.length(); i++) { 
        if (kalimat[i] == huruf || kalimat[i] == toupper(huruf) || kalimat[i] == tolower(huruf)) { //memastikan agar misal user memilih huruf yg dihapus 'a', maka 'a' dan 'A' juga dihapus
            kalimat.erase(i, 1); //disini menghapus karakter di indeks i, dan hanya satu karakter saja yg dihapus
            i--;  
        }
    }
    
    cout << "Kalimat setelah huruf '" << huruf << "' dihapus: " << kalimat << endl;

    return 0;
}
