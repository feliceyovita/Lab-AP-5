#include <iostream>
using namespace std;

int main() {
    int tinggi, i, j, k;
    cout << "input tinggi piramida: ";
    cin >> tinggi;

    for(i=tinggi; i>0; i--){
        for (j=tinggi; j > i; j--) {
            cout << " ";
        }
        for ( k=0; k<i; k++){
            cout << j << " ";
        }
        cout << endl;
    }          
    
    return 0;
}










/*
int main() {
    int tinggi;
    cout << "input tinggi piramida: ";
    cin >> tinggi;

    for(int i=0;i<tinggi;i++){
        for (int j=tinggi; j > i+1 ;j--) {
            cout << " ";
        }
        for (int k=0; k<=i; k++){
            cout << "* ";
        }
        cout << endl;
    }          
    
    return 0;
} */