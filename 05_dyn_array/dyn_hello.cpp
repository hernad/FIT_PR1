#include <iostream>
#include <assert.h>

using namespace std;

int main()
{


   cout << "dyn assert" << endl;

   int *pint = NULL, *pint2 = NULL;

   pint = new int;
   assert(pint != 0);

   cout << pint << endl;

   
   assert(pint2 != 0);

   cout << pint2 << endl;

   return 0;
}
