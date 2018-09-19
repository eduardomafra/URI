/*
Escreva um algoritmo para calcular e escrever o valor de S, sendo S dado pela fórmula:
S = 1 + 1/2 + 1/3 + … + 1/100

Entrada
Não há nenhuma entrada neste problema.

Saída
A saída contém um valor correspondente ao valor de S.
O valor deve ser impresso com dois dígitos após o ponto decimal.
*/

#include <iostream>

using namespace std;

int main()
{
    float s=0, aux = 0;

    for(float i=1; i <= 100; i++){
        s = s + (1/i);
    }


    std::cout.precision(2);
    std::cout << std::fixed << s << endl;

    return 0;
}