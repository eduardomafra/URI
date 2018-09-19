/*
Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.

Entrada
A entrada contem três números inteiros.

Saída
Imprima a saída conforme foi especificado.


*/

#include <iostream>

using namespace std;

int main()
{
    int n[3], ordem[3], aux;

    for(int i=0; i < 3; i++){
        cin >> n[i];
    }

    for(int j=0; j < 3; j++){
        ordem[j] = n[j];
    }

    if(ordem[0] > ordem[1]){
        aux = ordem[0];
        ordem[0] = ordem[1];
        ordem[1] = aux;
    }

    if(ordem[1] > ordem[2]){
        aux = ordem[1];
        ordem[1] = ordem[2];
        ordem[2] = aux;
    }

    if(ordem[2] < ordem[0]){
        aux = ordem[0];
        ordem[0] = ordem[2];
        ordem[2] = aux;
    }
    if(ordem[1] < ordem[0]){
        aux = ordem[1];
        ordem[1] = ordem[0];
        ordem[0] = aux;
    }


    for(int i=0; i < 3; i++){
        cout << ordem[i] << endl;
    }
        cout << endl;
    for(int i=0; i < 3; i++){
        cout << n[i] << endl;
    }

    return 0;
}
