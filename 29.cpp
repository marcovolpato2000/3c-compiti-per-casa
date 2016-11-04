#include <iostream>

using namespace std;

int main()
{
int N;
int x;
int i=0;
int max=0;
int M=i;
float Somma=0;
float Media=0;
cout<<"Quanti numeri vuoi inserire? ";
cin>>N;
cout<<endl;
    while (i<N)
    {
    cout<<"inserisci un numero: ";
   cin>>x;
    if(x>max)
    {
    max=x;
    }
    else
        if(x<M)
    {
    x=M;
    }
    else{
        cout<<"";
    }
    Somma=Somma+x;
 Media = (Somma)/(N);
    i++;
 }
cout<<endl;
 cout<<"Il numero massimo e' ";
 cout<<max;
 cout<<endl;
 cout<<endl;
 cout<<"Il numero minimo e' ";
 cout<<M;
 cout<<endl;
 cout<<endl;
 cout<<"la media tra i numeri inseriti e' ";
 cout<<Media;
 cout<<endl;
 cout<<endl;
}
