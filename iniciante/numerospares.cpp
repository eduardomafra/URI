/*
Faça um programa que mostre os números pares entre 1 e 100, inclusive.

Entrada
Neste problema extremamente simples de repetição não há entrada.

Saída
Imprima todos os números pares entre 1 e 100, inclusive se for o caso, um em cada linha.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    for(int i=2; i <= 100; i=i+2){
        cout << i << endl;
    }


    return 0;
}
