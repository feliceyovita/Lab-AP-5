#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    int n;
    while (true) {
        cout << "Masukkan n (1 <= n <=1000): ";
        cin >> n;
        if (n>=1 && n<=10000) {
            break;  //keluar jika memenuhi syarat
        } else {
            cout << "n harus berada di antara 1-10000\n";
        }
    }        

    cout << "h";
    for (int i = 0; i < n; i++) {
        cout << "o";
    }
    cout << "r";
    for (int i = 0; i < n; i++) {
        cout << "e";
    }
    for (int i = 0; i < n; i++) {
        cout << "!";
    }
    
    cout << endl;
    
    return 0;
} 