#include "sort_quick.h"


int Sortir(int lijevo,int desno,int A[], int usp);
int Premj(int lijevo,int desno,int A[], int premj);

void sort_quick(int a[], int N, char izbor) {

	//prepisivanje polja a[N] u A[N+1]; A[0]=prazno
	int n=N+1;
	int A[11];

        int i;

	for(i=1; i<n; i++)
		A[i]=a[i-1];

	int usp=Sortir(1,N,A,0);//sortiranje i brojanje usporedbi
	int premj=Premj(1,N,A,0);//brojanje premjestanja

	if(izbor!=5){
		cout<<endl<<"Sortirano polje:";
		for(i=1;i<n;i++)
			cout<<setw(5)<<A[i];
		cout<<endl;
	}//if
	cout<<"Quick Sort: "<<"usporedbi ("<<usp<<") "
		<<"premjestanja ("<<premj<<")"<<endl;
} //QuickSort


//rekurzivna funkcija Sortir(sortira i vraca broj usporedbi)
int Sortir(int lijevo, int desno, int A[], int usp){

	int i=lijevo;
	int j=desno;
	int sidro=A[(lijevo+desno)/2];
	while (i<=j){
		while(A[i]<sidro) i=i+1;
		while(sidro<A[j]) j=j-1;
		usp+=1;
		if(i<=j){
			int spremi=A[i];
			A[i]=A[j];
			A[j]=spremi;
			i=i+1;
			j=j-1;
		}//if
	}//while

	if (lijevo < j) Sortir(lijevo,j,A,usp);
	if (i < desno) Sortir(i,desno,A,usp);

	return usp;
} //Sortir


//funkcija ‘Premj’ je identicna funkciji ‘Sortir’, osim //povratne vrijednosti (zbog koje je i uvrstena)

int Premj(int lijevo,int desno,int A[],int premj){
	int i=lijevo; int j=desno;
	int sidro=A[(lijevo+desno)/2];
	while (i<=j){
		while(A[i]<sidro) i=i+1;
		while(sidro<A[j]) j=j-1;
		if(i<=j){
			int spremi=A[i];
			A[i]=A[j];
			A[j]=spremi;
			i=i+1; j=j-1; premj+=3;
		}//if
	}//while
	if (lijevo < j) 
		Premj(lijevo,j,A,premj);
	if (i < desno)
		Premj(i,desno,A,premj);
	return premj;
}//Premj

