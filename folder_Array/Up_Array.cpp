#include <iostream>
using namespace std;

int main(){
    int max = 5;
    int barang = -1;
    string keranjang[max];
    string temp;
    int pilihan, no_index;

    do{
        cout << "Pilihan \n1. Tambah\n2. Ubah\n3. Selesai"<< endl;
        cout << "Pilihan : ";
        cin >> pilihan;
        system("cls");
        switch(pilihan){
            case 1:
               if(barang < max-1){ 
               barang++;
                  cout << "Masukkan barang : ";
                  cin >> keranjang[barang];
                  cout <<keranjang[barang]<<" berhasil ditambahkan"<<endl;
        } else {
           cout << "Keranjang penuh !"<< endl;
        }
        break;

               case 2:
                cout << "Barang yang diubah : ";
                cin >> no_index;
                cout << "index Awal : "<< keranjang[no_index-1]<< endl;
                cout << "index baru : ";
                cin >> temp;
                keranjang[no_index-1] = temp;
        break;

                case 3: 
                pilihan = 3;
                break;

                default : 
                cout << "Pilihan Salah"<< endl;
                break;
        }
        cout << "==============================="<< endl;
        cout << "Isi keranjang saat ini : "<< endl;
        for(int a = 0; a <= barang; a++){
            cout << a+1 <<". "<<keranjang[a]<< endl;
        }
      
    } while (pilihan != 3);
    cout << "Program Selesai"<< endl;
}