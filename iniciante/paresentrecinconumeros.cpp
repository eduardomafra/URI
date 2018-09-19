/*
Faça um programa que leia 5 valores inteiros. Conte quantos destes valores digitados são pares e mostre esta informação.

Entrada
O arquivo de entrada contém 5 valores inteiros quaisquer.

Saída
Imprima a mensagem conforme o exemplo fornecido, indicando a quantidade de valores pares lidos.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n[5], pares=0;

    for(int i=0; i < 5; i++){
        cin >> n[i];
    }

    for(int i=0; i < 5; i++){
        if(n[i] %2 == 0){
            pares++;
        }

    }


    cout << pares << " valores pares" << endl;



    return 0;
}
