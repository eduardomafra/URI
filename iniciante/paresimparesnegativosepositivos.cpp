/*
Leia 5 valores Inteiros. A seguir mostre quantos valores digitados foram pares, quantos valores digitados foram ímpares, quantos valores digitados foram positivos e quantos valores digitados foram negativos.

Entrada
O arquivo de entrada contém 5 valores inteiros quaisquer.

Saída
Imprima a mensagem conforme o exemplo fornecido, uma mensagem por linha, não esquecendo o final de linha após cada uma.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n[5], impar = 0, par = 0, positivo = 0, negativo = 0;

    for(int i=0; i < 5; i++){
        cin >> n[i];
    }

    for(int i=0; i < 5; i++){
        if(n[i] > 0){
            positivo++;
        }
        else if(n[i] < 0){
            negativo++;
        }
        if(n[i]%2 == 0){
            par++;
        }
        else if(n[i]%2 != 0){
            impar++;
        }

    }

    cout << par << " valor(es) par(es)" << endl;
    cout << impar << " valor(es) impar(es)" << endl;
    cout << positivo << " valor(es) positivo(s)" << endl;
    cout << negativo << " valor(es) negativo(s)" << endl;

    return 0;
}
