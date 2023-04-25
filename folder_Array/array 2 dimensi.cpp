#include <iostream>
using namespace std;

int main() {
  
  int A[3][4]={{7,4,8,6},{8,9,2,4},{9,3,0,5}};
  
  for (int b=0;b<3;b++){
    for (int k=0;k<4;k++){
      cout<<A[b][k]<<" ";
    }
    cout << endl;
  }


}