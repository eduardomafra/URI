/*
A empresa ABC resolveu conceder um aumento de salários a seus funcionários de acordo com a tabela abaixo:


Salário	
0 - 400.00
400.01 - 800.00
800.01 - 1200.00
1200.01 - 2000.00
Acima de 2000.00

Percentual de Reajuste
15%
12%
10%
7%
4%

Leia o salário do funcionário e calcule e mostre o novo salário, bem como o valor de reajuste ganho e o índice reajustado, em percentual.

Entrada
A entrada contém apenas um valor de ponto flutuante, com duas casas decimais.

Saída
Imprima 3 linhas na saída: o novo salário, o valor ganho de reajuste e o percentual de reajuste ganho, conforme exemplo abaixo.


Exemplo de Entrada	
400.00

Exemplo de Saída
Novo salario: 460.00
Reajuste ganho: 60.00
Em percentual: 15 %

*/

#include <iostream>

using namespace std;

int main()
{
    float salario, novoSalario;

    cin >> salario;

    if(salario >= 0 && salario <= 400){
        novoSalario = salario * 0.15 + salario;
        std::cout.precision(2);
        std::cout << std::fixed << "Novo salario: " << novoSalario << endl;
        cout << "Reajuste ganho: " << salario * 0.15 << endl;
        cout << "Em percentual: 15 %" << endl;
    }
    else if(salario > 400 && salario <= 800){
        novoSalario = salario * 0.12 + salario;
        std::cout.precision(2);
        std::cout << std::fixed << "Novo salario: " << novoSalario << endl;
        cout << "Reajuste ganho: " << salario * 0.12 << endl;
        cout << "Em percentual: 12 %" << endl;
    }
    else if(salario > 800 && salario <= 1200){
        novoSalario = salario * 0.10 + salario;
        std::cout.precision(2);
        std::cout << std::fixed << "Novo salario: " << novoSalario << endl;
        cout << "Reajuste ganho: " << salario * 0.10 << endl;
        cout << "Em percentual: 10 %" << endl;
    }
    else if(salario > 1200 && salario <= 2000){
        novoSalario = salario * 0.07 + salario;
        std::cout.precision(2);
        std::cout << std::fixed << "Novo salario: " << novoSalario << endl;
        cout << "Reajuste ganho: " << salario * 0.07 << endl;
        cout << "Em percentual: 7 %" << endl;
    }
    else if(salario > 2000){
        novoSalario = salario * 0.04 + salario;
        std::cout.precision(2);
        std::cout << std::fixed << "Novo salario: " << novoSalario << endl;
        cout << "Reajuste ganho: " << salario * 0.04 << endl;
        cout << "Em percentual: 4 %" << endl;
    }

    return 0;
}
