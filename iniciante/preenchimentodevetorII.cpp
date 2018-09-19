/*
Faça um programa que leia um valor T e preencha um vetor N[1000] com a sequência de valores de 0 até T-1 repetidas vezes, conforme exemplo abaixo. Imprima o vetor N.

Entrada
A entrada contém um valor inteiro T (2 ≤ T ≤ 50).

Saída
Para cada posição do vetor, escreva "N[i] = x", onde i é a posição do vetor e x é o valor armazenado naquela posição.
*/

#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    int t, n[1000];

    cin >> t;
    int j=0;
    for(int i=0; i < 1000; i++, j++){
        if(j == t){
        j=0;
        }
        n[i] = j;

    }

    for(int i=0; i < 1000; i++){
        cout << "N[" << i << "] = " << n[i] << endl;
    }


    return 0;
}
