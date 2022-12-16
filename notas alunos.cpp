#include <iostream>
using namespace std;

float ma(float n1, float n2, float n3, float n4){
	return (n1 + n2 + n3 + n4)/4;
}

float mp(float media, float c){
	return media/c;
}

int main()
{
    float notas[4], media = -1;
    string resp;

	for (int i = 0; i < 4; i++){
		
		if(i < 3){
			cout << "Insira o valor desejado: ";
			cin >> notas[i];	
		}else{
			cout << "Deseja inserir uma nova nota? S/N: ";
			cin >> resp;
		
			if(resp == "s" || resp == "S"){
				cout << "Insira o valor desejado: ";
				cin >> notas[i];
			}else{
				int b = 0, c = 0;
				for(b = 0;b <= i-1; b++){
			
					media += notas[b];
						
					c += b+1;
				}
				
				media = mp(media, c);
				break;
			}
		}
		
	}
	
	if(media == -1){
		media =	ma(notas[0], notas[1], notas[2], notas[3]);
	}
	

    cout << "Media: " << media;

    return 0;
}

