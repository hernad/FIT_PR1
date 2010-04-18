#include "n5x5.h"

using namespace std;

void unos (int n[][5], int v)
{
 for (int i=0; i<v; i++)
    for(int j=0; j<v; j++)
    {
       cout << "n[" << i << "][" << j << "]: ";
       cin >> n[i][j];
    }
}


void ispis (int n[][5], int v)
{

 for (int i=0; i<v; i++)
 {
    for(int j=0; j<v; j++)
       cout << setw(3) << n[i][j] << "\t";
    cout << endl;
 }
}

int maxred(int n[][5], int kol, int trenutni, int max)
{

if (kol<0)
  return max;

if (n[trenutni][kol] > max)
   max = n[trenutni][kol];

return maxred(n, kol-1, trenutni, max);

}



int main() {

 const int velicina=5;
 int niz[velicina][velicina], max;

 cout << "unesite elemente kvadratne matrice" << velicina << " x " << velicina << endl;

 unos(niz, velicina);

 cout << endl;

 ispis(niz, velicina);

 for(int i=0; i<velicina; i++)
 {
    // prodji sve redove
    max = niz[0][0];
    cout << "najveca vrijednost u redu " << i+1 << " iznos " << setw(3) << maxred(niz, velicina-1, i, max) << endl;
 }

 return 0;
}
