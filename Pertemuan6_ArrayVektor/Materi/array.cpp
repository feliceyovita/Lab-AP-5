/* #include <iostream>

using namespace std;

int main() {
    int arr[5];

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    cout << "Isi array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Elemen ke-" << i << ": " << arr[i] << endl;
    }

    return 0;
} */

// #include <iostream>
// using namespace std;

// int main() {
//     system("cls");
    
//     int nilai[] = {30,55,43,90,27};
//     int i, jum = 0, mean;

//     for (i=0; i<5; i++) 
//     {
//         jum+=nilai[i];
//     }
//     mean = jum/5;
//     cout << jum << "\n" << mean;
    
//     return  0;
// }


#include <iostream>

using namespace std;

int main() {
    system("cls");

    int nilai[] = {1,2,3,4,5}; 
    for (int i=0; i<5 ; i++)
    {
        cout << "Alamat nilai [" << i << "] = " << &nilai[i] << "  " << nilai[i] << endl;
    }

    int *ptr = nilai;
    *(ptr+2) = 6;

    cout << endl;
    
        for (int i=0; i<5 ; i++)
    {
        cout << "Alamat nilai [" << i << "] = " << &nilai[i] << "  " << nilai[i] << endl;
    }

    cout << "Ukuran array= " << sizeof(nilai) << " byte" << endl;
    cout << "Jumalh member array= " << sizeof(nilai)/sizeof(int) <<endl;

    return 0;
}