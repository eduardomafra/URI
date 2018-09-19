/*
Faça um algoritmo para ler um número indeterminado de dados, contendo cada um, a idade de um indivíduo. O último dado, que não entrará nos cálculos, contém o valor de idade negativa. Calcular e imprimir a idade média deste grupo de indivíduos.

Entrada
A entrada contém um número indeterminado de inteiros. A entrada será encerrada quando um valor negativo for lido.

Saída
A saída contém um valor correspondente à média de idade dos indivíduos.

A média deve ser impressa com dois dígitos após o ponto decimal.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n=0;
    float aux=0, soma, cont=0;

    while(n >= 0){
        cin >> n;
        if(n >= 0){
        aux = aux + (float)n;
        cont++;
        }
    }

    soma = aux/cont;

    std::cout.precision(2);
    std::cout << std::fixed << soma << endl;



    return 0;
}