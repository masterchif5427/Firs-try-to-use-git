#include <stdio.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>// necess�rio p/ as fun��es rand() e srand()
#include<time.h>//necess�rio p/ fun��o time()
int main()
{
  int i;
  do
	{
  
  system("cls");
  printf("Funcao para gerar numeros aleatorios\n");
  printf("------------------------------------\n\n");
  srand(time(NULL)); //fun��o p/ gerar os numeros aleatorios
  for (i=0; i < 10; i++)
  {
    // gerando valores aleat�rios na faixa de 0 a 100
    printf("%d ", rand() % 100);
  }
	}
	 while("printf=s");
	{
		printf("\nDigite <S/N> para continuar ou finalizar... ");
	}
  
}
