#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int jmlarr;
    cout<<"Jumlah Indeks : ";
    cin>>jmlarr;
    string angka[jmlarr];
    
      for(int f=0; f<jmlarr; f++){
      cout<<"Masukkan Nilai Indeks ke-"<<f<<": ";
      cin>>angka[f];      
    }
    
      cout<<"°°°°°°°°°°°°°°°°°°°°°°°\n";
      cout<<"Nilai yang tersimpan\n";
      cout<<"°°°°°°°°°°°°°°°°°°°°°°°\n";
      
      for(int i=0; i<jmlarr; i++){
      cout<<"Indeks ke-"<<i<<": "<<angka[i];
      }
   
}