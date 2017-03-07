#include <iostream>
using namespace std;
void dimensione(int&);
void caricamento (int [], int);
void prodottopari (int [], int);
void sommadispari (int [], int);

int main()
{
	int vet[10], dim;
	dimensione (dim);
    caricamento (vet, dim);
    prodottopari (vet, dim);
    sommadispari(vet, dim);	
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


void prodottopari (int v[], int dim)
{
	int prodotto=1;
	for (int i=0;i<dim;i++)
	{
		if(v[i]%2==0){
			prodotto=prodotto*v[i];
		}
		
	}
	if(prodotto!=1){
		cout<<"\n\nIl prodotto dei numeri pari e': "<<prodotto;	
		}
	
}

void sommadispari (int v[], int dim)
{
	int somma=0;
	for (int i=0;i<dim;i++)
	{
		if(v[i]%2!=0){
			somma=somma+v[i];
		}		
	}
	if(somma!=0){
		cout<<"\n\nLa somma dei numeri dispari e': "<<somma;	
		}
	
	
}

