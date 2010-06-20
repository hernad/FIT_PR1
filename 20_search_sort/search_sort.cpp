#include "search_sort.h"

void search_sort(int a[], int n) {

	char jos='d';

	while((jos=='d') || (jos=='D')) {

		cout << endl << "Ucitano polje:  ";

		for(int i=0;i<n;i++)
			cout<<setw(5)<<a[i];

		cout << endl;
		cout << endl << "Unesi broj koji zelis potraziti: ";

		int broj;
		cin >> broj;

		search_sekvencijalno(a, 10, broj);
		search_binarno(a, 10, broj);
		
                sort_selection(a, 10);
                sort_insertion(a, 10, 5);
		sort_bubble(a, 10, 5);
		sort_quick(a, 10, 5);

		cout << endl << "Zelis li potraziti jos koji broj<d/n>: ";
		cin  >> jos;

	} //while 'jos'
}
//PretrSort
