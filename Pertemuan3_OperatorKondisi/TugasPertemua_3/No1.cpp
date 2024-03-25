#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int a;
    cout << "Input sebuah bilangan bulat : ";
    cin >> a;
    
    if (a % 2 == 0 ) {
        cout << a << " adalah bilangan genap" << endl;
    } else {
        cout << a << " adalah bilangan ganjil";
    }
    
    return 0;
}