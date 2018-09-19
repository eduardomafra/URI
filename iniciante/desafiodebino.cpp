/*
Bino e Cino são colegas inseparáveis. Bino gosta de criar desafios matemáticos para Cino resolver. Desta vez, Bino gerou uma lista de números e perguntou ao Cino quantos números da lista são múltiplos de 2, 3, 4 e 5.

Esse desafio pode parecer simples, porém, quando a lista contém muitos números, Cino se confunde e acaba errando alguns cálculos. Para ajudar Cino, faça um programa para resolver o desafio de Bino.

Entrada
A primeira linha da entrada consiste em um inteiro N (1 ≤ N ≤1000), representando a quantidade de números na lista de Bino.

A segunda linha contém N inteiros Li (1 ≤ Li ≤ 100), representando os números da lista de Bino.

Saída
Imprima a quantidade de números múltiplos de 2, 3, 4 e 5 presentes na lista. Observe a formatação da saída nos exemplos, pois ela deve ser seguida rigorosamente.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int op, m2=0, m3=0, m4=0, m5=0;

    cin >> op;

    int n[op];

    for(int i = 0; i < op; i++){
        cin >> n[i];
        if(n[i]%2 == 0){
            m2++;
        }
        if(n[i]%3 == 0){
            m3++;
        }
        if(n[i]%4 == 0){
            m4++;
        }
        if(n[i]%5 == 0){
            m5++;
        }
    }

    cout << m2 << " Multiplo(s) de 2" << endl;
    cout << m3 << " Multiplo(s) de 3" << endl;
    cout << m4 << " Multiplo(s) de 4" << endl;
    cout << m5 << " Multiplo(s) de 5" << endl;


    return 0;
}