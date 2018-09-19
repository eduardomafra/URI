/*
Entrada
Não há nenhuma entrada neste problema.

Saída
Imprima a sequencia conforme exemplo abaixo.

Exemplo de Saída
I=1 J=7
I=1 J=6
I=1 J=5
I=3 J=9
I=3 J=8
I=3 J=7
...
I=9 J=15
I=9 J=14
I=9 J=13
*/

#include <iostream>

using namespace std;

int main()
{
    int i=1, j=0, k=7, cont=0;
    for(i=1;i<=9;i=i+2){
        j=k;
        for(cont=0;cont<3;cont++){
        cout<<"I="<<i<<" J="<<j<<endl;
        j--;
        }
        k=k+2;
    }

    return 0;
}
