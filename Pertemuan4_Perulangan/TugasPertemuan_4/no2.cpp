#include <iostream>
using namespace std;

int main() {
    system("cls");
    string kalimat;
    char huruf;
    cout << "Sebuah kalimat: ";
    cin >> kalimat;
    getline(cin, kalimat);
    cout << "Masukkan huruf yang ingin dihapus: ";
    cin >> huruf
    
    return 0;
} 

#include <iostream>
using namespace std;

int main() 
{
    string kalimat;
    char h;
    char ulang;

    //perulangan label
    x :

        system("CLS");
    
    cout << "=======================================================" << endl;
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    cout << "Masukkan sebuah huruf yang ingin dihilangkan: ";
    cin >> h;
    
    for (char c : kalimat)
    {
        if (c == tolower(h) || c == toupper(h))
        {
            continue;
        }
        cout << c; 
    }

    cout << endl;
    cout << "Karakter terhapus = " << h;

    cout << endl << endl;
    cout << "Apakah Anda ingin mengulang program (Y/T) ? ";
    cin >> ulang;
    ulang = toupper(ulang);

        //agar inputan tidak berlanjut ke inputan selanjutnya
        getchar();

    if (ulang == 'Y')
    {
        goto x;
    }

    cout << "Terima kasih telah memakai program ini " << endl;
    cout << "=======================================================" << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    string kalimat,kalimat_baru;
    char huruf;
    int karakter;

    cout<<"Program Kalimat\n";
    cout<<"Masukan Kalimat: ";
    getline(cin,kalimat);
    cout<<"Masukan Huruf: ";
    cin>>huruf;

    karakter=0;
    kalimat_baru="";
    for (char c:kalimat){
        if (c != toupper(huruf)&& c!=tolower(huruf)){
            kalimat_baru +=c;
        }else{
            karakter++;
        }
    }
    
    cout<<kalimat_baru<<endl;
    cout<<"Karakter Terhapus= "<<karakter;
    
    return 0;
}