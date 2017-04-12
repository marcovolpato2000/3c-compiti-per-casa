#include <iostream>
using namespace std;
int main ()
{

int dim=10;
int v1[dim]={1,2,3,4,5,6,7,8,9,10};
int v2[dim]={1,9,3,4,5,6,7,8,9,10};
bool uguali=true;
for (int i=0;i<dim && uguali;i++ )

{
	if (v1[i]!=v2[i])
	{
	uguali=false;	
	}
	
}

if (uguali==false)
{
	cout<<"I vettori non sono uguali";
}
else{
	cout<<"I vettori sono uguali";
}

}

