#include <stdlib.h>
#include <iostream>

using namespace std;

main()
{
	int vitor[10], maior=0, menor=101;
	
	for(int i=0;i<11;i++)
	{
		vitor[i] = rand() % 100 + 1;
		
		if(maior < vitor[i])
		{
			maior = vitor[i];
		}
		if(menor > vitor[i])
		{
			menor = vitor[i];
		}
		
		cout<<vitor[i]<<"    ";
	}
	
	cout<<endl<<"O maior numero do vitor e "<<maior<<" e o menor e "<<menor<<endl;
	system("pause");
}
