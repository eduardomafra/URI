/*
Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo, mostrando essas informações.

Entrada
A primeira linha da entrada contém um valor inteiro N (N < 10000), que indica o número de casos de teste.
Cada caso de teste a seguir é um valor inteiro X (-107 < X <107).
 

Saída
Para cada caso, imprima quantos números estão dentro (in) e quantos valores estão fora (out) do intervalo.
*/

#include <iostream>
#include <math.h>
#include <cstdio>

using namespace std;

int main()
{
    int qntd, n[9999], in=0, out=0;

    cin >> qntd;

    for(int i=0; i < qntd; i++){
        cin >> n[i];
        if(n[i] >= 10 && n[i] <= 20){
            in++;
        }else{
        out++;}
    }
    cout << in << " in" << endl << out << " out" << endl;

    return 0;
}
