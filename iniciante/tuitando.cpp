/*
O microblog Twitter é conhecido por limitar as postagens em 140 caracteres. Conferir se um texto vai caber em um tuíte é sua tarefa.

Entrada
A entrada é uma linha de texto T (1 ≤ |T| ≤ 500).

Saída
A saída é dada em uma única linha. Ela deve ser "TWEET" (sem as aspas) se a linha de texto T tem até 140 caracteres. Se T tem mais de 140 caracteres, a saída deve ser "MUTE".
*/

#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    int cont=0;
    string t;

    getline(cin, t);

    for(int i=0; i < t.size(); i++){
        cont++;
    }

    if(cont <= 140){
        cout << "TWEET" << endl;
    }
    else{
        cout << "MUTE" << endl;
    }


    return 0;
}