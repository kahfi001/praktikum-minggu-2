/* Program Menghitung Segitiga Siku - Siku */
// NAMA  : MUHAMMAD KAHFI DJARDJANI
// NIM 	 : 20051397014
// KELAS : 2020B MI

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
 char menu;
 int alas,tinggi,sisimiring,luas,keliling;
 cout <<" Program Penghitung Segitiga Siku - Siku \n\n" << endl;
 cout <<" Pilih Menu (1|2|3|4) : \n 1. Hitung Panjang Sisi Miring \n 2. Hitung Luas \n 3. Hitung Keliling \n 4. Keluar Program "<< endl;
 cout <<" Masukkan Pilihan: ";
 cin >> menu;
 cout << endl;
 
 switch (menu)
 {
  case '1':
  {
   cout <<" Masukkan Alas: ";
   cin >> alas;
   cout <<" Masukkan Tinggi: ";
   cin >> tinggi;
   cout <<" Panjang Sisi Miring adalah: ";
   sisimiring = sqrt(alas*alas+tinggi*tinggi);
   cout << sisimiring;
  break;
  }
 
  case '2':
  {
   cout <<" Masukkan Alas: ";
   cin >> alas;
   cout <<" Masukkan Tinggi: ";
   cin >> tinggi;
   cout <<" Luas Segitiga Siku-siku adalah: ";
   luas = alas*tinggi/2;
   cout << luas; 
  break;
  }
   
  case '3':
  {
   cout <<" Masukkan Alas: ";
   cin >> alas;
   cout <<" Masukkan Tinggi: ";
   cin >> tinggi;
   cout <<" Keliling Segitiga Siku-siku adalah: ";
   keliling = alas + tinggi + sisimiring;
   cout << keliling;
  break;
  }
   
  case '4':
  {
   cout <<"terima kasih :)"; 
  break;
  }  
 }
 return 0; 
}
