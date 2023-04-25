#include <iostream>
using namespace std;

int main(){
    int max = 5;
    int barang = -1;
    string keranjang[max];
    char lanjut;

    do{
        system("cls");
        if(barang < max-1){ 
            barang++;
            cout << "Masukkan barang : ";
            cin >> keranjang[barang];
            cout <<keranjang[barang]<<" berhasil ditambahkan"<<endl;
        } else {
           cout << "Keranjang penuh !"<< endl;
        }
        cout << "==============================="<< endl;
        cout << "Isi keranjang saat ini : "<< endl;
        for(int a = 0; a <= barang; a++){
            cout << a+1 <<". "<<keranjang[a]<< endl;
        }
        cout << "Lanjutkan Program <y/n> ? " << endl;
        cout << "Jawaban : ";
        cin >> lanjut;
    } while (lanjut == 'y');
    cout << "Program Selesai"<< endl;
}