#include <iostream>
#include <array>
using namespace std;

int main() {
    system("cls");
    
    array < int, 5 > nilai;

    for (int i= 0; i<5; i++) {
        nilai[i] = (i+1)*2;
        cout << "Nilai [ " << i << " ] = " << nilai[i];
        cout << "\naddress: " << &nilai[i] << endl;
    }
    //utk nengok ukuran
    cout << "ukuran : " << nilai.size() << endl;

    cout << "Addrss awal: " << nilai.begin()<<endl;
    cout << "address akhir: "<< nilai.end() << endl;
    cout << "nilai ke 2: " << nilai.at(2) << endl;

    return 0;
}