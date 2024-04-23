#include <iostream>
using namespace std;

int main() {
    system("cls");

    const int i = 2, k = 7, l = 1, c = 9, u = 5, s = 6;
    /*A. 
    Perhitungan manual:
    3-1<I OR K-5<8+2 AND L+7>=9+3
    2<2 OR (7<10 AND 8>=12)
    2<2 = False
    7<10 = True
    8>=12 False
    = False OR (True AND False)
    = False OR False
    = FALSE

    Pemrograman: */
    bool a = (3 - 1 < i) || ((k - 5 < 8 + 2) && (l + 7 >= 9 + 3));
    cout << "A. 3 - 1 < i OR k - 5 < 8 + 2 AND 1 + 7 > = 9 + 3 = " << endl;
    cout << "Hasil = " << a << endl;
    cout << endl;

    /*B.
    Perhitungan manual:
    l%3>u AND (c/u<s OR 3*i-k>0)
    1%3>5 AND (9/5<5 OR 3*2-7>0)
    1>5 AND (1<5 OR 1>0)
    1>5 = False
    1<5 = True
    1>0 = True
    = False AND  (True OR False)
    = False AND True
    = False

    Pemrograman: */
    bool b = ((1 % 3 > u) && ((c / u < s) || (3 * i - k > 0)));
    cout << "B. 1 % 3 > u AND (c / u < s OR 3 *i - k > 0)" << endl;
    cout << "Hasil = " << b << endl;
    cout << endl;

    /* C.
    Perhitungan manual:
    i-9>k OR l+3<4*c 
    2-9>7 OR 1+3<4*9
    -7>7 OR 4<36
    -7>7 = False
    4<36 = True
    =  False OR True
    = True
   
    Pemrograman:  */
    bool C = (i - 9 > k) || (l + 3 < 4 * c);
    cout << "C. i - 9 > k OR l + 3 < 4 * c" << endl;
    cout << "Hasil = " << C << endl;
    cout << endl;

    /*D. 
    Perhitungan manual: 
    i OR k AND l XOR 3 SHL 2 (bitwise)
    2 OR 7 AND 1 XOR 3 SHL 2
    2 = 0010
    7 = 0111
    1 = 0001
    3 = 0011
    3 SHL 2 = 0011 <<
            = 1100 = 12
    7 AND 1 = 0111
              0001
              ---- &
              0001  = 1
    2 OR 1 AND 1 XOR 12
    1 AND 1 = 0001
              0001
              ---- &
              0001 = 1
    1 XOR 12 = 0001
               1100
               ---- ^
               1101 = 13
    2 OR 13 = 0010
              1101
              ---- |
              1111 = 15
    Hasilnya = 15
    
    Pemrograman: */
    int d = (i | ((k & l) ^ (3 << 2)));
    cout << "D. i OR k AND l XOR 3 SHL 2 (bitwise) " << endl;
    cout << "Hasil = " << d << endl;
        
    return 0;
}

/*urutan prioritas:
aritmatika : ++ -- , - , * / % , + - 
bitwise : ~ , >> << , & , ^ , |
logika dan relasi: ! , > >= < <= , == != , && , ||*/