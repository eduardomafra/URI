/*
Faça um programa que leia 6 valores. Estes valores serão somente negativos ou positivos (desconsidere os valores nulos). A seguir, mostre a quantidade de valores positivos digitados.

Entrada
Seis valores, negativos e/ou positivos.

Saída
Imprima uma mensagem dizendo quantos valores positivos foram lidos.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float n[6];
    int cont;

    for(int i=0; i<6; i++){
        cin >> n[i];
    }

    for(int i=0; i<6; i++){
        if(n[i] > 0){
            cont++;
        }
    }

    cout << cont << " valores positivos" << endl;


    return 0;
}
