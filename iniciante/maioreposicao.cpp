/*
Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos.

Entrada
O arquivo de entrada contém 100 números inteiros, positivos e distintos.

Saída
Apresente o maior valor lido e a posição de entrada, conforme exemplo abaixo.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n[100], n2=0, posicao;

    for(int i=0; i < 100; i++){
        cin >> n[i];
    }

    for(int i=0; i < 100; i++){
        if (n[i] >= n2){
            n2 = n[i];
            posicao = i+1;
        }
    }

    cout << n2 << endl << posicao << endl;

    return 0;
}
