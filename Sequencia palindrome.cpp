#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n , digito, reverso = 0, temp;
	cout<<"Digite uma sequencia de numeros: "; cin>> n;
	temp=n;
	while(n>0)
	{
		digito = n % 10;
		reverso = reverso*10 + digito;
		n = n / 10;
	}
	if(temp == reverso)
		cout<<"Eh uma sequencia palindrome\n\n";
	else
		cout<<"Naum eh uma sequencia palindrome\n\n";
	return 0;
	
}
