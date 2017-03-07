#include <iostream>
#include <math.h>
using namespace std;
void dimensione(int&);
void inserimento (int [], int);
float radice (int[], int);

int main()
{
    int vet[10];
    int dim;
    dimensione(dim);
    inserimento(vet,dim);
    cout<<"\nLa radice quadrata della somma dei quadrati dei numeri dispari e': ";
    cout<<radice(vet,dim);

}

void dimensione (int&dim){
do{
    cout<<"Inserisci il numero di elementi: ";
    cin>> dim;

}while(dim>10 || dim<0);
}
void inserimento(int v[],int dim){
for(int i=0;i<dim;i++){
    cout<<"\nInserisci il valore numero "<<i+1<<": ";
    cin>> v[i];
}
}
float radice (int v[],int dim){
int s;
float r;
for(int i=0;i<dim;i++){
    if(v[i]%2==0){
           cout<<"";
    }
    else{
        s=s+(v[i]*v[i]);
    }
}
r=sqrt(s);
return r;
}


