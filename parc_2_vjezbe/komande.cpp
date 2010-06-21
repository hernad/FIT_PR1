#include <iostream>

#include <iomanip>

#include <string.h>

#include <fstream>

using namespace std;

void for_next() {

cout << "for-next sa continue:" << endl;

for (int i=1; i<10; i++) {
 
   if (i%2 == 0)
        continue;

   cout << "prolazim kroz " << i << endl;
}

cout << "for-next sa break:" << endl;

for (int i=1; i<10; i++) {
 
   if (i==4)
        break;

   cout << "prolazim kroz " << i << endl;
}

cout << "by by from for-next" << endl;

}


typedef struct {
  char  name[10];
  int i;
  int j;
  double f;
} TStruct1;
 

void struct_1() {

 TStruct1 s1;

 strncpy(s1.name, "hernad", 10);
 s1.i = 55;
 s1.j = 44;
 s1.f = 121.66;

 cout << "s1 =" << s1.name << " " << s1.i << " " << s1.j <<  " " << s1.f << endl;

 // ios::ate - at end
 // ios:app - append i ios::trunc ne mogu zajedno !!

 fstream fs1("fs1.bin", ios::binary | ios::in | ios::out | ios::trunc);

 if (fs1.fail()) { 
      cout << "belaj ...";
      return;
 }

 fs1.write((char *) &s1, sizeof(s1));

 strncpy(s1.name, "hernad2", 10);
 s1.i = 99;

 fs1.write((char *) &s1, sizeof(s1));


 strncpy(s1.name, "hernad3", 10);
 s1.i = 111;

 fs1.write((char *) &s1, sizeof(s1));

 strncpy(s1.name, "hernad4g", 10);
 s1.i = 232;

 fs1.write((char *) &s1, sizeof(s1));


 fs1.seekg(ios::beg);

 fs1.seekg(2 * sizeof(s1));

 TStruct1 s2, s3;
 fs1.read((char *) &s2, sizeof(s2));
 fs1.read((char *) &s3, sizeof(s2));

 
 cout << "s2 =" << s2.name << " " << s2.i << " " << s2.j <<  " " << s2.f << endl;
 
 cout << "s3 =" << s3.name << " " << s3.i << " " << s3.j <<  " " << s3.f << endl;

 fs1.close();

}

void getline_1() {

char *temp = new char[10];

cout << "unesite TACNO 10 znakova :";
cin.getline(temp, 10);

cout << "ukucano je :" << temp << endl;

cout << "duzina stringa je " << strlen(temp) << endl;
}


void get_2() {


  char unesi[10];

  cout << "unesi 9 znakova: "; 
  cin.get(unesi, 10, '\n');

  
  cout << "unos je bio:" << endl;

  cout << unesi;

  cout << "----------------" << endl;

}

void get_3() {


  char unesi[10], unesi_2[10], unesi_3[10];

  cout << "unesi znak: "; 
  cin.get(unesi, 5, '\n');

  cin.ignore(100, '\n');

  cout << "unesi znak 2: "; 
  cin.get(unesi_2, 5, '\n');
  cin.ignore(100, '\n');


 
  cout << "unesi znak 3: "; 
  cin.get(unesi_3, 5, '\n');



  cout << "unos je bio:" << endl;

  cout << unesi;

  cout << "----------------" << endl;

  cout << "unos 2 je bio:" << endl;

  cout << unesi_2;

  cout << "----------------" << endl;

   cout << "unos 3 je bio:" << endl;

  cout << unesi_3;

  cout << "----------------" << endl;


}

void get_4() {


  char unesi;

  cout << "unesi znak: "; 
  cin.get(unesi);

  cin.ignore(100, '\n');

  cout << "unos je bio:" << endl;

  cout << unesi;

  cout << "----------------" << endl;
}



int main() {

//getline_1();

// for_next();

// struct_1();

// get_2();
 
// get_3();

get_4();

return 0;
}

