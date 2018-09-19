/*
Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e imprima a média semestral. Faça com que o algoritmo só aceite notas válidas (uma nota válida deve pertencer ao intervalo [0,10]). Cada nota deve ser validada separadamente.

Entrada
A entrada contém vários valores reais, positivos ou negativos. O programa deve ser encerrado quando forem lidas duas notas válidas.

Saída
Se uma nota inválida  for lida, deve ser impressa a mensagem "nota invalida".
Quando duas notas válidas forem lidas, deve ser impressa a mensagem "media = " seguido do valor do cálculo. O valor deve ser apresentado com duas casas após o ponto decimal.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float n1=0, n2=0, media;

        do{
        cin >> n1;
        if(n1 < 0 || n1 > 10){
            cout << "nota invalida" << endl;
        }
        }while(n1 < 0 || n1 > 10);

        do{
        cin >> n2;
        if(n2 < 0 || n2 > 10){
            cout << "nota invalida" << endl;
        }
        }while(n2 < 0 || n2 > 10);

        media = (n1+n2)/2;

        std::cout.precision(2);
        std::cout << std::fixed << "media = " << media << endl;

    return 0;
}