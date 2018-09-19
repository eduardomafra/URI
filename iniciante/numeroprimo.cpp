/*
Na matemática, um Número Primo é aquele que pode ser dividido somente por 1 (um) e por ele mesmo. Por exemplo, o número 7 é primo, pois pode ser dividido apenas pelo número 1 e pelo número 7.

Entrada
A entrada contém vários casos de teste. A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 100), indicando o número de casos de teste da entrada. Cada uma das N linhas seguintes contém um valor inteiro X (1 < X ≤ 107), que pode ser ou não, um número primo.

Saída
Para cada caso de teste de entrada, imprima a mensagem “X eh primo” ou “X nao eh primo”, de acordo com a especificação fornecida.
*/

#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    int c, n, div=0;

    cin >> c;

    for(int i=0; i < c; i++){
        div=0;
        cin >> n;
        for(int j=1; j <= n; j++){
        if(n%j==0){
        div++;
        }
        }
        if(div==2 && n > 0){
        cout << n << " eh primo" << endl;
        }
        else{
        cout << n << " nao eh primo" << endl;
        }
    }


    return 0;
}
