/*
Leia 3 valores reais (A, B e C) e verifique se eles formam ou não um triângulo. Em caso positivo, calcule o perímetro do triângulo e apresente a mensagem:


Perimetro = XX.X


Em caso negativo, calcule a área do trapézio que tem A e B como base e C como altura, mostrando a mensagem


Area = XX.X

Entrada
A entrada contém três valores reais.

Saída
O resultado deve ser apresentado com uma casa decimal.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    double a, b, c, soma;
    cin >> a >> b >> c;
    if(a < (b+c) && b < (a+c) && c < (a+b)){
        soma = a+b+c;
        cout << fixed;
        cout.precision(1);
        cout << "Perimetro = " << soma << endl;
    }else{
        soma = ((a+b)/2)*c;
        cout << fixed;
        cout.precision(1);
        cout << "Area = " << soma << endl;
    }
    return 0;
}
