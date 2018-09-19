/*
Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares entre eles.

Entrada
O arquivo de entrada contém dois valores inteiros.

Saída
O programa deve imprimir um valor inteiro. Este valor é a soma dos valores ímpares que estão entre os valores fornecidos na entrada que deverá caber em um inteiro.
*/

#include <iostream>
#include <math.h>
#include <cstdio>

using namespace std;

int main()
{
    int n1, n2, aux=0;

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

    return 0;
}
