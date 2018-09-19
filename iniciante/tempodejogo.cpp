/*
Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas.

Entrada
A entrada contém dois valores inteiros representando a hora de início e a hora de fim do jogo.

Saída
Apresente a duração do jogo conforme exemplo abaixo.


Exemplo de Entrada	
16 2

Exemplo de Saída
O JOGO DUROU 10 HORA(S)

*/

#include <iostream>
#include <math.h>
#include <cstdio>

using namespace std;

int main()
{
    int n[2], horas;

    for(int i=0; i < 2; i++){
        cin >> n[i];
    }

    if(n[0] > n[1]){
        horas = (24 - n[0]) + n[1];
        cout << "O JOGO DUROU " << horas << " HORA(S)" << endl;
    }
    else if(n[0] < n[1]){
        horas = n[1] - n[0];
        cout << "O JOGO DUROU " << horas << " HORA(S)" << endl;
    }
    else if(n[1] == n[0]){
        cout << "O JOGO DUROU 24 HORA(S)" << endl;
    }

    return 0;
}
