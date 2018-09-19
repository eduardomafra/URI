/*
Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre: 
a) a área do triângulo retângulo que tem A por base e C por altura. 
b) a área do círculo de raio C. (pi = 3.14159) 
c) a área do trapézio que tem A e B por bases e C por altura. 
d) a área do quadrado que tem lado B. 
e) a área do retângulo que tem lados A e B. 
Entrada
O arquivo de entrada contém três valores com um dígito após o ponto decimal.

Saída
O arquivo de saída deverá conter 5 linhas de dados. Cada linha corresponde a uma das áreas descritas acima, sempre com mensagem correspondente e um espaço entre os dois pontos e o valor. O valor calculado deve ser apresentado com 3 dígitos após o ponto decimal.
*/

#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    std::cout.precision(3);
    std::cout << "TRIANGULO: " << std::fixed << (a*c)/2 << endl;
    std::cout << "CIRCULO: " << std::fixed << (c*c)*3.14159 << endl;
    std::cout << "TRAPEZIO: " << std::fixed << c*(a+b)/2 << endl;
    std::cout << "QUADRADO: " << std::fixed << b*b << endl;
    std::cout << "RETANGULO: " << std::fixed << a*b << endl;
    return 0;
}
