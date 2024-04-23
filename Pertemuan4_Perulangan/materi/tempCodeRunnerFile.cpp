#include <iostream>
using namespace std;

/*int main() {
    int tinggi;
    cout << "Input tinggi segitiga: ";
    cin >> tinggi;

    for (int i = tinggi; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << tinggi << " ";
        }
        cout << endl;  // Pindah ke baris berikutnya setelah setiap baris bintang
    }
    
    return 0;
} */

int main () {
    int tinggi;
    cout << "Masukkan tinggi segitigas: ";
    cin >> tinggi;
    for (int i=0; i<tinggi; i++) {
        for (int k=0; k<=i; k++){
            cout << k+1 << " ";
        }
        cout << endl;
    }
}
