#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

struct Vozilo {
    int godina;
    int kubika;
    char naziv[200];
    void ispisi();
    void save(char *fname);
   void load(char *fname);
};

void Vozilo::ispisi() {

   cout << "naziv= " << this->naziv << endl;
   cout << "kubika " << this->kubika << endl;


}

void Vozilo::save(char *fname) {
  std::ofstream fout(fname, ios::out | ios::binary);
  fout.write( (char *) this,  sizeof(*this));

}

void Vozilo::load(char *fname) {

    std::ifstream fin(fname, ios::in | ios::binary);

    fin.read( (char *) this, sizeof(*this));
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


   char *fname = (char *)"obj5.bin";

   vozila[5].save(fname);

   vozila[9].load(fname);

   cout << "clan 9 nakon load:" << endl;
   vozila[9].ispisi();


   cout << "releasing vozila struct" << endl; 
   delete [] vozila;
   vozila = NULL;

   cout << "naziv [5]= " << vozila[5].naziv << endl;
   cout << "kubika " << vozila[5].kubika << endl;



   return 0;
}
