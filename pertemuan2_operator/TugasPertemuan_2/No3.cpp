#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

#define phi 3.14

void luasPermukaanPrismaSegitiga(double alas, double tinggiAlas, double tinggiPrisma) {
    double luasAlas = 0.5 * alas * tinggiAlas;
    double luasPermukaan = (2*luasAlas) + (3*tinggiPrisma*alas);
    double volume = luasAlas * tinggiPrisma;
    cout << fixed << setprecision(2);
    cout << "Luas permukaan prisma segitiga: " << luasPermukaan << " cm^2" << endl;
    cout << "Volume prisma segitiga: " << volume << " cm^3" << endl;
}

void luasPermukaanPrismaSegiEmpat(double panjang, double lebar, double tinggiPrisma) {
    double luasAlas = panjang*lebar;
    double luasPermukaan = (2 * (panjang*tinggiPrisma)) + (2 * (lebar*tinggiPrisma)) + (2 * luasAlas);
    double volume = luasAlas * tinggiPrisma;
    cout << fixed << setprecision(2);
    cout << "Luas permukaan prisma segi empat: " << luasPermukaan << " cm^2" << endl;
    cout << "Volume prisma segi empat: " << volume << " cm^3" << endl;
}

int main() {
    system("cls");
    int pil, pilihan;
    double r, tinggi, alas, tinggiLimas, tinggiAlas, sisitegak, panjang, lebar, tinggiPrisma;
    double selimut, lp, vol, luas_sisi_tegak;
    string bangunruang;

    cout << "Program menghitung luas permukaan dan volume bangun ruang\nPilih salah satu: ";
    cout << "\n1. Kerucut\n2. Limas Segitiga\n3. Bola\n4. Prisma\n";
    cout << "Pilihan: ";
    cin >> pil;

    switch (pil) {
        case 1: 
            system("cls");
            bangunruang = "Kerucut";
            cout << "Masukkan jari-jari dan tinggi " << bangunruang << ": \n";
            cout << "Jari-jari (cm) : "; cin >> r;
            cout << "Tinggi (cm): "; cin >> tinggi;
            selimut = sqrt(r*r + tinggi*tinggi);
            lp = phi*r*(r+selimut);
            vol = (1.0/3)*phi*r*r*tinggi;
            cout << fixed << setprecision(2);
            cout << "Luas permukaan " << bangunruang << ": " << lp << " cm^2"<< endl;
            cout << "Volume " << bangunruang << ": " << vol << " cm^3" << endl;
            break;

        case 2:
            system("cls");
            bangunruang = "Limas Segitiga";
            cout << "Masukkan alas, tinggi, dan sisi\n" << bangunruang << ":\n";
            cout << "Alas (cm): "; cin >> alas;
            cout << "Tinggi alas segitiga (cm): "; cin >> tinggiAlas;
            cout << "Tinggi sisi tegak (cm): "; cin >> sisitegak;
            cout << "Tinggi limas (cm): "; cin >> tinggiLimas; //untuk rumus volume

            luas_sisi_tegak = 0.5 * alas * sisitegak;
            lp = (0.5 * alas * tinggiAlas) + (3 * luas_sisi_tegak);
            vol = 1.0/3*(1.0/2 * alas * tinggiAlas) * tinggiLimas;
            cout << fixed << setprecision(2);
            cout << "Luas permukaan " << bangunruang << ": " << lp << " cm^2"<< endl;
            cout << "Volume " << bangunruang << ": " << vol << " cm^3" << endl;
            break;

        case 3:
            system("cls");
            bangunruang = "Bola";
            cout << "Masukkan jari-jari " << bangunruang << ":\n"; cin >> r;
            lp = 4 * phi * r * r;
            vol = 4.0/3 * phi * r * r * r;
            cout << fixed << setprecision(2);
            cout << "Luas permukaan " << bangunruang << ": " << lp << " cm^2"<< endl;
            cout << "Volume " << bangunruang << ": " << vol << " cm^3" << endl;
            break;

        case 4:
            system("cls");
            bangunruang = "Prisma";
            cout << "Pilih jenis prisma:\n";
            cout << "1. Prisma Segitiga\n";
            cout << "2. Prisma Segi Empat\n";
            cout << "Pilihan: ";
            cin >> pilihan;
            switch (pilihan) {
                case 1:
                    cout << "Masukkan panjang alas segitiga: ";
                    cin >> alas;
                    cout << "Masukkan tinggi alas segitiga: ";
                    cin >> tinggiAlas;
                    cout << "Masukkan tinggi prisma: ";
                    cin >> tinggi;
                    luasPermukaanPrismaSegitiga(alas, tinggiAlas, tinggi);
                    break;
                case 2:
                    cout << "Masukkan panjang prisma segi empat: ";
                    cin >> panjang;
                    cout << "Masukkan lebar prisma segi empat: ";
                    cin >> lebar;
                    cout << "Masukkan tinggi prisma segi empat: ";
                    cin >> tinggiPrisma;
                    luasPermukaanPrismaSegiEmpat(panjang, lebar, tinggiPrisma);

                    break;
                default: cout << "Input Anda Salah\n";break;
            }
            break;
        default: cout << "Input Anda Salah\n";break;
    }
    return 0;
}
