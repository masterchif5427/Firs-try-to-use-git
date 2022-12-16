//string :: length
#include<iostream>
//#include <string>
#include<conio.h>
using namespace std;
int main()
{
	string str;
	cout<<"\n Digite uma string qualquer: "; getline(cin, str);;
	cout<<"\n A string digitada tem: "<<str.length() << " bytes(caracteres).\n";
	getche();
}
