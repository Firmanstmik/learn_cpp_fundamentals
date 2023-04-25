#include <iostream>
using namespace std;

int main()
{

    cout << "Perulangan GO-TO" << endl;
    int pil;
    cout << "Masukan pilihan : ";
    cin >> pil;

    switch (pil)
    {
    case 1:
        goto satu;
    satu:
        cout << "anda masuk label 1" << endl;
        break;
    case 2:
        goto dua;
    dua:
        cout << "anda masuk label 2" << endl;
        break;
    case 3:
        goto tiga;
    tiga:
        cout << "anda masuk label 3" << endl;
        break;
    }
}