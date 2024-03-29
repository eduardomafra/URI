/*
Calcule o consumo médio de um automóvel sendo fornecidos a distância total percorrida (em Km) e o total de combustível gasto (em litros).

Entrada
O arquivo de entrada contém dois valores: um valor inteiro X representando a distância total percorrida (em Km), e um valor real Y representando o total de combustível gasto, com um dígito após o ponto decimal.

Saída
Apresente o valor que representa o consumo médio do automóvel com 3 casas após a vírgula, seguido da mensagem "km/l".
*/

#include <iostream>

using namespace std;

int main()
{
    int x;
    double y, z;

    cin >> x;
    cin >> y;
    z=x/y;
    std::cout.precision(3);
    std::cout << std::fixed << z << " km/l" <<endl;

    return 0;
}
