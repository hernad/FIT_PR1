#include <iostream>

using namespace std;

int sumaParnih_do_100(int num) {

  int rez, in_num = num;

  if (in_num == 100) return 100;

  if (in_num < 100) {

     if ( (in_num % 2) == 0) {
          // paran npr. 98
          cout << "--- debug dodajem: " << num << endl;
          rez = sumaParnih_do_100(num + 2) + num ;
     } else { 
          // neparan npr. 99
	  rez = sumaParnih_do_100(num + 1); 
     }
     
  } else {

     if ( (in_num % 2) == 0) {
          // paran npr. 98
          cout << "--- debug dodajem: " << num << endl;
          rez = sumaParnih_do_100(num - 2) + num ;
     } else { 
          // neparan npr. 99
	  rez = sumaParnih_do_100(num - 1); 
     }
 
  }

}

int main() {
   
 int sabrati;

 cout << "ver 0.01" << endl << endl;

 cout << "unesi broj za sabiranje: ";
 cin >> sabrati;

 cout << "suma svih parnih brojeva izmedju " << sabrati << " i 100 je " << sumaParnih_do_100(sabrati);

 return 0;
}
