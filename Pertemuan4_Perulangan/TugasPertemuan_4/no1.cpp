#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int n,i;
    int deret = 1;
    cout << "Program deret bilangan pola +5 dan +3\n";
    cout << "=======================================\n";
    cout << "Masukkan batas suku Un: ";
    cin >> n;

    //memastikan agar user memasukkan rentang nilai yang benar
    while (n<=0){
        cout << "Nilai yang anda input tidak valid, silahkan input sebuah bilangan real: ";
        cin >> n;
    }

    for (i=0; i<n; i++) {
        cout << deret << " ";
        if (i%2 == 0) {
            deret+=5;
        }
        if (i%2 == 1) {
            deret +=3;
        }
    }
  return 0;
}