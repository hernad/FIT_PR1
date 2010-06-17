// naći veličinu binarnog fajla

#include <iostream>
#include <fstream>

using namespace std;

const char * filename = "test.txt";
int main ( ) 
{ 
  long i,m;  
  ifstream file (filename, ios::in|ios::binary); 
  i = file.tellg( );
  cout << "prvo ocitanje tellg = " << i << endl;
  file.seekg (0, ios::end);  
  m = file.tellg( ); 
  cout << "drugo ocitanje tellg = " << m << endl;
  
  file.close( );  
     cout << "velicina " << filename;  
     cout << " je " << (m-i) << " bytes.\n";  
return 0;
}
