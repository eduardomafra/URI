/*
Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste de dois inteiros X e Y. Você deve apresentar a soma de todos os ímpares existentes entre X e Y.

Entrada
A primeira linha de entrada é um inteiro N que é a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste em uma linha contendo dois inteiros X e Y.

Saída
Imprima a soma de todos valores ímpares entre X e Y.
*/

#include <iostream>
#include <math.h>
#include <cstdio>

using namespace std;

int main()
{
    int n1, n2, aux=0, qntd;

    cin >> qntd;
    for(int i=1; i <= qntd; i++){
    aux = 0;
    cin >> n1 >> n2;

    if(n1 > n2){
        for(int i=n2+1; i < n1; i++){
            if(i%2 != 0){
                aux = aux + i;
            }
        }
    }else if(n2 > n1){
        for(int i=n1+1; i < n2; i++){
            if(i%2 != 0){
                aux = aux + i;
            }
        }
    }

    cout << aux << endl;

    }

    return 0;
}