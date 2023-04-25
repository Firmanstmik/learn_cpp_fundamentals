#include <iostream>
using namespace std;

int main()
{

   /*for (int f = 1; f <= 10; f++)
    {
        cout << f << ". Namaku Firman Maulana" << endl;
    }
*/
    int awal, akhir;
    cout << "Mulai dari : ";
    cin >> awal;
    cout << "Sampai ke : ";
    cin >> akhir;
    for (int a = awal; a <= akhir; a++)
    {
        cout << a << ". Namaku Firman Maulana" << endl;
    }
}