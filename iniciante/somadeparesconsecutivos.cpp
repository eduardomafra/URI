/*
O programa deve ler um valor inteiro X indefinidas vezes. (O programa irá parar quando o valor de X for igual a 0). Para cada X lido, imprima a soma dos 5 pares consecutivos a partir de X, inclusive o X , se for par. Se o valor de entrada for 4, por exemplo, a saída deve ser 40, que é o resultado da operação: 4+6+8+10+12, enquanto que se o valor de entrada for 11, por exempo, a saída deve ser 80, que é a soma de 12+14+16+18+20.

Entrada
O arquivo de entrada contém muitos valores inteiros. O último valor do arquivo é zero.

Saída
Imprima a saida conforme a explicação acima e o exemplo abaixo.
*/

#include <iostream>
#include <math.h>
#include <cstdio>

using namespace std;

int main()
{
    int n1=1, soma, aux;

    do{
        aux = 0;
        cin >> n1;

        if(n1 != 0){
        for(int i=n1; i <= n1+9; i++){
            if(i%2 == 0){
                aux = aux + i;
            }
        }
        cout << aux << endl;
        }

    }while(n1 != 0);


    return 0;
}