#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> ukuran(n);
    for ( int i = 0; i < n; i++ ) cin >> ukuran[i];

    string targetUkuran;
    cin >> targetUkuran;
    
    int kiri = 0;
    int kanan = ukuran.size() - 1;

    string hasil = "";
    int percobaan = -1;

    while ( kiri <= kanan ) {
        if ( ukuran[kiri] == targetUkuran ) {
            hasil = ukuran[kiri];
            percobaan = kiri + 1;
            break; 
        }

        if ( kiri != kanan && ukuran[kanan] == targetUkuran ) {
            hasil = ukuran[kanan];
            percobaan = kanan + 1;
            break;
        }

        kiri++, kanan--;
    }

    if ( percobaan == -1 ) {
        cout << "Ukuran yang cocok tidak ditemukan." << endl;
    } else {
        cout << "Ukuran yang cocok ditemukan: " << hasil << endl
        << "Diocoba pada percobaan ke-" << percobaan << endl;
    }
}