/*
Leia um conjunto não determinado de pares de valores M e N (parar quando algum dos valores for menor ou igual a zero). Para cada par lido, mostre a sequência do menor até o maior e a soma dos inteiros consecutivos entre eles (incluindo o N e M).

Entrada
O arquivo de entrada contém um número não determinado de valores M e N. A última linha de entrada vai conter um número nulo ou negativo.

Saída
Para cada dupla de valores, imprima a sequência do menor até o maior e a soma deles, conforme exemplo abaixo.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n1, n2, soma=0;

    do{
        soma = 0;
        cin >> n1 >>  n2;
        if(n1 > 0 && n2 > 0){
            if(n1 > n2){
                for(int i=n2; i <=n1; i++){
                    cout << i << " ";
                    soma = soma + i;
                }
                cout << "Sum=" << soma << endl;
            }
            else if(n2 > n1){
                for(int i=n1; i <= n2; i++){
                    cout << i << " ";
                    soma = soma + i;
                }
                cout << "Sum=" << soma << endl;
            }
            else if(n1 == n2){
                cout << n1 << " Sum=" << n1 << endl;
            }
        }


    }while(n1 > 0 && n2 > 0);


    return 0;
}