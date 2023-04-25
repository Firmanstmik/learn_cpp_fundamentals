#include <iostream>
using namespace std;

int main()
{
    cout << "MEMBANDINGKAN NILAI TES POLISI APAKAH NILAINYA LULUS TES ATAU TIDAK LULUS" << endl
         << endl;
    int kkm = 60;
    string besar = "LULUS TES :";
    string kecil = "TIDAK LULUS :";
    int nilai_tes;
    cout << "Masukkan Nilai Tes1: ";
    cin >> nilai_tes;

    if (nilai_tes > kkm)
    {
        cout << nilai_tes << " : " << besar;
    }
    else if (nilai_tes < kkm)
    {
        cout << nilai_tes << " : " << kecil;
    }
}
