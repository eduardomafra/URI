/*
Escreva um programa que leia um valor inteiro N (1 < N < 1000). Este N é a quantidade de linhas de saída que serão apresentadas na execução do programa.

Entrada
O arquivo de entrada contém um número inteiro positivo N.

Saída
Imprima a saída conforme o exemplo fornecido.

Exemplo de Entrada	
5

Exemplo de Saída
1 1 1
2 4 8
3 9 27
4 16 64
5 25 125
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        cout << i << " " << (i*i) << " " << (i*i*i);
        cout << endl;
    }



    return 0;
}
