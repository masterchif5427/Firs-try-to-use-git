#include <stdio.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include<time.h>//necessário p/ função time()
int main()
{
  int i;
  do
	{
  
  system("cls");
  printf("Funcao para gerar numeros aleatorios\n");
  printf("------------------------------------\n\n");
  srand(time(NULL)); //função p/ gerar os numeros aleatorios
  for (i=0; i < 10; i++)
  {
    // gerando valores aleatórios na faixa de 0 a 100
    printf("%d ", rand() % 100);
  }
	}
	 while("printf=s");
	{
		printf("\nDigite <S/N> para continuar ou finalizar... ");
	}
  
}
