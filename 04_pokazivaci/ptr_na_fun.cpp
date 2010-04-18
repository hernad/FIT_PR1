#include <iostream>

using namespace std;

int naKvadrat(int broj)
{
   return broj*broj;
}

int naKub(int broj)
{
   return broj*broj*broj;
}


int main()
{

   cout << "pokazivaci na funkcije" << endl;

   int (*pf1) (int num);

   pf1 = &naKub;

   cout << "naKub:" << (*pf1)(2) << endl;
   
   pf1 = &naKvadrat;
   cout << "naKvadrat:" << (*pf1)(2) << endl;

 
   return 0;
}
