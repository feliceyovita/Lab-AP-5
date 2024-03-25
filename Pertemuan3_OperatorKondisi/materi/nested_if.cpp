#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int umur;

    cout <<"Berapa umur kamu ?";
    cin >> umur;
    if (umur < 0) {
        cout << "Kamu bukan manusia";
    } else {
        if (umur > 0 && umur <= 5)
            cout << "Kamu masih balita";
        else if (umur > 5 && umur <= 18)
            cout << "Kamu masih remaja";
        else if (umur > 18 && umur <= 60)
            cout << "Kamu dewasa";
        else if (umur >60 && umur <=70)
            cout << "Kamu lansia";
        else 
        cout <<"Kamu sudah berumur";
    }

    return 0;
}
