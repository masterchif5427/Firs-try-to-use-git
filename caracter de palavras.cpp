#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	char nome[80];
	cout<<"\n*** Quantidade de caracteres ***";
	cout<<"\n\n Digite uma Palavra: ";
	gets(nome);
	int i=0;
	while(nome[i] !='\0')
	{
		i=i+1;	
	}
	cout<<"\n A palavra tem: "<<i<<" Caracteres";
	cout<<"\n Pressione <ENTER> para finalizar";
	
	getche();
}
