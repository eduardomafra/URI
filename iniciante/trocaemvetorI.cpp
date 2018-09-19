/*
Faça um programa que leia um vetor N[20]. Troque a seguir, o primeiro elemento com o último, o segundo elemento com o penúltimo, etc., até trocar o 10º com o 11º. Mostre o vetor modificado.

Entrada
A entrada contém 20 valores inteiros, positivos ou negativos.

Saída
Para cada posição do vetor N, escreva "N[i] = Y", onde i é a posição do vetor e Y é o valor armazenado naquela posição.
*/

#include <iostream>
#include <math.h>
#include <cstdio>

using namespace std;

int main()
{
    int n[20], aux[20];

    for(int i=0; i < 20; i++){
        cin >> n[i];
    }

    for(int i=0, j=19; i < 20, j >= 0; i++, j--){
            aux[i] = n[j];
    }

    for(int i=0; i < 20; i++){
        cout << "N[" << i << "] = " << aux[i] << endl;
    }

    return 0;
}
