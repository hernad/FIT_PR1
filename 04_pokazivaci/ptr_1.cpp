#include <iostream>

using namespace std;

void povecaj(void *data, int size) {

  switch (size) {
     case sizeof(char):  
         (*((char *)data))++; break;
     case sizeof(int):
         (*((int *)data))++; break;
  }
}

int main()
{

   int num = 77;

   int *pnum;

   pnum = &num;


   cout << "ptr_1" << endl;
   
   cout << "adresa na kojoj se nalazi broj je (pnum): " << pnum << endl;
   cout << "vrijednost tog broja je (*pnum): " << *pnum << endl;

   char cdata = 'A';
   povecaj(&cdata, sizeof(cdata));
 
   cout << "cdata nakon povecaj = " << cdata << endl;

   int idata = 100;
   povecaj(&idata, sizeof(idata));
 
   cout << "idata nakon povecaj = " << idata << endl;


   return 0;
}
