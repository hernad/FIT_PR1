#include "sort_bubble.h"

void sort_bubble(int a[],int N,char izbor) {

	//prepisivanje polja
	int A[10];
         
        int i;

	for(i=0;i<N;i++)
		A[i]=a[i];

	//sortiranje polja
	int usporedba=0; int premjestaj=0;
	int IndikatorZamjene; int brojac=0;//brojac prolaza
	do{
		IndikatorZamjene=1; brojac+=1;
		for(i=0;i<N-1;i++){
			if (A[i]>A[i+1]){
				int spremi=A[i];
				A[i]=A[i+1]; A[i+1]=spremi;
				IndikatorZamjene=0; premjestaj+=3;
			}//if
			usporedba+=1;
		}//for
		N=N-1;
	}while ((N>1)&&(IndikatorZamjene==0));


       //ispis sortiranog polja
	N=10;

	if(izbor!=5){
		cout << endl << "Sortirano polje:";
		for(i=1;i<N;i++)
			cout<<setw(5)<<A[i];
		cout<<endl;
	}//if

	cout << "Sortiranje zamjenom (bubble sort): usporedbi("
		<< usporedba << ") premjestanja ("
		<< premjestaj << ") prolaza (" << brojac << ")" << endl;

}//SortBubble
