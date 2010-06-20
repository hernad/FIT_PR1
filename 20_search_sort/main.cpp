#include <iostream>
#include <iomanip>

#include "search_menu.h"
#include "sort.h"
#include "search_sort.h"
#include "ucitaj.h"

using namespace std;

int main() {

	cout << "PROGRAM PRETRAZUJE I SORTIRA POLJE" << endl;

	//ucitavanje polja
	int a[10];
	int n=10;

	ucitaj(a,10);
	char Kraj='n';

	while((Kraj=='n')||(Kraj=='N')) {
		char metoda='d';
		while((metoda=='d')||(metoda=='D')) {

			cout << endl <<endl << "GLAVNI IZBORNIK" << endl;

			cout<<"1 = pretrazivanje"<<endl;
			cout<<"2 = sortiranje"<<endl;
			cout<<"3 = pretrazivanje+sortiranje"<<endl;
			cout << "Unesi svoj izbor<1,2 ili 3>: ";

			int izbor;
			cin >> izbor;
			int N=10;

                        switch(izbor) {
				case 1:
					search_menu(a,10);
					break;
				case 2:
					sortiranje(a,10);
					break;
				case 3:
					search_sort(a,10);
			}//switch

			cout << endl << "Zelis li se vratiti na glavni izbornik <d/n>: ";
			cin >> metoda;

			char NovoPolje;
			if((metoda=='d')||(metoda=='D')) {

				cout << "Zelis li ucitati novo polje<d/n>: ";
				cin >> NovoPolje;
				if((NovoPolje=='d')||(NovoPolje=='D'))
					ucitaj(a,10);

			} //if

		} //while 'metoda’


                cout << "Izlaz<d/n>: ";
		cin >> Kraj;

		if((Kraj=='n')||(Kraj=='N')) {

			cout << "Zelis li ucitati novo polje<d/n>: ";
			char NovoPolje;
			cin >> NovoPolje;

			if((NovoPolje=='d')||(NovoPolje=='D'))
				ucitaj(a,10);
		}//if

		if((Kraj=='d')||(Kraj=='D'))
			cout << endl << "BYE,BYE!!!" << endl;
	} //while 'kraj'

	//cout << "Za kraj<1>:";
	//cin >> "";

        return 0;

} //PretrSortMenu


