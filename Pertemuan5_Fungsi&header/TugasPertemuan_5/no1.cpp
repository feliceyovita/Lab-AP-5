#include <iostream>
#include <typeinfo>
using namespace std;

string fizzbuzz(int input) {
    if (input % 3 == 0 && input % 5 == 0)
        return "FizzBuzz";
    else if (input % 3 == 0)
        return "Fizz";
    else if (input % 5 == 0)
        return "Buzz";
    else
        return to_string(input);
}

void deretangka() {
    int n;
    cout << "Input angka: ";
    cin >> n;

    while (n < 3 || n >= 100) {
        cout << "Input tidak valid, berikan nilai dengan rentang 3 - 100!\n";
        cout << "Input angka: ";
        cin >> n;
    }

    for (int i = 1; i <= n; i++) {
        int number = i * (i + 1);
        cout << fizzbuzz(number);
        if (i != n)
            cout << ", ";
    }

    int deretakhir = n * (n + 1);
    if (fizzbuzz(deretakhir) == to_string(deretakhir)) { //cek apakah fungsi fizzbuzz dengan argumen deretakhir sama dengan angka itu sendiri
        cout << endl;
        cout << "Tipe data " << deretakhir << " adalah " << typeid(deretakhir).name() << endl;
    }
}

int main() {
    deretangka();
    return 0;
}

