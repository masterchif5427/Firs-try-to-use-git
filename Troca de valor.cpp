#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void TrocarValor(int x, int y)
{
	int temp;
	temp = x;
	x=y;
	y=temp;
}

main()
{
	system("cls");
	int a, b;
	cout<<"\n Entre o valor A: "; cin>>a;
	cout<<"\n Entre o valor B: "; cin>>b;
	TrocarValor(a,b);
	cout<<"\n O novo valor de A: "<<b;
	cout<<"\n O novo valor de B: "<<a;
	getche();
}
