#include <iostream>
using namespace std;

int main (){
    int karyawan, gaji_perm, gaji_perb, gaji_pert, insentif;
    cout << "PROGRAM PEMBAGIAN GAJI" << endl;
    gaji_perb = 2500;
    insentif = 500;

    cout << "Masukan Jumlah Karyawan: ";
      cin >> karyawan;
     char masih = 'y';
    int banyak = 1 ;
    char tidak = 't';
    do {
        cout<<"Apakah Masih ada karyawan ?\n";
        cout<<"Jawab [ y/t ]: ";
        cin >> masih;
        cout << "Proses 1"<<endl;
        // increment counter
        banyak++;
    } while(masih == 'y');

    cout<<"\n\n----------\n";
    cout<<"Pembagian gaji Selesai!\n";
    cout<<"Karyawan yang telah diberi gaji sebanyak " << banyak << " kali.\n";


    
}