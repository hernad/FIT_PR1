#include <iostream>

using namespace std;

int main()
{

   char niz[100]; int i=0;
   
   char chr;
   cin.get(chr);

   cin.ignore(100, '\n');
   cout << "chr=" << chr << endl;

   while (cin.get( niz[i] )) {
       if (niz[i++] == '\n') {
           niz[--i] = '\0';
           break;
       }
   }

   cout << "niz =" << niz << endl;

   return 0;
}
