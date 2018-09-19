/*
Leia um valor inteiro N. Apresente todos os números entre 1 e 10000 que divididos por N dão resto igual a 2.

Entrada
A entrada contém um valor inteiro N (N < 10000).

Saída
Imprima todos valores que quando divididos por N dão resto = 2, um por linha.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n1;

    cin >> n1;

    for(int i=0; i < 10000; i++){
        if(i%n1 == 2){
            cout << i << endl;
        }
    }


    return 0;
}
