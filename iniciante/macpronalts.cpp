/*
O MacPRONALTS está com uma super promoção, exclusivo para os competidores da primeira Seletiva do MaratonaTEC. Só que teve um problema, todos os maratonistas foram tentar comprar ao mesmo tempo, com isso gerou uma fila muito grande. O pior é que a moça do caixa estava sem calculadora ou um programa para ajudá-la a calcular com maior agilidade, eis que surge você para fazer um programa para ajudar a coitada e aumentar a renda do MacPRONALTS. Segue o cardápio do dia contendo o número do produto e seu respectivo valor.

1001 | R$ 1.50

1002 | R$ 2.50

1003 | R$ 3.50

1004 | R$ 4.50

1005 | R$ 5.50

Entrada
A primeira entrada informada é a quantidade de produtos comprados (1 <= p <= 5). Para cada produto segue a quantidade (1 <= q <= 500) que o consumidor comprou.

Obs.: não poderão ser informados números de produtos repetidos.

Saída
Você deve imprimir o valor da compra com duas casas decimais.
*/

#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    int tst, n;
    float soma=0, qntd, total=0;

    cin >> tst;

    for(int i=0; i < tst; i++){
        cin >> n >> qntd;
        switch(n){
        case 1001: soma = 1.50*qntd; break;
        case 1002: soma = 2.50*qntd; break;
        case 1003: soma = 3.50*qntd; break;
        case 1004: soma = 4.50*qntd; break;
        case 1005: soma = 5.50*qntd; break;
        }
        total = total + soma;
    }

    std::cout.precision(2);
    std::cout << std::fixed << total << endl;

    return 0;
}