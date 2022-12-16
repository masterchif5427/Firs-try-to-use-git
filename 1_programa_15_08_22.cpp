/* Nosso primeiro programa
 	Data 15/08/22
 	by: Guilherme
 	*/
#include<iostream> /*para usar o cin e cout */
#include<stdio.h> /* biblioteca para tela c++*/
#include<conio.h> /*para usar o cin e cout c++*/
#include<iomanip> /* possibilita utilizar numero "0,50" */
using namespace std; /*cin cout */
main()
{
	float n1,n2,n3,n4,med,quadrado;
	system("cls");
	system("color 5F"); /* colorir o fundo e a letra */
	cout<<endl<<"Programa para exibir o quadrado";
	cout<<endl<<"da media aritimetica de 4 numeros";
	/* é utilizado com a seta "cin>>variavel" */
	cout<<endl<<"==================================";
	cout<<endl<<endl<<"Digite o 1. numero: ";cin>>n1;
	cout<<endl<<"Digite o 2. numero: ";cin>>n2;
	cout<<endl<<"Digite o 3. numero: ";cin>>n3;
	cout<<endl<<"Digite o 4. numero: ";cin>>n4;
	med=(n1+n2+n3+n4)/4;
	quadrado=med*med;
	cout<<endl<<endl<<"Media: "<<med;
	cout<<endl<<endl<<"Quadrado da Media: "<<fixed<<setprecision(2)<<quadrado;
	cout<<endl<<endl;
	system("pause");
}

