#include "ucitaj.h"

void ucitaj(int a[], int n) {

	cout << endl << "Ucitavanje cjelobrojnog polja (10 clanova):" << endl;
	for(int i=0; i<n; i++) {
		cout << "Unesi " << i+1 << ". broj: ";
		cin  >> a[i];
	} //for
} //Ucitaj

