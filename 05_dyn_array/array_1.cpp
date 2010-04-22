#include <iostream>
using namespace std;

// http://www.fredosaurus.com/notes-cpp/newdelete/50dynamalloc.html

int main() {

int no_elem;

int *arr = NULL;

cout << "unesi broj elemenata :";
cin >> no_elem;

arr = new int[no_elem];

cout << "ispis 1" << endl;
for (int i=0; i<no_elem; i++) {
  cout << "arr [" << i << "] = ";
  cin >> arr[i];
}


cout << "brisem matricu" << endl;
delete [] arr;

cout << "ispis 2 - elementi su dealocirani ali program i dalje ispisuje ... " << endl;
for (int i=0; i<no_elem; i++) {
  cout << "arr [" << i << "] = "
       << arr[i] << endl;
}


arr = NULL;

cout << "ispis 3 ... nakon NULL imamo segfault" << endl;

flush(cout);

for (int i=0; i<no_elem; i++) {
  cout << "arr [" << i << "] = "
       << arr[i] << endl;
}




cout << "kraj" << endl;

return 0;

}
