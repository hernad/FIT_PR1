#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

   cout << "dereferenciranje nizova" << endl;

   int niz[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

   cout << "0+1 element " << (&niz[0])+1 << " " << setw(10) << *(&niz[0] + 1) << setw(10) << niz[1] << endl;


   cout << "3+1 element " << (&niz[3])+1 << " " << setw(10) << *(&niz[3] + 1) << setw(10) << niz[4] << endl;


   return 0;
}
