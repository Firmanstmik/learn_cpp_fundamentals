#include <iostream>
using namespace std;

int main(){
    char ulangi = 'y';
    int banyak = 0 ;
    char tidak = 't';
    do {
        cout<<"Apakah kamu mau mengulang?\n";
        cout<<"Jawab (y/t): ";
        cin >> ulangi;

        // increment counter
        banyak++;
    } while(ulangi == 'y');

    cout<<"\n\n----------\n";
    cout<<"Perulangan Selesai!\n";
    cout<<"Kamu mengulang sebanyak " << banyak << " kali.\n";

    return 0;
}
