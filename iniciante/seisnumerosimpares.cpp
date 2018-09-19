/*
Leia um valor inteiro X. Em seguida apresente os 6 valores ímpares consecutivos a partir de X, um valor por linha, inclusive o X ser for o caso.

Entrada
A entrada será um valor inteiro positivo.

Saída
A saída será uma sequência de seis números ímpares.
*/

#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    for(int i=n; i < n+12; i++){
        if(i%2 != 0){
            cout << i << endl;
        }
    }

    return 0;
}
