#include <iostream>
#include <iomanip>

#include <stdlib.h>

using namespace std;

// 
// zadatak prepisan iz vjezbi FIT mostar
// minorne promjene: sopstvene konvencije imenovanja varijabli
//
// (za koristenje se obratite denis@fit.ba, irah@fit.ba)
//

const int RED = 3;
const int KOLONA = 3;


void ispis(char xo[][KOLONA]) {

      cout << endl << "FIT-XO v0.1" << endl;

      for (int i=0; i<RED; i++) {
        for(int j=0; j<KOLONA; j++)
            cout << "+---";
        cout << "+" << endl;
        for(int j=0; j<KOLONA; j++)
            cout  << "|" << setw(3) << xo[i][j];
       cout << "|" << endl;
     }

     for (int j=0; j<KOLONA; j++)
        cout << "+---";

     cout << "+" << endl;

     return;
}

void unos(char xo[][RED], int &igrac, char imePrvogIgraca[], char imeDrugogIgraca[]) {
    int x,y;

    if (igrac % 2 == 0)
        cout << imePrvogIgraca;
    else
        cout << imeDrugogIgraca;

    cout << ", unesi koordinatu x pa y, koordinate odvoji sa ENTER:" << endl;


    cin >> x >> y;

    x--; y--;

    if (x>=0 && x<RED && y>=0 & y<KOLONA) {
        if (xo[x][y] == ' ') {
            if (igrac % 2 == 0)
                xo[x][y] = 'X';
            else
                xo[x][y] = '0';
            igrac++;
        } else
            cout << "LOKACIJA ZAUZETA!" << endl;

    } else
         cout << "NEPOSTOJECA LOKACIJA!" << endl;
}

bool provjeri_redove(char xo[][KOLONA]) {
   char znak = ' ';
   int brojac = 0;

   for(int i=0; i<RED; i++) {
      for(int j=0; j<KOLONA; j++) {
         if(j==0)
                znak=xo[i][j];
         else {
             if( znak != ' ' && znak==xo[i][j] )
                 brojac++;
         }
     }

     if (brojac==2)
        return true;
     else
        brojac=0;
   }

   return false;
}

bool provjeri_kolone(char xo[][KOLONA]) {
   char znak = ' ';
   int brojac = 0;

   for(int i=0; i<RED; i++) {
      for(int j=0; j<KOLONA; j++) {
         if(j==0)
                znak=xo[j][i];
         else {
             if( znak != ' ' && znak==xo[j][i] )
                 brojac++;
         }
     }

     if (brojac==2)
        return true;
     else
        brojac=0;
   }

   return false;
}


bool provjeri_dijagonalno_dl_ld(char xo[][KOLONA], bool is_dl) {
    
    char znak = ' ';
    int brojac=0;

    for (int i=0; i<RED; i++) {
        for(int j=0; j<KOLONA; j++) {

            if (is_dl) {
                // dl algoritam
                if(i==0 && j==0)
                   znak=xo[j][i];
                else
                   if(i==j && znak == xo[i][j])
                        brojac++;
            }
            else {
                // ld algoritam
                if(i==0 && j==RED-1)
                    znak=xo[j][i];
                else
                    if(znak != ' ' && (i==j || i==RED-1) && znak==xo[i][j])
                        brojac++;
            }
        }
    }
    if (brojac==2)
        return true;
    return false;
}

bool provjera(char xo[][KOLONA]) {
    
    if(provjeri_redove(xo) || provjeri_kolone(xo) || provjeri_dijagonalno_dl_ld(xo, true) || provjeri_dijagonalno_dl_ld(xo, false))
            return true;

    return false;
}

void postavi_na_defaultne_vrijednosti(char xo[][KOLONA] ) {

    for(int i=0; i<RED; i++)
        for(int j=0; j<KOLONA; j++)
            xo[i][j]=' ';
       
    return;

}

int main() {

    int igrac=0;

    char xo[RED][KOLONA];

    char imePrvogIgraca[30], imeDrugogIgraca[30];

    postavi_na_defaultne_vrijednosti(xo);

    cout << "Unesite ime prvog igraca: ";
    cin.getline(imePrvogIgraca, 30);

    cout << "Unesite ime drugog igraca: ";
    cin.getline(imeDrugogIgraca, 30);

    system("clear");


    do {
       ispis(xo);
       unos(xo, igrac, imePrvogIgraca, imeDrugogIgraca);
    } while (provjera(xo) == false);


    ispis(xo);

    if((igrac-1) % 2 == 0)
        cout << imePrvogIgraca;
    else
        cout << imeDrugogIgraca;

    cout << " JE POBJEDNIK !" << endl;

    return 0;

}
