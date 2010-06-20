#include "search_menu.h"

void search_menu(int a[], int N) {

	char kraj='n';
	while((kraj=='n')||(kraj=='N')) {

		char metoda='d';

		while((metoda=='d')||(metoda=='D')) {

			cout<<endl<<"Izbornik za pretrazivanje:"<<endl;
			cout<<"1 = slijedno pretrazivanje"<<endl;
			cout<<"2 = binarno pretrazivanje"<<endl;
			cout<<"3 = kombinirano pretrazivanje"<<endl;
			cout<<"Unesi svoj izbor<1,2 ili 3>: ";

			int izbor;
			cin >> izbor;
			char jos='d';

			while ((jos=='d')||(jos=='D')) {

				cout << endl << "Ucitano polje:  ";

				for(int i=0; i<N; i++)
					cout<<setw(5)<<a[i];

				cout << endl;
				cout <<endl << "Unesi broj koji zelis potraziti: ";
				int broj; cin>>broj;

                                switch(izbor){
					case 1:
						search_sekvencijalno(a,10,broj);
						break;
					case 2:
						search_binarno(a,10,broj);
						break;
					case 3:
						search_sekvencijalno(a,10,broj);
						search_binarno(a,10,broj);
				} //switch

				cout << endl << "Zelis li potraziti jos koji broj<d/n>: ";
				cin >> jos;

			} //while 'jos'

			cout << "Zelis li promijeniti metodu pretrazivanja<d/n>: ";
			cin >> metoda;

		}//while 'metoda'

		cout << "Kraj pretrazivanja<d/n>: "; cin>>kraj;

	}//while 'kraj'

}//PretrMenu

