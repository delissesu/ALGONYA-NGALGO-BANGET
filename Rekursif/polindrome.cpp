#include <iostream>
#include <string>

using namespace std;

int main() {
    // Looping
    // Indexing
    // Operator perbandingan

    do {

        // Input
        string teks;
        
        // Teks
        cout << "Masukkan teks: " << endl;
        cin >> teks;

        bool polindrome = true;
        
        // Panjang teks
        int panjangTeks = teks.length();

        for ( int i = 0; i < panjangTeks / 2; i++ ) {
            // kalau ga sama, skip
            // langsung lompat ke perulangan berikut
            if ( teks[i] != teks[panjangTeks - 1 - i] ) {
                polindrome = false;
                break;
            }

            // if ( teks[i] == teks[panjangTeks - 1 - i] ) {
            //     continue;
            // }

            polindrome = false;
            break;
        }


        cout << ( polindrome? "Teks ini adalah palindrome" : "Teks bukan polindrome"  ) << endl;


    } while ( true );

    return 0;
}