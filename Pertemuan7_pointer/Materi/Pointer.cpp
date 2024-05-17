#include <iostream>
using namespace std;

void penjumlahan(int* a, int* b) {
    *a += *b;
    cout << *a << endl;
}

int main() {
    system("cls");
    

   //pointer declaration
    // normal vairabel = var_name(data), &var_name(address)
    int number = 16;
    //* pointer variabel = var_name(address of pointed var), *var_name(dat of pointed var)
    int *ptrnumber = &number;
    cout << "isi var number: " << number << endl;
    cout << "alamat var: " <<  &number << endl; 

    cout << "isi variabel ptrnumber: " << ptrnumber << endl;
    cout << "isi var yang ditunjuk ptrnumber: " << *ptrnumber << endl;


    //? pointer operation
    *ptrnumber=37;
    cout << "isi var number: " << number << endl;
    cout << "alamat var: " <<  &number << endl; 

    cout << "isi variabel ptrnumber: " << ptrnumber << endl;
    cout << "isi var yang ditunjuk ptrnumber: " << *ptrnumber << endl;

    cout << "alamat var ptrnumber: " << &ptrnumber << endl;

    //? pointer in array
    int num[] = {1,2,3,4,5};
    int *ptrnum = num;
    cout << "isi var num indeks 0 = " << num[0] <<endl;
    cout << "Alamat memori varibael num indeks 0 = " << &num[0] << endl;
    cout << "isi var ptrnum = " << ptrnum << endl;
    cout << "isi var yang ditunjuk oleh ptrnum = " << *ptrnum << endl; */


    ? pointer as parameter
    int a = 2;
    int b = 3;
    penjumlahan(&a,&b);
    cout << a << endl;

    pointer to pointer
    int n=4;
    int* ptrn= &n;
    int** ptr_ptrn = &ptrn;

    cout << "isi var n = " << n << endl;
    cout << "alamat var n = " <<&n << endl;
    cout << "isi var ptrn= " <<ptrn << endl;
    cout << "isi var yang ditunjjuk ptrn" << *ptrn << endl;
    cout << "alamat var ptrn= " << &ptrn << endl;
    cout << "isi var ptr_ptrn = " << ptr_ptrn << endl;
    cout << "isi var yang ditunjuk oleh ptr_ptrn=   " << *ptr_ptrn << endl;
    cout << "isi var n yang diakses dari ptr_ptrn= " << **ptr_ptrn << endl;
    cout << "alamat memori ptr_ptrn = " << &ptr_ptrn << endl;


    //dynamic pointer
    int* ptr = new int; //memory alocation
    *ptr = 24;
    cout << "isi var ptr: " << ptr << endl;
    cout << "ata yang ada di var ptr= " << *ptr << endl;
    delete ptr; //*memory de-allocation
    cout << "isi var ptr: " << ptr << endl;
    cout << "ata yang ada di var ptr= " << *ptr << endl;


    return 0;
} 