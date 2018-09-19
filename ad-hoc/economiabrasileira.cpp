/*
Ultimamente a economia brasileira tornou-se o assunto de todos os jornais. A população brasileira têm diferentes opiniões sobre o cenário econômico atual. Sua tarefa é fazer uma pesquisa para saber se a maioria da população está ou não satisfeita com o cenário econômico atual.

Entrada
A primeira linha contém um inteiro Q (4 ≤ Q ≤ 233000) representando o número de pessoas que participaram da pesquisa. A segunda linha contém Q inteiros Vi (0 ≤Vi ≤ 1, 1 ≤ i ≤ Q), representando a opinião do i-ésimo cidadão Brasileiro sobre o cenário econômico atual. Sendo "0" os que consideram o cenário atual satisfatório e "1" os que consideram não satisfatório.

Saída
Seu programa deve imprimir "Y" caso a maioria da população esteja de acordo com o cenário econômico. Caso contrário imprima "N"
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int q, s=0, n=0;

    cin >> q;

    int v[q];

    for(int i=0;i<(sizeof(v)/sizeof(*v));i++){
        do{
        cin >> v[i];
        }while(v[i]!=0 && v[i]!=1);
    }

    for(int i=0;i<(sizeof(v)/sizeof(*v));i++){
        if(v[i]==0){
            s++;
        }else{
            n++;
        }
    }

    if(n>=s){
        cout << "N" << endl;
    }else{
        cout << "Y" << endl;
    }

    return 0;
}