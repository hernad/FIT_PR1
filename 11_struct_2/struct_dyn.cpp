#include <iostream>
#include <string.h>

using namespace std;

struct Vozilo {
    int godina;
    int kubika;
    char naziv[200];
    void ispisi();
};

void Vozilo::ispisi() {

   cout << "naziv= " << naziv << endl;
   cout << "kubika " << kubika << endl;


}

int main()
{


   Vozilo *vozila;

   char nazivi[2][100] = { "naz 1", "naz 2" };

   vozila = new Vozilo[10];

   cout << nazivi[0] << endl;

   strcpy(vozila[5].naziv, nazivi[0]);
   vozila[5].kubika = 1000;

   
   cout << "clan 5:" << endl;
   vozila[5].ispisi();

   cout << "clan 9:" << endl;
   vozila[9].ispisi();


   cout << "releasing vozila struct" << endl; 
   delete [] vozila;
   vozila = NULL;

   cout << "naziv [5]= " << vozila[5].naziv << endl;
   cout << "kubika " << vozila[5].kubika << endl;



   return 0;
}
