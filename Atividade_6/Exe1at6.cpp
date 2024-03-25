#include<iostream>

using namespace std;
//Escreva um programa que receba um número inteiro N qualquer, de tal forma que
//N > 0 e N < 9999, validar para aceitar número no intervalo definido.
//Se o valor informado for válido, apresentar uma mensagem indicando se o número é uma dezena, uma
//centena ou um milhar
main()
{
    setlocale(LC_ALL, "portuguese");
    int n= 0;

    cout<< "Digite um número:";
    cin>> n;

    if (n>999 && n< 9999)
    {
        cout<< "O número é um milhar.";
    }
    else
    if (n>99 && n<999)
        {
            cout<< "O número é uma centena.";
        }
    else
        if (n>0 && n< 99)
    {
        cout<< "O número é uma dezena.";
    }
    else
        cout<< "Valor invalido.";
}
