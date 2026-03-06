#include <iostream>
#include <string>
#include <algorithm> // Library untuk fungsi reverse

using namespace std;

int main() {
    string asli, balik;
    cout << "Masukkan kata: ";
    cin >> asli;
// 
    balik = asli; // Salin kata asli ke variabel baru
    
    // Membalikkan string menggunakan fungsi bawaan
    reverse(balik.begin(), balik.end());

    if (asli == balik) {
        cout << "Hasil: Palindrome";
    } else {
        cout << "Hasil: Bukan Palindrome";
    }

    return 0;
// }