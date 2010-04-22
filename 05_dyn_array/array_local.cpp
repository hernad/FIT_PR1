#include <iostream>

using namespace std;

int init_a(int **pa, int num) {

  (*pa) = new int[num];

  cout << (*pa) << endl;

  for (int i=0; i<num; i++) {
     (*pa)[i] = i;
  }

   for (int i=0; i<10; i++) {
      cout << (*pa)[i] << " ";
   }

   cout << endl;


  return num;

}

int main()
{

   cout << "PR1 - dyn array" << endl;
   
   int *a = NULL;

   init_a(&a, 10);

   cout << "a ="  << a << endl;
   
   for (int i=0; i<10; i++) {
      cout << a[i] << " ";
   }
   cout << endl;


   return 0;
}
