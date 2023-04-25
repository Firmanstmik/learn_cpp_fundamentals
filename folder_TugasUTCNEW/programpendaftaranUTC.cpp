#include <iostream>
#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <string.h>
#include <iomanip>
#include <stdlib.h>

using namespace std;

// Fungsi Tata Letak Output
void gotoxy(int x, int y){
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

// Fungsi Animasi Bergerak
void delay(unsigned int mseconds)
{
  clock_t goal=mseconds+clock();
  while(goal>clock());
}

// Deklarasi data menggunakan Struct
struct identitas{
    char nama[20],nim[10],alamat[20],email[25];
    string gender,no, varkos;
    
    };

// Implementasi struct pada function
void daftar(identitas id){

        cout<<"\t\t\t\t\t|+=================================+|\n\n\n";
        cout<<"\t\t\t\t\t|+           REGISTRASI            +|\n\n\n";
        cout<<"\t\t\t\t\t|+=================================+|\n\n\n";
    
        cout<<"\t\t\t\t\t Nama         : ";cin.getline(id.nama,20);
        cout<<"\t\t\t\t\t Alamat       : ";cin.getline(id.alamat,20);
        balik:
        cout<<"\t\t\t\t\t NIM          : ";
   
    for(int f=0; f<10; f++){
      cin>>id.nim[f];}
      
    if(id.nim[0]=='T' && id.nim[1]=='I' || id.nim[0]=='t' && id.nim[1]=='i'){{
     cout<<"\t\t\t\t\t PRODI        : TEKNIK INFORMATIKA";
     cout<<endl;}
    
   } else if(id.nim[0]=='S' && id.nim[1]=='I' || id.nim[0]=='s' && id.nim[1]=='i'){{
     cout<<"\t\t\t\t\t PRODI        : SISTEM INFORMASI";
     cout<<endl;}
   } else {
    cout << "\t\t\t\t\t Invalid NIM!!! Masukkan NIM yang benar..."<<endl;
    goto balik;
    system("cls");
   }
   
        cout<<"\t\t\t\t\t Email        : ";cin>>id.email;
        cout<<"\t\t\t\t\t Gender [L/P] : ";cin>>id.gender;
        cout<<"\t\t\t\t\t No. Hp       : ";cin>>id.no;
        getline(cin,id.varkos);


    
        system("cls");
        cout<<"\n";
       
        cout<<"\t\t\t\t\t|+_________________________________________________________________+|\n";
        cout<<"\t\t\t\t\t                        Data sedang di proses...     \n";
        cout<<"\t\t\t\t\t                                    \n";
        cout<<"\t\t\t\t\t           Info akan dikirim ke email " << id.email << endl;
        cout<<"\t\t\t\t\t                Pastikan Email yang anda masukan aktif     \n";
        cout<<"\t\t\t\t\t|+_________________________________________________________________+|\n";

       
}



int main()
{
    identitas t;
    int m;
    int a=0;
    string lagi;

  do{

  for (m = 1; m < 33; m++)
  {
  delay(80);
  system("cls");
    gotoxy(m-1,0);cout << ' ';
    gotoxy(m,0); cout << "SELAMAT DATANG DI FORM PENDAFTARAN UNIT KEGIATAN MAHASISWA";
    gotoxy(m,1); cout << "          UKM TECNOLOGY CODE STMIK LOMBOK....";
    cout << endl;
  }

  daftar(t);
  cout << "\n\t\t\t\t\t\t\t REGISTRASI LAGI [Y/N]: ";
  getline(cin,lagi);
  a++;
  system("cls");
  }while(lagi=="y"||lagi=="Y"); 
  system("cls");
  cout << "\t\t\t\t\t-----------------------------------------" << endl;
  cout << "\t\t\t\t\t    <====== Thanks For Joined ======>    " << endl;
  cout << "\t\t\t\t\t         <=== I LOVE YOU <3 ===>         " << endl;
  cout << "\t\t\t\t\t-----------------------------------------" << endl; 

} 