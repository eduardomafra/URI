/*
João quer montar um painel de leds contendo diversos números. Ele não possui muitos leds, e não tem certeza se conseguirá montar o número desejado. Considerando a configuração dos leds dos números abaixo, faça um algoritmo que ajude João a descobrir a quantidade de leds necessário para montar o valor.

*imagem do led*

Entrada
A entrada contém um inteiro N, (1 ≤ N ≤ 1000) correspondente ao número de casos de teste, seguido de N linhas, cada linha contendo um número (1 ≤ V ≤ 10100) correspondente ao valor que João quer montar com os leds.

Saída
Para cada caso de teste, imprima uma linha contendo o número de leds que João precisa para montar o valor desejado, seguido da palavra "leds".
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, led=0;
    string a;

    cin >> n;

    for(int i=0; i < n; i++){
        led = 0;
        cin >> a;
        for(int j=0; j <= a.size(); j++){
            switch(a[j]){
                case '1': led = led + 2; break;
                case '2': led = led + 5; break;
                case '3': led = led + 5; break;
                case '4': led = led + 4; break;
                case '5': led = led + 5; break;
                case '6': led = led + 6; break;
                case '7': led = led + 3; break;
                case '8': led = led + 7; break;
                case '9': led = led + 6; break;
                case '0': led = led + 6; break;

            }
        }
        cout << led << " leds" << endl;
    }

    return 0;
}
