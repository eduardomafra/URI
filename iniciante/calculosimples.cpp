/*
Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.

Entrada
O arquivo de entrada contém duas linhas de dados. Em cada linha haverá 3 valores, respectivamente dois inteiros e um valor com 2 casas decimais.

Saída
A saída deverá ser uma mensagem conforme o exemplo fornecido abaixo, lembrando de deixar um espaço após os dois pontos e um espaço após o "R$". O valor deverá ser apresentado com 2 casas após o ponto.
*/

#include <iostream>

using namespace std;

int main()
{
    int codigoPeca1, codigoPeca2, numeroPeca1, numeroPeca2;
    double valorPeca1, valorPeca2, total;
    cin >> codigoPeca1 >> numeroPeca1 >> valorPeca1 >> codigoPeca2 >> numeroPeca2 >> valorPeca2;
    total=(numeroPeca1*valorPeca1)+(numeroPeca2*valorPeca2);
    std::cout.precision(2);
    std::cout << "VALOR A PAGAR: R$ " << std::fixed << total << endl;
    return 0;
}
