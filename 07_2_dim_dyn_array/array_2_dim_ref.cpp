#include <iostream>
#include <assert.h>

using namespace std;

int init_a(int ** &pppa, int num) {

  cout << "ovaj primjer je karakteristican zato sto se unutar ove funkcije desava alociranje memorije" << endl;

  cout << "zato je potrebno da funkcija ima prima !pointer! na matricu kao argument" << endl;



  cout << "unutar init_a setujem dinamicku matricu n x n" << endl;


  pppa = new  int *[num];

  cout << pppa << endl;

  for (int i=0; i<num; i++) {
     (pppa)[i] = new int[num];
  }

  
  for (int i=0; i<num; i++)
      for (int j=0; j<num; j++) 
         (pppa)[i][j] = i*j;



   cout << "print unutar init_a" << endl; 
  
   cout << "zagrade oko pointer varijable ovom izrazu su obavezne  (*pppa)[i][j]  !!!" << endl;
      
        
   for (int i=0; i<num; i++) {
      for (int j=0; j<num; j++) 
          cout << (pppa)[i][j] << " ";

      cout << endl;
   
   }

   cout << endl;


  return num;

}

void delete_a(int ** &pppa, int num) {

  for (int i=0; i<num; i++) {
        // izbrisi
        delete [] (pppa)[i];
  }

  delete [] (pppa);

  pppa = NULL;

  cout << "matrica dealocirana" << endl;
  return;
}


int main()
{

   cout << "PR1 - dyn 2-dim array alokacija i dealokacija u posebnim funkcijama" << endl;

   cout << "varijanta sa ** &"  << endl;
   
   int **ppa = NULL;

   init_a(ppa, 10);

   cout << "ppa ="  << ppa << endl;

   for (int i=0; i<10; i++) {
      for (int j=0; j<10; j++) 
          cout << ppa[i][j] << " ";

      cout << endl;
   
   }

   cout << endl;

   delete_a(ppa, 10);

   assert(ppa == NULL);

   cout << "hoces li segfault da vidis ? Ukucaj onda 1, ako neces ukucaj 0:" << endl;

   int segy = 0;

   cin >> segy;

   if (segy == 0) return 0;



   cout << "ppa ="  << ppa << endl;

   for (int i=0; i<10; i++) {
      for (int j=0; j<10; j++) 
          cout << ppa[i][j] << " ";

      cout << endl;
   
   }

   cout << endl;


   return 0;
}
