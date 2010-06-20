#include "search_binarno.h"

void search_binarno(int a[], int n, int broj) {


	//deklaracija lokalnih podataka
	bool nadjen=false;

	int prvi=1; int zadnji=10; int korak=0;	int srednji;

	//prepisivanje polja
	int A[11]; A[0]=0;

        int i=0;
	for(i=1; i<=n; i++)
		A[i]=a[i-1];


	//sortiranje polja
	int usporedba=0;
	int zamjena=0;


	for(i=1; i<=n-1; i++) {
		for(int j=i+1;j<=n;j++){
			usporedba+=1;
			if(A[j]<A[i]){
				zamjena+=1;
				int b=A[i];
				A[i]=A[j];
				A[j]=b;
			}//if
		}//for
	}//for

        cout << endl << "BINARNO PRETRAZIVANJE";
	cout << endl << "Sortirano polje:";

	for(i=1; i<=n;i++)
		cout<<setw(5)<<A[i];
	cout<<endl;
	
        //binarno pretrazivanje
	while((nadjen==false)&&(prvi<=zadnji)){

		korak=korak+1; srednji=(prvi+zadnji)/2;

		cout<<"srednji=(prvi+zadnji)/2="
			<<prvi<<"+"<<zadnji<<"/2="<<srednji<<endl;

		if(broj<A[srednji])	
                      zadnji=srednji-1;  //prva polovina polja

		if(broj==A[srednji])	
                       nadjen=true;  //kljuc je nadjen

		if(broj>A[srednji])	
                       prvi=srednji+1;  //druga polovina
	} //while


	//ispis rezultata pretrazivanja
	if(nadjen==true)
		cout<<"Broj " << broj << " nadjen u "
			      << korak << ". koraku na poziciji " << srednji << endl;
	if(nadjen==false) {

		cout<< "prvi=" << prvi << " zadnji=" << zadnji << endl;
		cout<< "Broj " << broj << " nije nadjen. Koraka( " << korak << ")" << endl; 
        }//if
	
        cout <<  "Sortiranje: " << "usporedbi(" << usporedba << ") "
	     << "zamjena sadrzaja(" << zamjena << ")" << endl;
}
