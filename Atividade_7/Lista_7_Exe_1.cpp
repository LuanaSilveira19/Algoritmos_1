/*
1 � Escrever um programa que l� 12 valores reais para a vari�vel �B�,
um de cada vez. Mostrar a soma
dos valores lidos menores que 50;
*/

#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

main()
{
    setlocale(LC_ALL,"Portuguese");
    int x = 1, soma = 0, b;
    while(x <= 12)
    {
        cout << "Informe o n�mero " << x << ": ";
        cin >> b;
        if(b < 50)
           soma = soma + b;
        x++;
    }

    cout << "\n\nSoma dos valores menores que 50: " << soma;
}
