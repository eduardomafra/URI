/*
Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com um dígito após o ponto decimal.

Entrada
A entrada contém 6 números que podem ser valores inteiros ou de ponto flutuante. Pelo menos um destes números será positivo.

Saída
O primeiro valor de saída é a quantidade de valores positivos. A próxima linha deve mostrar a média dos valores positivos digitados.
*/

#include <iostream>
#include <math.h>
#include <cstdio>

using namespace std;

int main()
{
    double n[6], soma=0, media, pos=0;

    for(int i=0; i < 6; i++){
        cin >> n[i];
        if(n[i] > 0){
            pos++;
            soma = soma + n[i];
        }

    }
    media = soma/pos;

    cout << pos << " valores positivos" << endl;
    std::cout.precision(1);
    std::cout << std::fixed << media << endl;

    return 0;
}
