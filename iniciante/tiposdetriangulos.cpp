/*
Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados. A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada:
se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES
Entrada
A entrada contem três valores de ponto flutuante de dupla precisão A (0 < A) , B (0 < B) e C (0 < C).

Saída
Imprima todas as classificações do triângulo especificado na entrada.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    float a, b, c, aux;
    cin >> a >> b >> c;
    if(c >= b && b >= a){
        aux = a;
        a = c;
        c = aux;
    }else if(b >= c && c >= a){
        aux = b;
        b = c;
        c = a;
        a = aux;
    }else if(b >= a && a >= c){
        aux = b;
        b = a;
        a = aux;
    }else if(c >= a && a >= b){
        aux = c;
        c = b;
        b = a;
        a = aux;
    }else if(a >= c && c >= b){
        aux = c;
        c = b;
        b = aux;
    }

    if(a >= (b+c)){
        cout << "NAO FORMA TRIANGULO" << endl;
    }else if((a*a) == (b*b) + (c*c)){
        cout << "TRIANGULO RETANGULO" << endl;
        if( a == b && b == c){
            cout << "TRIANGULO EQUILATERO" << endl;
        }else if (a == b && b != c || b == c && c != a || a == c && c != b){
            cout << "TRIANGULO ISOSCELES" << endl;
    }
    }else if((a*a) > (b*b) + (c*c)){
        cout << "TRIANGULO OBTUSANGULO" << endl;
        if( a == b && b == c){
            cout << "TRIANGULO EQUILATERO" << endl;
        }else if (a == b && b != c || b == c && c != a || a == c && c != b){
            cout << "TRIANGULO ISOSCELES" << endl;
    }
    }else if((a*a) < (b*b) + (c*c)){
        cout << "TRIANGULO ACUTANGULO" << endl;
        if( a == b && b == c){
            cout << "TRIANGULO EQUILATERO" << endl;
        }else if (a == b && b != c || b == c && c != a || a == c && c != b){
            cout << "TRIANGULO ISOSCELES" << endl;
    }
    }

    return 0;
}
