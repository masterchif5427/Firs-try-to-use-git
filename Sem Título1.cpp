#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>// necess�rio p/ as fun��es rand() e srand()
#include<time.h>//necess�rio p/ fun��o time()
using namespace std;
int main()
{
  int vetor[10], maior=0, menor=101;
  system("cls");
  cout<<"Funcao para gerar numeros aleatorios\n";
  cout<<"------------------------------------\n";
  srand(time(NULL)); //fun��o p/ gerar os numeros aleatorios
  for (int i=0; i < 11; i++)
  {
    // gerando valores aleat�rios na faixa de 0 a 100
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

