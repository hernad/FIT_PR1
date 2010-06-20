#include <iostream>
#include <bitset>

using namespace std;

void PretvoriUBinarni(int broj) {

  cout << "poziv PretvoriUBinarni " << broj << endl;

  if (broj <= 1) {
     cout << broj;
     return;
  }

  int bit = broj % 2;
  broj /= 2;

  PretvoriUBinarni(broj);

  cout << bit;
}


int main()
{

   int broj = 0;

   do {
     cout << "unesite broj: ";
     cin >> broj;
 
     cout << "rezultat je " ;
     PretvoriUBinarni(broj); 
     cout << endl;


     // http://www.sgi.com/tech/stl/bitset.html

     bitset<16> binarno(broj);

     cout << "provjera sa bitset: " << binarno;  

     cout << "-------------------------------" << endl;
   } while (broj>=0);
}
