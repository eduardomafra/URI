/*
Leia um valor inteiro entre 1 e 12, inclusive. Correspondente a este valor, deve ser apresentado como resposta o mês do ano por extenso, em inglês, com a primeira letra maiúscula.

Entrada
A entrada contém um único valor inteiro.

Saída
Imprima por extenso o nome do mês correspondente ao número existente na entrada, com a primeira letra em maiúscula.
*/

#include <iostream>

using namespace std;

int main()
{
    int mes;
    cin >> mes;

    switch(mes){
    case 1 : cout << "January"; break;
    case 2 : cout << "February"; break;
    case 3 : cout << "March"; break;
    case 4 : cout << "April"; break;
    case 5 : cout << "May"; break;
    case 6 : cout << "June"; break;
    case 7 : cout << "July"; break;
    case 8 : cout << "August"; break;
    case 9 : cout << "September"; break;
    case 10 : cout << "October"; break;
    case 11 : cout << "November"; break;
    case 12 : cout << "December"; break;
    default : cout << "Mes invalido.";
    }
    cout << "\n";
    return 0;
}