#include <iostream>

using namespace std;

int main()
{

   int i1 = 100;

   const int ic1 = 500;

   const int* p1;

   p1 = &i1;

   cout << *p1 << endl;


   p1 = &ic1;
   cout << *p1 << endl;


   cout << "ako pokusamo: *p1 = 4" << endl;
   cout << "ptr_2.cpp:18: error: assignment of read-only location ‘* p1’" << endl;


   cout << "sa gcc ovo ne radi: int* const p2;" << endl;
   cout << "dobijam error: ptr_2.cpp:22: error: uninitialized const ‘p2’" << endl;

   cout << "ako pokusamo: p2 = &i1" << endl;
   cout << "ptr_2.cpp:24: error: assignment of read-only variable ‘p2’" << endl;

   int n[5] = {10, 20, 30, 40, 50};
   cout << "int n[5] = {10, 20, 30, 40, 50}" << endl;

   int *p3, *p4;

   p3 = &n[0];


   p4 =  p3 + 2; 

   cout << "p4-p3 = " << p4 - p3 << endl;
   cout << "p4= " << p4 << " p3= " <<  p3 << endl;

   void *p3b, *p4b;

   p3b = (void *)p3; p4b = (void *)p4;
   cout << "p4b-p3b = " <<  (char *)p4b - (char *)p3b << endl;
   cout << "pb= " << p4b << " p3b= " <<  p3b << endl;



   cout << "*p4 bi trebao pokazati treci element array-a:" << *p4 << endl;


   return 0;
}
