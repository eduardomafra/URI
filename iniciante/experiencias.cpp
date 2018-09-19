/*
Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para organizar os experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano, quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada.

Este laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas informações, ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia utilizada e a quantidade de cobaias utilizadas em cada experimento.

Entrada
A primeira linha de entrada contém um valor inteiro N que indica os vários casos de teste que vem a seguir. Cada caso de teste contém um inteiro Quantia (1 ≤ Quantia ≤ 15) que representa a quantidade de cobaias utilizadas e um caractere Tipo ('C', 'R' ou 'S'), indicando o tipo de cobaia (R:Rato S:Sapo C:Coelho).

Saída
Apresente o total de cobaias utilizadas, o total de cada tipo de cobaia utilizada e o percentual de cada uma em relação ao total de cobaias utilizadas, sendo que o percentual deve ser apresentado com dois dígitos após o ponto.
*/

#include <iostream>
#include <math.h>
#include <cstdio>

using namespace std;

int main()
{

    float quantia, soma=0, coelho=0, rato=0, sapo=0, n, coelhopc, ratopc, sapopc;
    char tipo;

    cin >> n;

    for(int i=0; i < n; i++){
        cin >> quantia;
        cin >> tipo;
        if(tipo == 'C'){
            coelho = coelho + quantia;
        }
        else if(tipo == 'R'){
            rato = rato + quantia;
        }
        else if(tipo == 'S'){
            sapo = sapo + quantia;
        }

        soma = soma + quantia;

    }


    coelhopc = (coelho*100)/soma;
    ratopc = (rato*100)/soma;
    sapopc = (sapo*100)/soma;
    cout << "Total: " << soma << " cobaias" << endl;
    cout << "Total de coelhos: " << coelho << endl;
    cout << "Total de ratos: " << rato << endl;
    cout << "Total de sapos: " << sapo << endl;
    std::cout.precision(2);
    std::cout << std::fixed << "Percentual de coelhos: " << coelhopc << " %" << endl;
    std::cout << std::fixed << "Percentual de ratos: " << ratopc << " %" << endl;
    std::cout << std::fixed << "Percentual de sapos: " << sapopc << " %" << endl;





    return 0;
}
