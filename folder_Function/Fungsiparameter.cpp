#include <iostream>
using namespace std;

string laki(string nama, string umur){
    return(nama+" berusia "+ umur);
}

void wanita(string nama, string umur){
    cout<<"mempunyai istri bernama " <<nama<<" berusia "<<umur<<endl;
}
int main(){
    string nama; string umur;
    cout<<"nama : "; getline(cin, nama);
    cout<<"umur : "; getline(cin, umur);
    cout<<laki(nama, umur) << endl;

   
    cout<<"nama istri : "; getline(cin, nama);
    cout<<"umur istri : "; getline(cin, umur);
    wanita(nama, umur);
}