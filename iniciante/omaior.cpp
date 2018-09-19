/*
Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula:

*imagem*

Entrada
O arquivo de entrada contém três valores inteiros.

Saída
Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior".
*/

#include <iostream>

using namespace std;

int main()
{
    int n, maior = 0;

    for(int i = 0; i < 3; i++){
        cin >> n;
        if(n > maior){
            maior = n;
        }
    }

    cout << maior << " eh o maior" << endl;


    return 0;
}
