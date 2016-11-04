#include <iostream>
using namespace std;

int n;
int centinaia=0;
int decine=0;
int unita=0;
int main()
{
   do{
    cout << "inserisci un numero intero inferiore a mille ";
    cin >> n;}
    while (n>1000);

    while (n>100) {
      n=n-100;
      centinaia++;
    }
    while (n>10) {
        n=n-10;
        decine++;
    }
    while (n>0) {
        n=n-1;
        unita++;
    }
cout<<endl;
cout << "centinaia " <<centinaia << endl;
cout<<endl;
cout << "decine " <<decine << endl;
cout<<endl;
cout << "unita " << unita<< endl;


}
