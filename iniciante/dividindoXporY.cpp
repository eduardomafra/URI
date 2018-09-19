/*
Escreva um algoritmo que leia 2 números e imprima o resultado da divisão do primeiro pelo segundo. Caso não for possível mostre a mensagem “divisao impossivel” para os valores em questão.

Entrada
A entrada contém um número inteiro N. Este N será a quantidade de pares de valores inteiros (X e Y) que serão lidos em seguida.

Saída
Para cada caso mostre o resultado da divisão com um dígito após o ponto decimal, ou “divisao impossivel” caso não seja possível efetuar o cálculo.

Obs.: Cuide que a divisão entre dois inteiros em algumas linguagens como o C e C++ gera outro inteiro. Utilize cast :)
*/

#include <iostream>
#include <math.h>
#include <cstdio>

using namespace std;

int main()
{
    int cont=0, n;
    float n1, n2, soma;

    cin >> n;

    do{
    cin >> n1 >> n2;

    if(n2 == 0){
        cout << "divisao impossivel" << endl;
    }
    else{
        soma = n1/n2;
        std::cout.precision(1);
        std::cout << std::fixed << soma << endl;
    }
    cont++;
    }while(cont < n);


    return 0;
}
