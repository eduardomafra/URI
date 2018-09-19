/*
Faça um programa que leia um vetor X[10]. Substitua a seguir, todos os valores nulos e negativos do vetor X por 1. Em seguida mostre o vetor X.

Entrada
A entrada contém 10 valores inteiros, podendo ser positivos ou negativos.

Saída
Para cada posição do vetor, escreva "X[i] = x", onde i é a posição do vetor e x é o valor armazenado naquela posição.
*/

#include <iostream>

using namespace std;


int main()
{
    int x[10];
    for(int i=0; i < 10; i++){
        cin >> x[i];
        if(x[i] <= 0){
            x[i] = 1;
        }
        cout << "X[" << i << "] = " << x[i] << endl;
    }
    return 0;
}