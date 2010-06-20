#include "sort.h"

void sortiranje(int a[], int n) {

	cout << "SORTIRANJE POLJA" << endl;

	char Kraj='n';
	while((Kraj=='n')||(Kraj=='N')){
		char metoda='d';
		while((metoda=='d')||(metoda=='D')) {

			cout << endl << endl << "MENU: METODE SORTIRANJA " << endl;
			cout << "1 = metoda odabira (selection)" << endl;
			cout << "2 = metoda umetanja (insertion)" << endl;
			cout << "3 = metoda zamjene (bubble)" << endl;
			cout << "4 = quick sort" << endl;
			cout << "5 = kombinirano(1+2+3+4)" << endl;
			cout << "Unesi svoj izbor<1,2,3,4 ili 5>: ";

			int izbor; cin>>izbor;
                        int N=10;
			cout << endl << "Ucitano polje:  ";

			for(int i=0; i<N; i++)
				cout<<setw(5)<<a[i];

			switch(izbor) {
				case 1:
					sort_selection(a,10); break;
				case 2:
					sort_insertion(a, 10, izbor);
					break;
				case 3:
					sort_bubble(a, 10, izbor);
					break;
				case 4:
					sort_quick(a, 10, izbor);
					break;
				case 5:
					sort_selection(a, 10);
					sort_insertion(a, 10, izbor);
					sort_bubble(a, 10, izbor);
					sort_quick(a, 10, izbor);
				} //switch



                        cout << endl << "Zelis li promijeniti metodu sortiranja<d/n>: ";
			cin >> metoda;

			char NovoPolje;

			if ((metoda=='d')||(metoda=='D')) {

				cout<<"Zelis li ucitati novo polje<d/n>: ";
				cin >> NovoPolje;
				if((NovoPolje=='d')||(NovoPolje=='D'))
					ucitaj(a,10);
			} //if

		}//while 'metoda'

		cout << "Izlaz<d/n>: "; 
                cin >> Kraj;

		if ((Kraj=='n') || (Kraj=='N')) {
			cout << "Zelis li ucitati novo polje<d/n>: ";
			char NovoPolje; 
                        cin >> NovoPolje;
			if ((NovoPolje=='d')||(NovoPolje=='D'))
				ucitaj(a, 10);
		} //if

		if ((Kraj=='d')||(Kraj=='D'))
			cout << endl << "Sortiranje zavrseno" << endl;
	}//while 'kraj'
}//Sortiranje
