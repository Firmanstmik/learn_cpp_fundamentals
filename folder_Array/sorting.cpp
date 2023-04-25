#include <iostream>
using namespace std;

int main()
{
   int data;
   int data1[8] = {100, 2, 1, 5, 4, 15, 5, 80};
   cout << "data sebelumnya = ";

   for (int i = 0; i < 8; i++)
   {
      cout << data1[i] << " ";
   }
   cout << endl;

   for (int i = 0; i < 8; i++)
   {
      for (int j = 0; j < 8 - 1; j++)
      {
         if (data1[j] > data1[j + 1])
         {
            data = data1[j];
            data1[j] = data1[j + 1];
            data1[j + 1] = data;
         }
      }

      cout << endl;
      cout << "Tahap sorting " << i + 1 << " : ";

      for (int o = 0; o < 8; o++)
      {
         cout << data1[o] << " ";
      }
   }
   cout << endl
        << endl
        << endl;
   cout << "urutan data setelah sorting= ";
   for (int f = 0; f < 8; f++)
   {
      cout << data1[f] << " ";
   }
}
