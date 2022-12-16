// #include<conio.h> por causa da condição while(condição que se for feita sm o "S ou s" ela fecha o programa) não é necessario esta biblioteca //entrada de dados via teclado em c++
#include<iostream>
using namespace std;
main()
{
	int t,c,r; 
	char cont;
	do
	{
	system("cls");
	cout<<"---------------";
	cout<<endl<<"|T A B U A D A|";
	cout<<endl<<"---------------";
	cout<<endl<<endl<<"Digite um numero para a tabuada: ";
	cin>>t;
	for (c=1;c<=10;c++) //crescente
	//for(tipo: var=inicio; var=fim; var=intervalo) 
		{
		r=t*c; //bloco de comandos
		cout<<endl<<t<<" X "<<c<<" = "<<r;
		
		}
	cout<<endl<<endl<<"Deseja uma nova tabuada (S/N) ?";
	cin>>cont;
	}
	while(cont=='S'||cont=='s');	//while é uma condição
	//getche(); //biblioteca c++ conio.h
}
