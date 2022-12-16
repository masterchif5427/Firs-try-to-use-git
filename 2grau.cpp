#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main()
{
    float a, b, c, delta, x1, x2;
    cout << "Digite o coeficiente a: ";
    cin >> a;
    cout << "Digite o coeficiente b: ";
    cin >> b;
    cout << "Digite o coeficiente c: ";
    cin >> c;

    if(a!=0)
	{
        delta=(b*b)-(4*a*c);

        if(delta<0)
		{
            cout<<endl<<"Nao tem raizes reais.";
        }
        else if (delta==0)
		{
            x1=(-b)/(2*a);
            cout<<endl<< "Possui apenas uma raiz real: "<<x1<<endl;
        }
		else
			{
            x1=(-b - sqrt(delta))/(2*a);
            x2=(-b + sqrt(delta))/(2*a);
            cout<< "Raiz 1: "<<x1<<endl;
            cout<< "Raiz 2: "<<x2<<endl;
        	}
    }
	else
		{
        cout <<"a=0, nao e uma equacao do segundo grau.";
    	}
    	cout<<endl<<endl<<"Pressione <ENTER> para finalizar. ";
        getche();
    	
}

