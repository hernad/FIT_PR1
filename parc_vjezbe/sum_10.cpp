#include <iostream>
using namespace std;

//fja unesi_niz setuje dinamicki niz a vraća broj elemenata niza ili -1 ako je greška

int unesi_niz(int **pa);

/*
 f-ja suma_10 sumira parne elemente zadanog niza rekurzivno

 */

// tip SumaFType je pointer na funkciju sumiraj
typedef int (* SumaFType) (int *a, int n);

// length a = n, a - array
int suma_10(int *a, int n);


int main() {
	int *a = NULL;
	int n = -1;

	while (n<0) {
		// dok ne dobijemo matricu vrti se
		n = unesi_niz(&a);
	}

	cout << "evo me nazad u main, n=" << n << endl;

	for (int i=0; i<n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	cout << "trazena suma je "
		 << suma_10(a, n);

	return 0;

}


int unesi_niz(int **pa) {

	int n=0;
	cout << "unesi broj elemenata : ";
	cin >> n;

	if (n<1)
		return -1;
	else {
		cout  << "kreiram niz od " << n << " elemenata\n";
		*pa = new int[n];
	}

	for (int i=0; i<n; i++) {
		cout << "unesi element " << i+1 << ": ";
		cin >> (*pa)[i];
	}

	cout << "niz popunjen \n";
	for (int i=0; i<n; i++) {
		cout << (*pa)[i]<< " ";
	}
	cout << endl;
	cout << "-----------------------------" << endl;

	return n;
}

int suma_10(int *a, int n) {

	// pointer na funkciju
	SumaFType pf = suma_10;

	cout << "suma_10 poziv n= " << n << endl;

	int tmp = a[n-1];
	if ( (tmp<=10) || ((tmp % 2) != 0))
		// paran, > 10
	    tmp = 0;

	//bazni slucaj
	if (n==1) {
		return tmp;
	}

    cout << "return dio funkcije ... \n";

	return tmp + ((*pf)(a, n-1)) ;


}
// end function suma_10


