/*
Escreva um algoritmo para calcular e escrever o valor de S, sendo S dado pela fórmula:
S = 1 + 3/2 + 5/4 + 7/8 + ... + 39/?

Entrada
Não há nenhuma entrada neste problema.

Saída
A saída contém um valor correspondente ao valor de S.
O valor deve ser impresso com dois dígitos após o ponto decimal.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float s=0;

    for(float i=3, j=2; i <=39; i=i+2, j=j*2){
        s = s + i/j;
    }
    s = s + 1;

    std::cout.precision(2);
    std::cout << std::fixed << s << endl;




    return 0;
}