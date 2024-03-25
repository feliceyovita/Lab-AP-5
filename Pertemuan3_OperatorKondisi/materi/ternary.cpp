#include <iostream>
using namespace std;

int main() {
    system("CLS");

    int tinggi;
    string hasil;
    cout << "berapa tinggi kamu?";
    cin >> tinggi;
    tinggi > 200 ? cout << "kamu berbakat jadi pemain basket" : cout << "kamu harus byk minum susu";    
    cout << hasil << endl;
    
    return 0;
}