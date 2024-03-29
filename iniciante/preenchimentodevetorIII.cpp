/*
Leia um valor X. Coloque este valor na primeira posição de um vetor N[100]. Em cada posição subsequente de N (1 até 99), coloque a metade do valor armazenado na posição anterior, conforme o exemplo abaixo. Imprima o vetor N.

Entrada
A entrada contem um valor de dupla precisão com 4 casas decimais.

Saída
Para cada posição do vetor N, escreva "N[i] = Y", onde i é a posição do vetor e Y é o valor armazenado naquela posição. Cada valor do vetor deve ser apresentado com 4 casas decimais.
*/

#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    double t, n[100], metade, soma;

    cin >> t;
    metade = t/2;

    for(int i=0; i < 100; i++){
      if(i == 0){
        n[i] = t;
      }else{
        metade = n[i-1]/2;
        n[i] = metade;
      }

    }

    for(int i=0; i < 100; i++){
        std::cout.precision(4);
        std::cout << std::fixed << "N[" << i << "] = " << n[i] << endl;
    }


    return 0;
}