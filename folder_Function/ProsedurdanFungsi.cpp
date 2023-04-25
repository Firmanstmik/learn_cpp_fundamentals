#include <iostream>
using namespace std;

//Prosedur -> Tanpa nilai kembalian
void siswa(){
    string nama = "Firman";
    string jk = "Laki-laki";
    cout << nama <<" adalah seorang " << jk << endl;
}

//Fungsi -> Memiliki nilai kembalian
string siswi(){
    string nama = "Firman Melinda";
    string jk = "Laki Perempuan";
    return(nama+" adalah seorang "+ jk);
}

int main(){
    siswa(); //Penulisan Prosedur
    cout << siswi() << endl; //Penulisan Fungsi
}