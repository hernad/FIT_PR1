#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

// http://en.wikipedia.org/wiki/Seekg

int main()
{
        fstream aFile;
        
        aFile.open("test_predavanja.txt", ios::binary | ios::in | ios::out | ios::trunc);

        if (!aFile.is_open()) {
            cout << "ne mogu otvoriti test_file" <<  endl;
            return 1;
         }

         char niz[13];

         //Ovdje postavlja pročit. podatke
         strcpy(niz, "Hello World!");

         //unosi prvih 5 karakt. u fajl-  "Hello"
         aFile.write(niz, 5);

         aFile.seekg(ios::beg);  //na pocetak fajla


         //Ovdje postavlja pročit. podatke
         static char read_array[10]; 
         aFile.read(read_array, 3); //čita prva 3 karkt. - "Hel"

          read_array[4] = '\0';

          cout << "read array :" << read_array << endl;  //prikazuje ih..
          aFile.close();

        return 0;
}
