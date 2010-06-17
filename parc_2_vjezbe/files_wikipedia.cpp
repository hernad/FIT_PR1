#include <iostream>
#include <fstream>
using namespace std;
 
int main () {
  char buffer[10];
 
  // http://www.cplusplus.com/forum/beginner/2211/

  fstream aFile("test_wikipedia.txt", ios::binary | ios::in | ios::out | ios::trunc );
   
  if (!aFile.is_open()) {
       cout << "ne mogu otvoriti test_file" <<  endl;
       return 1;
  }


  
  aFile << "hernad";
 
  //seek to 3 characters from the beginning of the file
  aFile.seekg (3, ios::beg); 
  aFile.read (buffer, 2); //read two characters into the buffer
  buffer[2]='\0'; // end buffer with the null terminating character
  aFile.close();
 
  cout << buffer << endl;
}

