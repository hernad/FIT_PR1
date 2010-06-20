#include "search_sekvencijalno.h"

void search_sekvencijalno(int a[], int n, int broj) {

	bool Nadjen=false;
	int koraka=0;

        int i=0;
	for(i=0; i<n; i++) {
		koraka+=1;
		if(a[i]==broj){
			Nadjen=true;
			break;
		}//if
	}//for

	cout << endl << "SLIJEDNO PRETRAZIVANJE" << endl;

	if(Nadjen==true)
		cout << "Broj " << broj <<" nadjen na poziciji " << i+1
			<<". Koraka(" << koraka << ")." << endl;
	else
		cout << "Broj " << broj << " nije nadjen."
			<< " Koraka(" << koraka << ")." << endl;
}
