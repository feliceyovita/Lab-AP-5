#include <iostream>
using namespace std;

int main() {
    int ganjil[10];
    int *ptr = ganjil;
    int j = 0;

    for (int i = 1; i <= 20; i++) {
        if (i % 2 != 0) {
            ganjil[j] = i;
            j++;
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << "Bilangan ganjil: " << *(ptr + i) << ", Alamat memori: " << (ptr + i) << endl;
    }

    return 0;
}
