/*
Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula:

Distancia = *imagem*

Entrada
O arquivo de entrada contém duas linhas de dados. A primeira linha contém dois valores de ponto flutuante: x1 y1 e a segunda linha contém dois valores de ponto flutuante x2 y2.

Saída
Calcule e imprima o valor da distância segundo a fórmula fornecida, com 4 casas após o ponto decimal.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x1, x2, y1, y2, d1, d2, soma, result;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    d1 = (x2 - x1) * (x2 - x1);
    d2 = (y2 - y1) * (y2 - y1);
    soma = d1 + d2;
    result = sqrt(soma);

    std::cout.precision(4);
    std::cout << std::fixed << result << endl;


    return 0;
}
