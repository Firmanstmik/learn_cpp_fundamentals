#include <iostream>
using namespace std;

int pangkatIterasi(int a, int b){
    int hasil = a;
    for(int i = 1; i < b; i++){
        hasil = hasil * a;
    }
    return hasil;
}

int pangkatRekursif(int a, int b){
    if (b <= 1){
        cout << "akhir dari rekursif\n";
        return a;
    } else{
        cout << "rekursif\n";
        return a * pangkatRekursif(a,(b-1));
    }
}

int main(){
    int a, b;
    cout << "Angka : ";
    cin >> a;
    cout << "Pangkat : ";
    cin >> b;
    cout << "Hasil Iterasi = " << pangkatIterasi(a,b) << endl;
    cout << "Hasil REkursif = " << pangkatRekursif(a,b) << endl;
}