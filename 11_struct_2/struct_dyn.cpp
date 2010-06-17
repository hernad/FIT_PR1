#include <iostream>
#include <string.h>

using namespace std;

struct Vozilo {
    int godina;
    int kubika;
    char naziv[200];

};

int main()
{


   Vozilo *vozila;

   char nazivi[2][100] = { "naz 1", "naz 2" };

   vozila = new Vozilo[10];

   cout << nazivi[0] << endl;

   strcpy(vozila[5].naziv, nazivi[0]);
   vozila[5].kubika = 1000;

   cout << "naziv [5]= " << vozila[5].naziv << endl;
   cout << "kubika " << vozila[5].kubika << endl;


   cout << "naziv [9]= " << vozila[9].naziv << endl;
   cout << "kubika " << vozila[9].kubika << endl;



   cout << "releasing vozila struct" << endl; 
   delete [] vozila;
   vozila = NULL;

   cout << "naziv [5]= " << vozila[5].naziv << endl;
   cout << "kubika " << vozila[5].kubika << endl;



   return 0;
}
