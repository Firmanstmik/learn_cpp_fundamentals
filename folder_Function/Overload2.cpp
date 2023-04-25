#include <iostream>
using namespace std;

int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x * y;
}

int main() {
  int fir1 = plusFunc(8, 5);
  double fir2 = plusFunc(4.3, 6.26);
  cout << "Int: " << fir1 << "\n";
  cout << "Double: " << fir2 << endl;
  return 0;
}