#include "sort_insertion.h"

void sort_insertion(int a[], int N, char izbor) {

	//prepisivanje polja a[N] u polje A[N+1]

        int i;

	int n=N+1; int A[11];

	for(i=1; i<n; i++)
		A[i]=a[i-1];

	//sortiranje polja
	int usporedba=0; int premjestaj=0;
	for(i=2;i<n;i++){
		int PromatraniA = A[i];
		//pretrazivanje
		A[0] = PromatraniA;
		int lokacija=i-1;
		while(PromatraniA < A[lokacija]){
			A[lokacija+1] = A[lokacija];
			lokacija = lokacija-1; usporedba+=1;
		}//while
		lokacija = lokacija+1;
		A[lokacija] = PromatraniA;
		premjestaj+=3;
	}//for

        if( izbor!=5 ) {
		cout << endl << "Sortirano polje:";
		for(i=1; i<n; i++)
			cout << setw(5) << A[i];
		cout << endl;
	} //if

	cout << "Sortiranje umetanjem: " << "usporedbi(" << usporedba << ") "
	     << "premjestanja (" << premjestaj << ")" << endl;

}//SortInsertion
