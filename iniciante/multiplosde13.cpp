/*
Escreva um algoritmo que leia 2 valores inteiros X e Y calcule a soma dos números que não são múltiplos de 13 entre X e Y, incluindo ambos.

Entrada
O arquivo de entrada contém 2 valores inteiros quaisquer, não necessariamente em ordem crescente.

Saída
Imprima a soma de todos os valores não divisíveis por 13 entre os dois valores lidos na entrada, inclusive ambos se for o caso.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x, y, soma=0;

    cin >> x >> y;

    if(x > y){
        for(int i=y; i <= x; i++){
            if(i%13 != 0){
                soma = soma + i;
            }
        }
        cout << soma << endl;
    }
    else if(y > x){
        for(int i=x; i <= y; i++){
            if(i%13 != 0){
                soma = soma + i;
            }
        }
        cout << soma << endl;
    }
    else if(x == y){
        for(int i=x; i <= y; i++){
            if(i%13 != 0){
                soma = soma + i;
            }
        cout << soma << endl;
        }
    }


    return 0;
}