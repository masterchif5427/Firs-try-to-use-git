#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> fila;
    for(int i=0;i<10;i++)
	{
        fila.push(i);
    }
    cout << fila.front() << endl;
    fila.pop();
    cout << fila.front() << endl;

    for(int i=0;i<9;i++)
	{
        fila.pop();
        if(fila.empty())
		{
            cout << "Vazio na itera��o " << i << endl;
        }
    }

}

