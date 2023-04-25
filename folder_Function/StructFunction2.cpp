#include <iostream>
using namespace std;

struct TecnoMember{
    string namaUser[8];
    
};

string dataTecno(TecnoMember panggil){
   
    cout << "Nama user \t: "<< panggil.namaUser[8] << endl;
    return panggil.namaUser[8];
}

int main(){
   string namaUser[8]={"firman","mel","dan","can","ha","tu","ua","gaj"};
    TecnoMember t;
   
    t.namaUser[8];
     for(int a=0; a<=8; a++){
        cout << t.namaUser[a]<<" ";
    }
    
    cout << "DATA MEMBER UTC 2022 - 2023" << endl;

cout<<dataTecno(t); 
}