#include <iostream>

using namespace std;

// char crt[] = "\n------------------------------------------------\n";

struct Datum {
  int dan;
  int mjesec;
  int godina;
};

struct Igrac {
  char imePrezime[40];
  int brojPogodaka;
  double cijena;
  Datum datumTransfera;
};


void ispis(Igrac ig) {

  cout << ig.imePrezime;
  cout << "\t\t" << ig.brojPogodaka << "\t\t" << ig.cijena << "\t\t";
  cout << ig.datumTransfera.dan << "." << ig.datumTransfera.mjesec << "." << ig.datumTransfera.godina << endl;

}


int main() {

  //Igrac igrac1 = {"hernad", 30, 12000.55, {12, 10, 2007} };
  Igrac igrac1 = {"hernad", 30, 12000.55, 12, 10, 2007 };
  Igrac igrac2 = {"bjasko", 30, 22000.33, {3, 1, 1970} };

  ispis(igrac1);
  ispis(igrac2);

  return 0;
}
