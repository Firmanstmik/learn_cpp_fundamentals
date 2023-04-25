#include <iostream>
using namespace std;

// overloading = Menimpa

// basic function
int luas_ppanjang(int panjang, int lebar){
    int luas = panjang * lebar;
    return luas;
}

// Overload function
int luas_ppanjang(int panjang){
    int luas = panjang * panjang;
    return luas;
}

int main(){
    cout << "Luas Persegi Panjang 2*3 : " << luas_ppanjang(2,3) << endl;
    cout << "Luas Persegi Panjang 2*2 : " << luas_ppanjang(2) << endl;
    return 0;
    
}