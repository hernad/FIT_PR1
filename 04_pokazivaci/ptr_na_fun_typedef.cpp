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

int saberi_od_do(int a, int b) {

  if ((a > b) || (a<0))
      return -1;
   
  if (a == b) {
   cout << "saberi od_do return " << a << endl;
   return a;
  }

  PFun1Type self_addr = &saberi_od_do;


  cout << "saberi od do - dodaj dodaj i " << a << endl;
  int ret = a + (*self_addr) (a+1, b);

  cout << "međurezultat " << ret << endl;

  return ret;
}


int main()
{

   PFun1Type pf;

   cout << "PR1 - pointeri na funkcije + typedef" << endl;

   pf = &saberi;
   cout << "saberi 6 i 5: " << (*pf)(6,5)  << endl;


   pf = &oduzmi;
   cout << "oduzmi 6 i 5: " << (*pf)(6,5)  << endl;
   
 
   pf = &saberi_od_do;

   cout << "saberi od 3, 6: " << (*pf)(3, 6) << endl;

   return 0;
}
