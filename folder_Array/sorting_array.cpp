#include <iostream>
using namespace std;

int main(){
    int nilai[] = {0, 1, 2, 9, 3, 8, 4, 6};
    int lenght = sizeof(nilai)/sizeof(*nilai);
    int temp;

    for (int a = 0; a < lenght; a++){
        for (int b = 0; b < lenght-a; b++){
            if(nilai[b] > nilai[b+1]){
                temp = nilai[b];
                nilai[b] = nilai[b+1];
                nilai[b+1] = temp;
            }
        } 
        for(int z = 0; z < lenght; z++){
                cout << nilai[z] << " | ";
            }
            cout << endl;
    }
    cout << "Hasil Sorting : " << endl;
    for(int c = 0; c < lenght; c++){
        cout << nilai[c]<<endl;
    }
}