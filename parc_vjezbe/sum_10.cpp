#include <iostream>
using namespace std;

//fja unesi_niz setuje dinamicki niz a vraća broj elemenata niza ili -1 ako je greška

int unesi_niz(int *a);

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
		n = unesi_niz(a);
	}

	cout << "trazena suma je "
		 << suma_10(a, n);

	return 0;

}


int unesi_niz(int *a) {
	int n=0;
	cout << "unesi broj elemenata ";
	cin >> n;

	if (n<1)
		return -1;
	else
		a == new int[n];

	for (int i=0; i<n; i++) {
		cout << "unesi element " << i+1;
		cin >> a[i];
	}

	cout << "niz popunjen \n";
	return n;
}

int suma_10(int *a, int n) {
	SumaFType pf = suma_10;
	// pointer na funkciju

	//bazni slucaj
	if (n==1) {
		int tmp = a[n-1];
		if ((tmp>10) &&
		   ((tmp % 2) == 0))
			// paran, > 10
			return tmp;
	} else
		return 0;

	int tmp = a[n-1];
	bool valid = ((tmp>10) &&
			      ((tmp%2)==0));

	if (!valid)
		// ne zadovoljava uslove
		tmp = 0;

	return (*pf) (a, n-1) + tmp;


}
// end function suma_10


