#include <iostream>
using namespace std;
int main()
{
 int n=0;
 int d=0;

 bool primo;
 cout<<"ALGORITMO PER STABILIRE SE UN NUMERO E' PRIMO\n\n";
 cout<<"Inserisci il numero  ";
 cin>> n;
 do {
       if (n%d==0){
       primo=false;
       d=n;
       d++;
                  }

        else{
            d++;
            }

    }
 while (d<n);
if (primo==true) {
                 cout<< "Il numero e' primo";
                }
else {
    cout<< "Il numero non e' primo";
}
}

