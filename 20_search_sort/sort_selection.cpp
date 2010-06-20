#include "sort_selection.h"

void sort_selection(int A[], int N) {

	//prepisivanje ucitanog polja
	int a[10];

        int i;

	for(i=0; i<N; i++)
		a[i]=A[i];
	//sortiranje

	int usporedba=0; 
        int premjestaj=0;
	for(i=0;i<N-1;i++){
		int lokacija=i;
		for(int j=i+1;j<N;j++){
			usporedba+=1;
			if(a[j]<a[lokacija]) lokacija=j;
		}//for
		if(a[i]>a[lokacija]){
			premjestaj+=3;
			int spremi=a[i];
			a[i]=a[lokacija];
			a[lokacija]=spremi;
		}//if
	}//for

        //ispis sortiranog polja
	cout << endl << "Sortirano polje:";

	for(i=0; i<N; i++)
		cout<<setw(5)<<a[i];

	cout << endl;
	cout << "Sortiranje odabirom: "	<< "usporedbi(" << usporedba << ") "
	     << "premjestanja(" << premjestaj << ")" << endl;

} //SortSelection
