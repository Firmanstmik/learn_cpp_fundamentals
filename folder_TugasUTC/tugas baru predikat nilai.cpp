#include <iostream>
using namespace std;


int main()
{
    int quis, uts, uas, praktik;
    int rata_rata;
    int banyaknya_nilai =4;
    
    cout << "masukkan nilai quis = ";
    cin >> quis;
    
    cout << "masukkan nilai uts = ";
    cin >> uts;
    
    cout << "masukkan nilai uas = ";
    cin >> uas;
    
    cout << "masukkan nilai praktik = ";
    cin >> praktik;
    
    cout << "rata rata dari keempat value tersebut adalah ";
    rata_rata = (quis + uts + uas + praktik)/banyaknya_nilai;
    
    //rata rata menggunakan kondisi if/else
    int rata_akhir;
    cout << rata_rata << endl;
    
    if (rata_rata >= 90)
    cout << "maka predikat A" << endl;
    
    else if (rata_rata >= 80)
    cout << "maka predikat B" << endl;
    
    else if (rata_rata >= 70)
    cout << "maka predikat C" << endl;
    
    else if (rata_rata >= 60)
    cout << "maka predikat D" << endl;
    
    else if (rata_rata >= 50)
    cout << "maka predikat Tidak Lulus" << endl;
}