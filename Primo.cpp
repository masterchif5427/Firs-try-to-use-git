#include<iostream>
#include <conio.h>
using namespace std;
 
 main()
 {
 	int num, rt, i;
 	char cont;
 	do
 	{
 		system("cls");
 		cout << "Digite um numero: "; cin >> num;
 		if (num == 1)
 		{
 			cout << "1 nao e numero primo.";	
		}
		else
		{
			for(i = 2; i <= num / 2; i++)
 			{
 				if(num % i == 0)
 				{
 					rt++;
				}
			}
			if (rt == 0)
			{
				cout << num << " e um numero primo.";
			}
			else
			{
				cout << num << " nao e um numero primo.";
			}
		}	
		cout<<endl<<endl<<"Deseja calcular novo numero (S/N)? ";
      	cin>>cont;
	}
	while(cont=='S'||cont=='s');
}
