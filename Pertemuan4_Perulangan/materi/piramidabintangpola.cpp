#include <iostream>
using namespace std;

int main() {
    int tinggi, i, j, k;
    cout << "input tinggi piramida pola: ";
    cin >> tinggi;

    for(i = 0; i < tinggi; i++) {
        for(j = tinggi - 1; j > i; j--) {
            cout << " ";
        }

        for(k = 0; k <= i; k++) {
            cout << k + 1;
        }

        for(k = i - 1; k >= 0; k--) {
            cout << k + 1;
        }

        cout << endl;
    }

    return 0;
}
