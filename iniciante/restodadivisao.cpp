/*
Escreva um programa que leia 2 valores X e Y e que imprima todos os valores entre eles cujo resto da divisão dele por 5 for igual a 2 ou igual a 3.

Entrada
O arquivo de entrada contém 2 valores positivos inteiros quaisquer, não necessariamente em ordem crescente.

Saída
Imprima todos os valores conforme exemplo abaixo, sempre em ordem crescente.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n1, n2;

    cin >> n1 >> n2;

    if(n1 > n2){
        for(int i=n2+1; i < n1; i++){
            if(i%5 == 2 || i%5 == 3){
                cout << i << endl;
            }
        }
    }else if(n1 < n2){
        for(int i=n1+1; i < n2; i++){
            if(i%5 == 2 || i%5 == 3){
                cout << i << endl;
            }
        }
    }

    return 0;
}