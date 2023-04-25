#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    a = 5;
    b = 5;
    c = 2;

    for (int x = 1; x <= a; x++){
        for (int y = 1; y < b; y++){
            cout << "* ";
        }
        cout << "*" << endl;
    }
}