/*
Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).

Saída
Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, conforme o exemplo fornecido. Não esqueça de imprimir o fim de linha após cada linha, caso contrário seu programa apresentará a mensagem: “Presentation Error”.
*/

#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c, d, e, f, g;

    cin >> n;
    cout << n << endl;
    a = n/100;
    cout << a << " nota(s) de R$ 100,00" << endl;
    b = (n-a*100)/50;
    cout << b << " nota(s) de R$ 50,00" << endl;
    c = (n-a*100-b*50)/20;
    cout << c << " nota(s) de R$ 20,00" << endl;
    d = (n-a*100-b*50-c*20)/10;
    cout << d << " nota(s) de R$ 10,00" << endl;
    e = (n-a*100-b*50-c*20-d*10)/5;
    cout << e << " nota(s) de R$ 5,00" << endl;
    f = (n-a*100-b*50-c*20-d*10-e*5)/2;
    cout << f << " nota(s) de R$ 2,00" << endl;
    g = (n-a*100-b*50-c*20-d*10-e*5-f*2)/1;
    cout << g << " nota(s) de R$ 1,00" << endl;



    return 0;
}
