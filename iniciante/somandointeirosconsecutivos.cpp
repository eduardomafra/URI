/*
Faça um algoritmo para ler um valor A e um valor N. Imprimir a soma de A para cada i com os valores (0 <= i <= N-1). Enquanto N for negativo ou ZERO, um novo N(apenas N) deve ser lido.

Entrada
A entrada contém somente valores inteiros, podendo ser positivos ou negativos. Todos os valores estão na mesma linha.

Saída
A saída contém apenas um valor inteiro.
*/

#include <iostream>

using namespace std;

int main()
{
    int a, n, total=0;

    cin >> a;
    do{
        cin >> n;
    }while(n<=0);

    for(int i=1; i <= n; i++){
        total+=a;
        a++;
    }

    cout << total << endl;


    return 0;
}