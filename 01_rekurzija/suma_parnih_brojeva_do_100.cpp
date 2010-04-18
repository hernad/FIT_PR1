#include <iostream>

using namespace std;

int sumaParnih_do_100(int num) {

  int plus_minus = 1;

  if (num == 100) return 100;

  // oduzimaj
  if (num > 100) plus_minus = -1;


  if ( (num % 2) == 0) {
          cout << "--- debug dodajem: " << num << endl;
          return sumaParnih_do_100(num + plus_minus * 2 ) + num ;
  } else { 
          // neparan npr. 99
	  return sumaParnih_do_100(num + plus_minus); 
  }
     
}

int main() {
   
 int sabrati;

 cout << "ver 0.03 refactored" << endl << endl;

 cout << "unesi broj za sabiranje: ";
 cin >> sabrati;

 cout << "suma svih parnih brojeva izmedju " << sabrati << " i 100 je " << sumaParnih_do_100(sabrati);

 cout << endl;

 return 0;
}
