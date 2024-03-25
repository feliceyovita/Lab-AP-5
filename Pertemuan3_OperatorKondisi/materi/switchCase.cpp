#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int umur;
    cout << "Berapa umur kamu? ";
    cin >> umur;
    if (umur<0) {
        cout << "Kamu bukan manusia";
    } else {
        switch (umur) {
            case 0 ... 5:
            cout << "Balita";
            break;
            case 6 ... 12:
            cout << "Anak-anak";
            break;
            case 13 ... 18:
            cout << "Remaja";
            break;
            case 19 ... 59:
            cout << "Dewasa";
            break;
            case 60 ... 70:
            cout << "Lansia";
            break;
            default: 
            cout << "berumur";
            break;

        }
    }
    
    
    
    return 0;
}