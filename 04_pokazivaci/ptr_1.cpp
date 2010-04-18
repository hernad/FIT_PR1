#include <iostream>

using namespace std;

int main()
{

   int num = 77;

   int *pnum;

   pnum = &num;


   cout << "ptr_1" << endl;
   
   cout << "adresa na kojoj se nalazi broj je (pnum): " << pnum << endl;
   cout << "vrijednost tog broja je (*pnum): " << *pnum << endl;

   return 0;
}
