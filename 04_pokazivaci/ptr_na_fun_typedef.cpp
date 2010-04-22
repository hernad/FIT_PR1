#include <iostream>

using namespace std;

//bhttp://www.java2s.com/Tutorial/Cpp/0140__Function/Usetypedeftodefineafunctiontypeforfunctionpointer.htm

typedef int (*PFun1Type) (int a, int b);


int saberi(int a, int b) {
  return a+b;
}

int oduzmi(int a, int b) {
  return a-b;
}


int main()
{

   PFun1Type pf;

   cout << "PR1 - pointeri na funkcije + typedef" << endl;

   pf = &saberi;
   cout << "saberi 6 i 5: " << (*pf)(6,5)  << endl;


   pf = &oduzmi;
   cout << "oduzmi 6 i 5: " << (*pf)(6,5)  << endl;
   

   return 0;
}
