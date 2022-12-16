#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;
float calcula (float xsb, float xinss, float xextra)
{
	float xsl;
	xsl=xsb+xextra*20.00-xinss;
	return xsl;
}

main()
{
	float sb,inss,extra,sl;
	cout<<"\nFunção para calcular o salario\n";
	cout<<"\n------------------------------\n";
	cout<<"\nEntre com o valor do salario bruto R$ ";
	cin>>sb;
	if(sb=1240)
	
		inss=0.07;
	else if (sb>1240 && sb<=2500)
	inss=0.09;
	else
	inss=0.11;
	inss=sb*inss;
	cout<<"\nValor calculado para o desconto de inss R$ "<<fixed<<setprecision(2)<<inss;
	cout<<"\nEntre com a quantidade de horas extras: ";cin>>extra;
	sl=calcula(sb,inss,extra);
	cout<<"\nO Valor do salario liquido e R$ "<<fixed<<setprecision(2)<<sl;
	cout<<"\nPressione qualquer tecla para sair... ";
	getche();
}
