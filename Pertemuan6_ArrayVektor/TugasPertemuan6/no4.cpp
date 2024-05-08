#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    vector<int> deret;
    string input;

    cout << "Masukkan deret angka: ";
    getline(cin, input); 

    stringstream ss(input); 

    int angka;
    while (ss >> angka) { // Membaca angka dari stringstream
        deret.push_back(angka);
    }

    cout << "Deret angka: ";
    for (int i = 0; i < deret.size(); ++i) {
        cout << deret[i] << " ";
    }
    cout << endl;

    cout << "Panjang Vektor: " << deret.size() << endl;

    cout << "Angka satu persatu:" << endl;
    while (!deret.empty()) {
        cout << deret.front() << endl; 
        deret.erase(deret.begin()); // Hapus angka pertama dari vektor
    }

    cout << "Panjang vektor: " << deret.size() << endl;

    return 0;
}

