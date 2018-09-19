/*
Seu irmão mais novo aprendeu a escrever apenas um, dois e três, em Inglês. Ele escreveu muitas dessas palavras em um papel e a sua tarefa é reconhecê-las. Nota-se que o seu irmão mais novo é apenas uma criança, então ele pode fazer pequenos erros: para cada palavra, pode haver, no máximo, uma letra errada. O comprimento de palavra é sempre correto. É garantido que cada palavra que ele escreveu é em letras minúsculas, e cada palavra que ele escreveu tem uma interpretação única.

Entrada
A primeira linha contém o número de palavras que o seu irmão mais novo escreveu. Cada uma das linhas seguintes contém uma única palavra com todas as letras em minúsculo. As palavras satisfazem as restrições acima: no máximo uma letra poderia estar errada, mas o comprimento da palavra está sempre correto. Haverá, no máximo, 1000 palavras de entrada.

Saída
Para cada caso de teste, imprima o valor numérico da palavra.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    string p;

    cin >> n;

    for(int i=0; i < n; i++){
        cin >> p;
            if(p[0] == 'o' && p[1] == 'n' || p[0] == 'o' && p[2] == 'e' || p[1] == 'n' && p[2] == 'e'){
            cout << "1" << endl;
            }
            else if(p[0] == 't' && p[1] == 'w' || p[0] == 't' && p[2] == 'o' || p[1] == 'w' && p[2] == 'o'){
            cout << "2" << endl;
            }
            else if(p[0] == 't' && p[1] == 'h' && p[2] == 'r' && p[3] == 'e' || p[1] == 'h' && p[2] == 'r' && p[3] == 'e' && p[4] == 'e' || p[0] == 't' && p[2] == 'r' && p[3] == 'e' && p[4] == 'e' || p[0] == 't' && p[1] == 'h' && p[3] == 'e' && p[4] == 'e' || p[0] == 't' && p[1] == 'h' && p[2] == 'r' && p[4] == 'e'){
            cout << "3" << endl;
            }


    }

    return 0;
}