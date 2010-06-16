#include <iostream>

using namespace std;

int main()
{

   int num;
   cin >> num;

   cout << "dyn assert" << endl;

   int *pint;

   pint = new int;

   assert(pint != 0);

   cout << pint << endl;

   return 0;
}
