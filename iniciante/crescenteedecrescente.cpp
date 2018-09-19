/*
Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente.

Entrada
A entrada contém vários casos de teste. Cada caso contém dois valores inteiros X e Y. A leitura deve ser encerrada ao ser fornecido valores iguais para X e Y.

Saída
Para cada caso de teste imprima “Crescente”, caso os valores tenham sido digitados na ordem crescente, caso contrário imprima a mensagem “Decrescente”.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n1, n2;

    do{
        cin >> n1 >> n2;

        if(n1 < n2){
            cout << "Crescente" << endl;
        }else if (n1 > n2){
            cout << "Decrescente" << endl;
        }


    }while(n1 != n2);


    return 0;
}