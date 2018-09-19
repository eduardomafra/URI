/*
Ler um número inteiro N e calcular todos os seus divisores.

Entrada
O arquivo de entrada contém um valor inteiro.

Saída
Escreva todos os divisores positivos de N, um valor por linha.
*/

#include <iostream>
#include <math.h>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i=1; i <= n; i++){
        if(n%i == 0){
            cout << i << endl;
        }
    }


    return 0;
}
