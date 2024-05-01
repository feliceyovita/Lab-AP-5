#include <iostream>
using namespace std;

int sum(int num1, int num2) {
    return num1 + num2;
}

int main() {
    system("cls");
    
    int hasil = sum(5, 10);
    cout << "Hasil: " << hasil;
    
    return 0;
}

/*atau utk default:
#include <iostream>
using namespace std;

int sum(int num1, int num2 = 10) {
    return num1 + num2;
}

int main() {
    system("cls");
    
    int hasil = sum(5);
    cout << "Hasil: " << hasil;
    
    return 0;
}*/

//variabel lokal = berada di dalam satu fungsi, hanya bisa diakses di fungsi itu
//variabel global = berada di luar fungsi, bisa diakses dari fungsi mana saja

#include <iostream>
using namespace std;

//varibale global
/*int num3 = 10

int sum(int num1, int num2) {
    return num1 + num2;
}

int main() {
    system("cls");
    
    int hasil = sum(5, 10);
    cout << "Hasil: " << hasil;
    
    return 0;
}*/

#include <iostream>
using namespace std;

int sum(int num1, int num2) {
    return num1 + num2;
}

int main() {
    system("cls");
    
    int hasil = sum(5, 10);
    cout << "Hasil: " << hasil;
    
    return 0;
}

/*#include <iostream>
using namespace std;

int pangkat(int angka, int eksponen) {
    int hasil = 1;
    for (int i = 0; i < eksponen; i++) {
        hasil *= angka;
    }
    return hasil;
}

int main() {
    system("cls");
    
    int angka, eksponen;

    cout << "Masukkan bilangan: ";
    cin >> angka;
    cout << "Masukkan eksponen: ";
    cin >> eksponen;
    cout << angka << " pangkat " << eksponen << " = " << pangkat(angka, eksponen) << endl;
    
    return 0;
}*/



