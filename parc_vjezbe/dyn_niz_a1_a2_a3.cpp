#include <iostream>
using namespace std;

typedef int **A2T;

// prototip funkcije
void Unos(A2T *pa, int n);
int Kalkulacija(A2T a1, A2T a2, A2T *pa3, int n);
void Dealociraj(A2T *pa, int n);

int main() {

	A2T a1, a2, a3;

	int n;
	cout << "Dimenzija matrice ? " ;
	cin >> n;

	// greska
	if (n < 1) return -1;

	cout << "unos matrice 1\n";
	Unos(&a1, n);
	cout << endl;

	cout << "unos matrice 2\n";
	Unos(&a2, n);

	a3 = new int *[n];
	for (int i=0; i<n; i++)
		a3[i] = new int[n];


	cout << "ulazim u kalkulaciju\n";
	Kalkulacija(a1, a2, &a3, n);

	cout << "dealociram \n";
	Dealociraj(&a1, n);
	Dealociraj(&a2, n);
	Dealociraj(&a3, n);

    return 0;
}


void Unos(A2T *pa, int n) {


	(*pa) = new int *[n];

	for (int i=0; i<n; i++)
		(*pa)[i] = new int[n];

	cout << "unesi elemente \n";

	for (int i=0; i<n; i++)
		for(int j=0; j<n; j++) {
			cout << "unesi elemenat a[" << i+1
				 << "][" << j+1
				 << "] ";
			cin >> (*pa)[i][j];
		}
}

int Kalkulacija(A2T a1, A2T a2, A2T *pa3, int n) {

	int ret = 0;

	A2T a3 = *pa3;

	for(int i=0; i<n; i++)
		for(int j=0;j<n; j++) {

			cout << "ulazim for-for .." << endl;
			a3[i][j] = 0;
			int tmp1 = a1[i][j];
			int tmp2 = a2[i][j];

			if ((tmp1%2) != 0)
				tmp1 = 0;

			if ((tmp2%2) != 0)
				tmp2 = 0;

			if ((tmp1==0) && (tmp2==0))
				tmp1 = 1;

			a3[i][j] = tmp1 + tmp2;

			ret += tmp1 + tmp2;
		}

	cout << "print a3 \n";

	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++)
			cout << a3[i][j] << " ";
	    cout << endl;
	}

	return ret;
}


void Dealociraj(A2T *pa, int n) {

	A2T a = *pa;

	for(int i=0; i<n; i++)
		delete [] a[i];

	delete [] a;

	a = NULL;
}

