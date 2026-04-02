#include <iostream>
using namespace std;

int main(){
    int data[] ={1, 2, 7, 3, 5,4};
    int n = 6;
    int target = 3;
    

    for (int i=0; i < n; i++ ) {
        if (data[i] == target){
            cout<<"Target ditemukan pada indeks ke-"<<i;
            break;
        }
    } 
}