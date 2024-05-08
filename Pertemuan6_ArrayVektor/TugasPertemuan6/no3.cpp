#include <iostream>
#include <string>
using namespace std;

string reverseSubstring(const string& str, int start, int end) {
    string reversed;
    for (int i = end; i >= start; --i) {
        reversed += str[i];
    }
    return reversed;
}

int main() {
    system("cls");
    string str;
    do {
        cout << "Masukkan string yang terinfeksi (maks 100 karakter!): ";
        getline(cin, str); 
    } while (str.length() > 100 || str.length() < 1);

    int middle = str.length() / 2;
    string left = reverseSubstring(str, 0, middle - 1);
    string right = reverseSubstring(str, middle, str.length() - 1);

    cout << "String yang telah diperbaiki: " << left << right << endl;

    return 0;
}


