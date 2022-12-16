#include <iostream>
#include <iomanip>

using namespace std;

float celcioFadaraint(float temp){
	return ((temp * 9/5) +32);
}
float celcioKevin(float temp){
	return temp + 273;
}
float fadaraintCelcio(float temp){
	return ((temp-32) * 5/9);
}
float fadaraintKevin(float temp){
	return ((temp-32) * 5/9 + 273);
}
float kevinCelcio(float temp){
	return temp - 273;
}
float kevinFadaraint(float temp){
	return ((temp-273) * 9/5 + 32);
}

int main()
{
	float temp, conversao;
	int opcao=0;
	
	cout<<"========================="<<endl;
	cout<<"CONVERSOR DE TEMPERATURA"<<endl;
	cout<<"========================="<<endl;
	
	cout<<"(1) CELCIO p/ FADARAINT"<<endl;
	cout<<"(2) CELCIO p/ KEVIN"<<endl;
	cout<<"(3) FADARAINT p/ CELCIO"<<endl;
	cout<<"(4) FADARAINT p/ KEVIN"<<endl;
	cout<<"(5) KEVIN p/ CELCIO"<<endl;
	cout<<"(6) KEVIN p/ FADARAINT"<<endl;
	
	cout<<"Qual conversao quer fazer? ";
	cin>>opcao;
	cout<<endl<<"Digite uma temperatura: ";
	cin>>temp;
	
	switch(opcao){	
		case 1:
			conversao = celcioFadaraint(temp);
			cout<<endl<<"Celcio equivalente a "<<fixed<<setprecision(2)<<conversao<<" fadaraint"<<endl;
			break;
		case 2:
			conversao = celcioKevin(temp);
			cout<<endl<<"Celcio equivalente a "<<fixed<<setprecision(2)<<conversao<<" kevin"<<endl;
			break;
		case 3:
			conversao = fadaraintCelcio(temp);
			cout<<endl<<"Fadaraint equivalente a "<<fixed<<setprecision(2)<<conversao<<" celcio"<<endl;
			break;
		case 4:
			conversao = fadaraintKevin(temp);
			cout<<endl<<"Fadaraint equivalente a "<<fixed<<setprecision(2)<<conversao<<" kevin"<<endl;
			break;
		case 5:
			conversao = kevinCelcio(temp);
			cout<<endl<<"Kevin equivalente a "<<fixed<<setprecision(2)<<conversao<<" celcio"<<endl;
			break;
		case 6:
			conversao = kevinFadaraint(temp);
			cout<<endl<<"Kevin equivalente a "<<fixed<<setprecision(2)<<conversao<<" fadaraint"<<endl;
			break;
	}
	
	system("pause");
}


