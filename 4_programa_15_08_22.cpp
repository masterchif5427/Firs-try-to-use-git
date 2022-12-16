#include<conio.h>
#include<iostream>
using namespace std;
main()
{
	int num[5],c;
	system("cls");
	cout<<endl<<"Armazenamento 5 numeros diferentes no vetor";
	cout<<endl<<"-------------------------------------------";
	//criando vetor
	cout<<endl<<"Criando o vetor: "<<endl;
	for(c=0;c<=4;c++)
	{
		cout<<endl<<"Digite o "<<c<<". numero: ";
		cin>>num[c];
	}
	//exibindo os numeros armazenados no vetor
	cout<<endl<<"exibindo os numeros armazenados: "<<endl;
	for(c=0;c<=4;c++)
	{
		cout<<endl<<"indice["<<c<<"] numero: "<<" ==> "<<num[c];
	}
	cout<<endl<<endl;system("pause");
}
