/*
Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na origem (x = y = 0).

*imagem*

Se o ponto estiver na origem, escreva a mensagem “Origem”.

Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação.

Entrada
A entrada contem as coordenadas de um ponto.

Saída
A saída deve apresentar o quadrante em que o ponto se encontra.
*/

#include <iostream>
#include <math.h>
#include <cstdio>

using namespace std;

int main()
{
    float x, y;

    cin >> x >> y;

    if(x == 0 && y == 0){
        cout << "Origem" << endl;
    }
    else if(x == 0 && y != 0){
        cout << "Eixo Y" << endl;
    }
    else if(x != 0 && y == 0){
        cout << "Eixo X" << endl;
    }
    else if(x > 0){
        if(y > 0){
            cout << "Q1" << endl;
        }else if(y < 0){
            cout << "Q4" << endl;
            }
    }
    else if(x < 0){
        if(y > 0){
            cout << "Q2" << endl;
        }else if(y < 0){
            cout << "Q3" << endl;
        }

    }

    return 0;
}
