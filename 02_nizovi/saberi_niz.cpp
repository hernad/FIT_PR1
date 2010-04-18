#include <iostream>



void unos (int n[], int v)
{
  if(v==0) { 
     cin >> n[0];
     return;
  }

  cin >> n[v];
  unos(n, v-1);
}

void ispis(int n[], int v)
{
  if (v==0) {
     cout << n[v] << "\t";
     return;
  }

  cout << n[v] << "\t";
  ispis(n, v-1);
    
}


int suma(int n[], int v)
{
  if (v==0)
      return n[v];

  return n[v] + suma(n, v-1);
}

int main() {

const int velicina = 7;
int niz[velicina];

cout << "unesi niz[ " << velicina << "] (enter novi elemenat)" << endl;
 
unos(niz, velicina-1);

cout << endl;

cout << "suma iznosi: " << suma(niz, velicina-1) << endl;

cout << endl;

ispis(niz, velicina-1);

return 0;
}
