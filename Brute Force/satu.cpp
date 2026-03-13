#include <iostream>
#include <string>
using namespace std;

int main() {
    char huruf[] = "abcdefghijklmnopqrstuvwxyz";
    int panjangHuruf = sizeof(huruf);
    string tebakan = "    ";

    string targetPassord = "abcd";
    bool ketemu = false;

    for ( int i = 0; i < panjangHuruf; i++ ) {
        tebakan[0] = huruf[i];
        for ( int j = 0; j < panjangHuruf; j++) {
            tebakan[1] = huruf[j];
            for ( int k = 0 ; k < panjangHuruf; k++ ) {
                tebakan[2] = huruf[k];
                for ( int l = 0; l < panjangHuruf; l++ ) {
                    tebakan[3] = huruf[l];
                    
                    if ( tebakan == targetPassord ) {
                        cout << "Ketemu: " << tebakan << endl;
                        ketemu = true;
                        break;
                    }
                }
            }
        }
        
    } if ( !ketemu ) {
        cout << "Tidak ketemu" << endl;
    }

}