#include <iostream>
#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <string.h>
#include <iomanip>
#include <stdlib.h>

using namespace std;

void gotoxy(int x, int y){
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void delay(unsigned int mseconds)
{
  clock_t goal=mseconds+clock();
  while(goal>clock());
}


    int kode;
    
    struct identitas{
    char nam[20],np[20], almt[20], jur[20];
    int kode, a, ku;
    };

    int main()
{

int a=-1;
identitas id[100];
char jawab, lagi, pass[6];//variabel untuk pengulangan
char na[20], nma[20], nim[15], nh[25], ket[25], nama[20], kelas[8],
abs[10], jursn[20];
int kode, m, i, k, kk, ns, kls, n, spp, up, tb,
nm, nu, nq, n_aktif, n_hadir, dnr, total, rata, tmp, data[20];

char mad;
mad = 'Y';

while (mad == 'Y'|| mad == 'y'){
  {system("cls");}
  int m,i;
  for (m = 1; m < 20; m++)
  
  {
    delay(120);
    gotoxy(m-1,0);cout << ' ';
    gotoxy(m,0); cout << "SELAMAT DATANG DI STMIK LOMBOK";
    cout << endl;
  }
  {
    kp:
      cout<<setw(60); cout <<"--------------------------------"<<endl;
     
      cout<<setw(38); cout << "LAYANAN YANG ADA : "<<endl;
      cout<<setw(33); cout << "1. PENDAFTARAN "<<endl;
      cout<<setw(35); cout << "2. BIAYA KULIAH "<<endl;
      
     cout<<setw(52); cout << "Silahkan pilih menu [1...2]: "; cin>>kode;
  }
  switch(kode) {{system("cls");}
  case 1 : 
    {{system("cls");}
    
    {
      ku:
        a++;
        system ("cls");
        cout<<"\t|+=================================+\n";
        cout<<"\t|+           PENDAFTARAN           +\n";
        cout<<"\t|+=================================+\n";
        cout<<"\t|Nama        : ";cin>>id[a].nam;
        cout<<"\t|No peserta  : ";cin>>id[a].np;
        cout<<"\t|No. Hp      : ";cin>>id[a].no;
        cout<<"\t|Jurusan     : ";cin>>id[a].jur;
        cout<<"\t|Alamat      : ";cin>>id[a].almt;
      
        cout<<"\n";
        
        cout<<"\t|+=================================+\n";
        cout<<"\t|+      Data berhasil disimpan     +\n";
        cout<<"\t|+                                 +\n";
        cout<<"\t|+           Terimakasih           +\n";
        
        ask:
          cout <<"Input data selanjutnya ? <y/n> : "; cin >> lagi;
          if (lagi == 'y' || lagi == 'Y')
          {
            goto ku;
          } 
          else if (lagi == 't' || lagi == 'T')
          {
            goto kp;
          } 
          else 
          {
            cout << "input salah !!! \n";
            goto ask;
          }
        
    }}
  break;
  
  case 2:
    {{system ("cls")};}
    cout <<"|----------------------------------------|"<<endl;
    cout <<"|           DAFTAR BIAYA KULIAH          |"<<endl;
    cout <<"|----------------------------------------|"<<endl;
    cout <<"| Gelombang | Registrasi |       SPP     |"<<endl;
    cout <<"|     1     | Rp.100.000 | Rp.2.500.000  |"<<endl;
    cout <<"|     2     | Rp.100.000 | Rp.2.550.000  |"<<endl;
    cout <<"|     3     | Rp.100.000 | Rp.2.600.000  |"<<endl;
    cout <<"|----------------------------------------|"<<endl;
    
    cout << "Nama               = "; cin >> na;
    cout << "Nim                = "; cin >> n;
    cout << "Gelombang [1/2/3]  = "; cin >> k;
    
    if (k == 1){
      spp = 100000;
      up  = 2500000;
    } else if (k == 2){
      spp = 100000;
      up  = 2550000;
    } else if {
      spp = 100000;
      up  = 2600000;
    } 
    tb = up+spp;
    cout << "|--------------------------------------------|"<<endl<<endl;
    cout << "|Uang registrasi            = "<<spp<<"|"<<endl;
    cout << "|Uang SPP                   = "<<up<<"|"<<endl;
    cout << "|Total biaya per semester   = "<<tb<<"|"<<endl;
    cout << "|--------------------------------------------|"<<endl<<endl;
  }
  break;
}

cout <<"Masih ada data <y/n> = "; cin >> mad;
cout << endl;
}