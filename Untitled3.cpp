#include<iostream>
#include<conio.h>
using namespace std;
int pares(int i, int f) //função
{
	int quant=0;	//uma classe é um conjunto de atributos e metodos
	cout<<endl<<"Pares: ";
	for (int c=1;c<=f;c++)
	{
		if(c%2==0)
		{
			cout<<c<<"   ";
			quant=quant+1; //quant++; (tambem aumenta +1 ao contador
		}
	}
	return quant;
}
main()
{
	int i,f,tot;
	system("cls");
	system("color DF");
	cout<<endl<<"Sequencia de numeros Pares";
	cout<<endl<<"---------------------------";
	cout<<endl<<"Digite o inicio do Intervalo: ";
	cin>>i;
	do
	{
		cout<<endl<<"Digite o fim do intervalo: ";
		cin>>f;
	}
	while(f<=i);
	tot=pares(i,f);
	cout<<endl<<endl<<"Quantidade de numeros pares do intervalo: "<<tot;
	cout<<endl<<endl<<"Press. <ENTER> para finalizar";
	getche();
}
