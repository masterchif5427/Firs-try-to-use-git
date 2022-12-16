#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;


main()
{
	int a,b,c,ba1,ba2,delta;
	system("cls");
	cout<<endl<<"Calculando a Equacao do segundo grau: ";	
	cout<<endl<<"Digite o 1. numero: ";cin>>a;
	cout<<endl<<"Digite o 2. numero: ";cin>>b;
	cout<<endl<<"Digite o 3. numero: ";cin>>c;
	delta=b*b-4*a*c;
	ba1= ( (-b) + (sqrt(delta)) ) / (2*a);
	ba2=  ( (-b) - (sqrt(delta)) ) / (2*a);
	cout<<endl<<"Delta: "<<delta;
	cout<<endl<<"Bhaskara: "<<ba1;
	getche();
}
