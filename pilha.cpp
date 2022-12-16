#include <stack>
#include <iostream>

using namespace std;

int main(){
    stack<int> pilha;
    for(int i=0;i<10;i++){
        pilha.push(i);
    }
    cout << pilha.top() << endl;
    pilha.pop();
    cout << pilha.top() << endl;
    for(int i=0;i<9;i++){
        pilha.pop();
        if(pilha.empty()){
            cout << "Fiquei vazia na iteracao: " << i << endl;
        }
    }
    cout<<endl<<endl;
}

