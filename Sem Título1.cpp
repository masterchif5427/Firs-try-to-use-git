#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include<time.h>//necessário p/ função time()
using namespace std;
int main()
{
  int vetor[10], maior=0, menor=101;
  system("cls");
  cout<<"Funcao para gerar numeros aleatorios\n";
  cout<<"------------------------------------\n";
  srand(time(NULL)); //função p/ gerar os numeros aleatorios
  for (int i=0; i < 11; i++)
  {
    // gerando valores aleatórios na faixa de 0 a 100
    vetor[i] = rand() % 100+1;
    if(maior<vetor[i])
    {
    	maior=vetor[i];
	}
	if(menor>vetor[i])
	{
		menor=vetor[i];
	}
    cout<<vetor[i]<<" ";
  }
  cout<<endl<<"O maior numero do vetor e: "<<maior<<" e o menor e: "<<menor<<endl;
  system("pause"); 
}

