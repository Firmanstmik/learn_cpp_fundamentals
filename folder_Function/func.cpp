#include <iostream>
#include <stdlib.h>

using namespace std;

void siswa(string nama, int nim){
    cout << "Siswa dengan nilai tertinggi : " << nama << " NIM : " << nim;
}

string grades(int nilai){
    if(nilai > 75){
        cout << "Tertinggi" << endl;
    } else if(nilai > 45 && nilai < 75){
        cout << "Terendah" << endl;
    }
    return nilai;
}

int main (){
    cout << "Masukan Nama : ";
    getline(cin,nama);
    cout << "Masukan NIM : ";
    cin >> nim;
    system("cls");
    cout << "Nilai siswa : ";
    cin >> nilai;
    siswa(nama,nim);
    cout << grades(nilai);
}