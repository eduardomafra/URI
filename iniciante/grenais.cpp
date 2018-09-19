/*
A Federação Gaúcha de Futebol contratou você para escrever um programa para fazer uma estatística do resultado de vários GRENAIS. Escreva um programa para ler o número de gols marcados pelo Inter e pelo Grêmio em um GRENAL. Logo após escrever a mensagem "Novo grenal (1-sim 2-nao)" e solicitar uma resposta. Se a resposta for 1, o algoritmo deve ser executado novamente solicitando o número de gols marcados pelos times em uma nova partida, caso contrário deve ser encerrado imprimindo:

- Quantos GRENAIS fizeram parte da estatística.
- O número de vitórias do Inter.
- O número de vitórias do Grêmio.
- O número de Empates.
- Uma mensagem indicando qual o time que venceu o maior número de GRENAIS (ou "Nao houve vencedor", caso termine empatado).

Entrada
O arquivo de entrada contém 2 valores inteiros, correspondentes aos gols marcados pelo Inter e pelo Grêmio respectivamente. Em seguida háverá um inteiro (1 ou 2), correspondente à repetição do programa.

Saída
Após cada leitura dos gols, deve ser impressa a mensagem "Novo grenal (1-sim 2-nao)". Quando o algoritmo for encerrado devem ser mostradas as estatísticas conforme a descrição apresentada acima. Obs: a palavra "Gremio" deve ser impressa sem acento, conforme o exemplo abaixo.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int inter=0, gremio=0, op=0, interwin=0, gremiowin=0, empate=0, grenais=0;

    do{
    cin >> inter >> gremio;

    if(inter > gremio){
        interwin++;
    }else if(gremio > inter){
        gremiowin++;
    }
    else if(inter == gremio){
        empate++;
    }

    grenais++;

    cout << "Novo grenal (1-sim 2-nao)" << endl;
    cin >> op;

    }while(op != 2);

    cout << grenais << " grenais" << endl;

    cout << "Inter:" << interwin << endl << "Gremio:" << gremiowin << endl << "Empates:" << empate << endl;

    if(interwin > gremiowin){
        cout << "Inter venceu mais" << endl;
    }
    else if(gremiowin > interwin){
        cout << "Gremio venceu mais" << endl;
    }
    else{
        cout << "Nao houve vencedor" << endl;
    }

    return 0;
}