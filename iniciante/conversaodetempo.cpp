/*
Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.

Entrada
O arquivo de entrada contém um valor inteiro N.

Saída
Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido.
*/

#include <iostream>

using namespace std;

int main()
{
    int n, seg, minuto, hora;

    cin >> n;

    hora = n/3600;
    minuto = n/60%60;
    seg = n%60;

    cout << hora << ":" << minuto << ":" << seg << endl;



    return 0;
}
