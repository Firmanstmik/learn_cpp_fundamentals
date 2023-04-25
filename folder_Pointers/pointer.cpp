#include <iostream>
using namespace std;

int main (){
    string a = "Firman";
    int b;

    string *c = &a;
    string d = *c;
    cout << "alamat a : " << &a << endl;
    cout << "alamat b : " << &b << endl;
    cout << "c : " << c << endl;
    cout << "d : " << d << endl;

    // * = reference -> menyimpan alamat dari variable di memori
    // & = dereference -> mengetahui alamat dari sebuah variable

}