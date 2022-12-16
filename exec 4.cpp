#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int aux, num, div=0;
    char cont;
    do{
	
    system("cls");
    cout<<"Digite o numero: \n\n";
    cin>>num;
    for(aux=1 ; aux<=num ; aux++)
    	{
        if(num%aux==0)
        {
            div++;
		}
    if(div==2){
	
		
        cout<<num<<" Eh primo\n";
}
	else{
	
        cout<<num<<"\n\n Naum eh primo";
}
	}
        cout<<endl<<endl<<"Deseja uma nova pesquisa (S/N) ?";
	cin>>cont;
	}
	while(cont=='S'||cont=='s');	
	//getche(); //biblioteca c++ conio.h
}
   
