#include<iostream>

using namespace std;
//Escreva um programa que receba um n�mero inteiro N qualquer, de tal forma que
//N > 0 e N < 9999, validar para aceitar n�mero no intervalo definido.
//Se o valor informado for v�lido, apresentar uma mensagem indicando se o n�mero � uma dezena, uma
//centena ou um milhar
main()
{
    setlocale(LC_ALL, "portuguese");
    int n= 0;

    cout<< "Digite um n�mero:";
    cin>> n;

    if (n>999 && n< 9999)
    {
        cout<< "O n�mero � um milhar.";
    }
    else
    if (n>99 && n<999)
        {
            cout<< "O n�mero � uma centena.";
        }
    else
        if (n>0 && n< 99)
    {
        cout<< "O n�mero � uma dezena.";
    }
    else
        cout<< "Valor invalido.";
}
