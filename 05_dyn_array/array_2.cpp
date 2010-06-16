#include <iostream>
#include <assert.h>

using namespace std;

int init_a(int *pa[], int num) {

  cout << "ovaj primjer je karakteristican zato sto se unutar ove funkcije desava alociranje memorije" << endl;

  cout << "zato je potrebno da funkcija ima prima !pointer! na matricu kao argument" << endl;



  cout << "unutar init_a setujem dinamicku matricu" << endl;


  (*pa) = new int[num];

  cout << *pa << endl;

  for (int i=0; i<num; i++) {
     (*pa)[i] = i;
  }

   cout << "print unutar init_a" << endl; 
  
   cout << "zagrade oko pointer varijable ovom izrazu su obavezne  (*pa)[i]  !!!" << endl;
      
   for (int i=0; i<num; i++) {
       
       cout << (*pa)[i] << " ";
   
   }

   cout << endl;


  return num;

}

void delete_a(int *pa[]) {

  delete [] (*pa);

  *pa = NULL;

  cout << "matrica dealocirana" << endl;
  return;
}


int main()
{

   cout << "PR1 - dyn 2-dim array alokacija i dealokacija u posebnim funkcijama" << endl;
   
   int *pa = NULL;

   init_a(&pa, 10);

   cout << "pa ="  << pa << endl;
   
   for (int i=0; i<10; i++) {
      cout << pa[i] << " ";
   }
   cout << endl;


   delete_a(&pa);

   assert(pa == NULL);

   cout << "hoces li segfault da vidis ? Ukucaj onda 1, ako neces ukucaj 0:" << endl;

   int segy = 0;

   cin >> segy;

   if (segy == 0) return 0;

   cout << "pa ="  << pa << endl;
    
   for (int i=0; i<10; i++) {
      cout << pa[i] << " ";
   }
   cout << endl;


   return 0;
}
