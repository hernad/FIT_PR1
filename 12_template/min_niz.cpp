#include <iostream>

using namespace std;


template <class E> 
E a_min(E *niz, int velicina) {

  E rez;
  
  rez = niz[0];

  cout << "najmanji = " << rez << endl;
  for (int i=1; i<velicina; i++) {

     if (niz[i] < rez)  {
                 rez = niz[i];
                 cout << "najmanji za sada = " << rez << endl;
     } else
                 cout << "ovaj je veci = " << niz[i] << endl;
 


  }

  return rez;
}


int main() {

    int *niz;
    
    
    niz = new int(10);
    
    for (int i=9, i2=0; i>=0; i--, i2++)
        niz[i2] = (i+1)*2;

    
    cout << "niz:" << endl;
    for (int i=0; i<10; i++)
        cout << niz[i] << " ";
    cout << endl;

    cout << "najmanji elemenat niza je :" <<  a_min<int>(niz, 10) << endl;

    return 0;
}
