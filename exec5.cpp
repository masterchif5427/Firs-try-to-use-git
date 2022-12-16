#include<conio.h> //por causa da condição while(condição que se for feita sm o "S ou s" ela fecha o programa) não é necessario esta biblioteca //entrada de dados via teclado em c++
#include<iostream>
#include<math.h>
using namespace std;
int ari (int n1,int n2,int n3,int n4)
{
	int media;
	media = (n1+n2+n3+n4)/4;
	return media;
}
int pond (int n1,int n2,int n3)
{
	int media;
	media = (n1*0.2)+(n2*0.3)+(n3*0.5);
	return media;
}

int main()
{
	int n1,n2,n3,n4,media,notas; 
	char cont;
	do
	{
	system("cls");
	cout<<"------------";
	cout<<endl<<"|M E D I A|";
	cout<<endl<<"------------";
	cout<<"\n\nQuantas notas deseja digitar 3 ou 4 ? ";
	cin>>notas;
	cout<<endl<<endl<<"\nDigite os numeors para a media: ";

	if (notas == 4)
		{
			
				cout<<"\nDigite a primeira nota: ";
				cin>>n1;
				cout<<"\nDigite a segunda nota: ";
				cin>>n2;
				cout<<"\nDigite a terceira nota: ";
				cin>>n3;
				cout<<"\nDigite a quarta nota: ";
				cin>>n4;
				media = ari(n1,n2,n3,n4);
				cout<<"A media e: "<<media;
		}
		else
		{
				cout<<"\nDigite a primeira nota: ";
				cin>>n1;
				cout<<"\nDigite a segunda nota: ";
				cin>>n2;
				cout<<"\nDigite a terceira nota: ";
				cin>>n3;
				media = pond(n1,n2,n3);
				cout<<"A media e: "<<media;
		}
	cout<<endl<<endl<<"Deseja uma nova consulta (S/N) ? ";
	cin>>cont;
	}
	while(cont=='S'||cont=='s');
}
