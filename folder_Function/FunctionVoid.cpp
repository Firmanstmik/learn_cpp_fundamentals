#include <iostream>
using namespace std;

//Reporter
int kuadrat(int x){ //Fungsi kembalian
    int y;
    y = x * x;
    return y;
}

//Worker
void tampilkan(int input){ //Tanpa Kembalian
    cout << "Menampilkan dengan void" << endl;
    cout << input << endl;
}

int main(){
    int input,hasil;
    cout << "nilai kuadrat dari: ";
    cin >> input;

    hasil = kuadrat(input);
    tampilkan(hasil);
    return 0;
}