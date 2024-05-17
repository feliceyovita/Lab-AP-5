#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int x, *px;
    x = 25;

    px = &x;  //ini utk mengakses alamat memori
    *px = x; //ini utk mengakases is dari varibel x, yaitu 25

    cout << px << endl;
    cout << *px << endl;
    return 0;
}