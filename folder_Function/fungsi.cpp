#include <iostream>
#include <cmath>
using namespace std;

/*
library cmath : referensi www.cppreference.com
ceil(x)      <-- pembulatan keatas
cos(x)       <-- cosinus
exp(x)       <-- eksponen
fabs(x)      <-- nilai absolut dalam float
floor(x)     <-- pembulatan kebawah
fmod(x)      <-- modulus dalam float
log(x)       <-- logaritma dengan basis natural
pow(x, y)    <-- x pangkat y
sqrt(x)      <-- akar kuadrat
sin(x)       <-- sinus
tan(x)       <-- tangen
*/

int main(){
    int x;
    cout << "menghitung akar dari x: ";
    cin >> x;

    double y = sqrt(x);
    cout << "Akarnya adalah: "<< y << endl;

    cin.get();
    return 0;
}
