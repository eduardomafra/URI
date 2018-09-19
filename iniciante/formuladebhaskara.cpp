/*
Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”, caso haja uma divisão por 0 ou raiz de numero negativo.

Entrada
Leia três valores de ponto flutuante (double) A, B e C.

Saída
Se não houver possibilidade de calcular as raízes, apresente a mensagem "Impossivel calcular". Caso contrário, imprima o resultado das raízes com 5 dígitos após o ponto, com uma mensagem correspondente conforme exemplo abaixo. Imprima sempre o final de linha após cada mensagem.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    double a, b, c, delta, rdelta, r1, r2;

    cin >> a >> b >> c;

    delta = (b*b) - 4 * a * c;
    rdelta = sqrt(delta);

    r1 = (-b + rdelta)/(2*a);
    r2 = (-b - rdelta)/(2*a);

    if(delta < 0 || a == 0){
        cout << "Impossivel calcular" << endl;
    }else{
    std::cout.precision(5);
    std::cout << std::fixed << "R1 = " << r1 << endl << "R2 = " << r2 << endl;
    }

    return 0;
}
