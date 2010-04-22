#include <string.h>
#include <iostream>

using namespace std;

struct Student {
  char imePrezime[30];
  char index[10];
  int godinaStudija;
};

void Unos(Student *studenti, int max);

Student *getPokazivac(Student *studenti, int max);

void Pretraga(Student *studenti, int max);

void PrintPodatke(Student *pstudent);

int main() {

const int MAX=5;

Student studenti[MAX];

Unos(studenti, MAX);

Pretraga(studenti, MAX);

Student *pok = getPokazivac(studenti, MAX);

if (pok != NULL)
        PrintPodatke(pok);

return 0;
}

void Unos(Student *s, int max) {

   for(int i=0; i<max; i++) {
          cout << "Podaci o studentu " << i+1 << " "
               << endl;
          cout << "Ime i prezime: " ;
          cin.getline( (s[i]).imePrezime, 30);

          cout << "index: " ;
          cin.getline( (s[i]).index, 10);

          cout << "godina studija: ";
          cin >> (s[i].godinaStudija);
   }

}

Student *getPokazivac(Student *studenti, int max) {

    for(int i=0; i<max; i++)
          cout << i+1 << ". " << (studenti[i]).imePrezime << endl;

    int rbr;
    cout << "---------------------------------------------- \n";
    cout  << "odaberite studenta - rbr: ";
    cin >> rbr;

    if ((rbr > max) || (rbr < 1))
        return NULL;

    return &(studenti[rbr-1]);

}

void Pretraga(Student *s, int max) {

   char br_ind[10];

   cout << "unesi br indexa: ";

   cin.getline(br_ind, 9);

   bool nasao = false;

   for (int i=0; i<max; i++) {

        if(strcmp(br_ind, (s[i]).index) == 0) {
               PrintPodatke( &(s[i]) );
               nasao = true;
               break;
        }
   }

   if (!nasao)
        cout << "nema studenta sa tim indexom \n";

}


void PrintPodatke(Student *s) {

cout << "ime :" << s->imePrezime
     << endl
     << "index:" << s->index
     << endl
     << "godina:" << s->godinaStudija
     << endl;

}

