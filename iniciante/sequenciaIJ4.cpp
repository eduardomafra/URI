/*
Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

Entrada
Não há nenhuma entrada neste problema.

Saída
Imprima a sequencia conforme exemplo abaixo.

Exemplo de Saída
I=0 J=1
I=0 J=2
I=0 J=3
I=0.2 J=1.2
I=0.2 J=2.2
I=0.2 J=3.2
.....
I=2 J=?
I=2 J=?
I=2 J=?

*/

#include <iostream>

using namespace std;

int main()
{
    for(double i=0; i<=2; i=i+0.2){
        for(double j=1;j<=3;j++){
            cout << "I=" << i << " J=" << j+i << endl;
        }
    }


    return 0;
}
