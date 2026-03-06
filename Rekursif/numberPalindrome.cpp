#include <iostream>

using namespace std;

int main() {
    int angka;
    cout << "Masukkan angka: ";
    cin >> angka; // 123

    if ( angka % 10 == 0 ) {
        cout << "Angka bukan palindrome" << endl;
    } else { 
        int reverse = 0; // angka versi dibalik, 123 = 321
        int temp = angka; // 123

        // 123 % 10 -> 3

        while ( reverse < temp ) {
            reverse = 10 * reverse + temp % 10; 
            // 30
            // 30 + 2 -> 32
            temp /= 10; // 123 -> 12

            // 123 == 321
            
        }

        if (temp == reverse || temp == reverse / 10) {
            cout << "Angkanya polindrome" << endl;
        } else {
            cout << "Angkanya bukan polindrome" << endl;
        }
    }

    return 0;
}