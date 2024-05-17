#include <iostream>
using namespace std;

int main() {
    char kata[] = "K O M P U T E R";
    char* ptr = kata;

    cout << "Huruf kelima dari kata \"" << kata << "\" adalah: " << *(ptr + 8) << endl;

    return 0;
}