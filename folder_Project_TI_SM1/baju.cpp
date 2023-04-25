#include <iostream>
using namespace std;
int main()
{
    // JUDUL
    cout << "||======================|=======================||" << endl;
    cout << "||              PROGRAM ONLINE SHOP             || " << endl;
    cout << "||======================|=======================||" << endl;

    // DEKLARASI VARIABLE
    string nama1, nama2, nama3, nama4, nama5, nama6;
    int pesanan1, pesanan2, pesanan3, pesanan4, pesanan5, pesanan6;

    // ALGORITMA INPUT OUTPUT
    cout << "||======================|=======================||" << endl;
    cout << "||    DAFTAR BARANG     |      HARGA BARANG     ||" << endl;
    cout << "||======================|=======================||" << endl;
    cout << "||1. Baju Distro        |       Rp. 99.000      ||" << endl;
    cout << "||----------------------|-----------------------||" << endl;
    cout << "||2. Celana Jeans       |       Rp. 80.000      ||" << endl;
    cout << "||----------------------|-----------------------||" << endl;
    cout << "||3. Kemeja Hitam       |       Rp. 85.000      ||" << endl;
    cout << "||----------------------|-----------------------||" << endl;
    cout << "||4. Daster Merah       |       Rp. 40.000      ||" << endl;
    cout << "||----------------------|-----------------------||" << endl;
    cout << "||5. Daster Hjau Motif  |       Rp. 45.000      ||" << endl;
    cout << "||______________________|_______________________||" << endl;
    cout << "||6. Jaket Lev'is       |       Rp. 250.000     ||" << endl;
    cout << "||______________________|_______________________||" << endl;

    pesanan1 = 99000;
    nama1 = "Baju Distro";
    pesanan2 = 80000;
    nama2 = "Celana Jeans";
    pesanan3 = 85000;
    nama3 = "Kemeja Hitam";
    pesanan4 = 40000;
    nama4 = "Daster Warna Merah";
    pesanan5 = 45000;
    nama5 = "Daster Warna HIjau";
    pesanan6 = 250000;
    nama6 = "Jaket Lev'is";

    int pilih;
    cout << endl;
    cout << "-----------------------------------------" << endl;

    char ulangi = 'y';
    int banyak = 0;

    do
    {

        cout << "Pilih Pesanan Anda : ";
        cin >> pilih;

        // PROSES OUTPUT

        if (pilih == 1)
        {
            cout << "-----------------------------------------" << endl;
            cout << "Pesanan : " << nama1 << " | Harga : $" << pesanan1 << endl;
            cout << "-----------------------------------------" << endl;
        }
        else if (pilih == 2)
        {
            cout << "-----------------------------------------" << endl;
            cout << "Pesanan : " << nama2 << " | Harga : $" << pesanan2 << endl;
            cout << "-----------------------------------------" << endl;
        }
        else if (pilih == 3)
        {
            cout << "-----------------------------------------" << endl;
            cout << "Pesanan : " << nama3 << " | Harga : $" << pesanan3 << endl;
            cout << "-----------------------------------------" << endl;
        }
        else if (pilih == 4)
        {
            cout << "-----------------------------------------" << endl;
            cout << "Pesanan : " << nama4 << " | Harga : $" << pesanan4 << endl;
            cout << "-----------------------------------------" << endl;
        }
        else if (pilih == 5)
        {
            cout << "-----------------------------------------" << endl;
            cout << "Pesanan : " << nama5 << " | Harga : $" << pesanan5 << endl;
            cout << "-----------------------------------------" << endl;
        }
        else if (pilih == 6)
        {
            cout << "-----------------------------------------" << endl;
            cout << "Pesanan : " << nama6 << " | Harga : $" << pesanan6 << endl;
            cout << "-----------------------------------------" << endl;
        }
        else
        {
            cout << "-----------------------------------------" << endl;
            cout << "## Pesanan tidak valid ##" << endl;
            cout << "-----------------------------------------" << endl;
        }

        cout << "Apakah anda ingin memesan lagi?\n";
        cout << "Jawab (y/t): ";
        cin >> ulangi;

        // increment
        banyak++;

    } while (ulangi == 'y');
    cout << "||======================|========================||" << endl;
    cout << "|| Jumlah Pesanan sebanyak : " << banyak << " [ == CECKOUT == ] ||" << endl;
    cout << "||======================|========================||" << endl;
}