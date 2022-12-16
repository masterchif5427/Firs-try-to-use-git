#include<iostream>
#include<conio.h>
using namespace std;
int fatorial(int n)
{
	int c,fat=1;
	for (c=1;c<=n;c++)
	{
		fat=fat*c;
	}
	return fat;
}

main()
{
	int n,resp;
	system("cls");
	do
	{
		cout<<endl<<"Função de Retorno Fatorial";
		cout<<endl<<"--------------------------";
		cout<<endl<<"Crinado a funcao: ";
		cin>>n;	
	}
	while(n<0||n>16);
	resp=fatorial(n);
	cout<<endl<<"Fatorial: "<<resp;
	getche();
}


