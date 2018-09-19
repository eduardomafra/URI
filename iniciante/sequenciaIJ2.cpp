/*
Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

Entrada
Não há nenhuma entrada neste problema.

Saída
Imprima a sequencia conforme exemplo abaixo

Exemplo de Saída
I=1 J=7
I=1 J=6
I=1 J=5
I=3 J=7
I=3 J=6
I=3 J=5
...
I=9 J=7
I=9 J=6
I=9 J=5
*/

#include <iostream>

using namespace std;

int main()
{
    for(int i = 1; i <= 9; i=i+2){
        for(int j = 7; j >= 5; j--){
            cout << "I=" << i << " J=" << j << endl;
        }

    }

    return 0;
}
