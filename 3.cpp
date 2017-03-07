#include <iostream>
using namespace std;
void dimensione(int&);
void caricamento (int [], int);
void ordineinverso (int [], int);


int main()
{
	int vet[10], dim;
	dimensione (dim);
    caricamento (vet, dim);
    ordineinverso (vet, dim);
   	
}

void dimensione (int&dim)
{
	do{
		cout<<"Inserisci il numero di elementi: ";
		cin>>dim;
	}while (dim>10 || dim <0);
}

void caricamento (int v[], int dim)
{
	for (int i=0;i<dim;i++)
	{
		cout<<"\nInserisci il valore numero "<<i+1<<": ";
		cin>>v[i];
	}
}


void ordineinverso (int v[], int dim)
{
	cout<<"\nOrdine inverso: ";
	for (int i=dim-1;i>=0;i--)
	{
		cout<<v[i]<<" ";
	}
	
}
