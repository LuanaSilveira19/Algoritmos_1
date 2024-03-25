#include<iostream>

using namespace std;
//Dados três valores A, B e C, em que A e B são números inteiros e C é um caractere, pede-se para
//imprimir o resultado da operação de A por B se C for um símbolo de operador aritmético válido;
//caso contrário deve ser impressa uma mensagem de operador não definido. Tratar erro de divisão
//por zero.
main()
{
    setlocale(LC_ALL, "portuguese");
    int a, b, res;
    char c;

    cout<< "Informe o primeiro número:";
    cin>> a;

    cout<< "Informe o segundo número:";
    cin>> b;

    cout<< "Informe o símbulo do operador aritimético:";
    cin>> c;

    if (c == '+')
    {
        res=a+b;
        cout<< "O valor da soma desses números é: "<< res << endl;
    }
    else if (c == '-')
    {
        res=a-b;
        cout<< "O valor da subtração desses números é: "<< res << endl;
    }
    else if (c == '*')
    {
        res=a*b;
        cout<< "O valor da multiplicação desses números é: "<< res << endl;
    }
    else if (c == '/')
    {
        res=a / b;
        cout<< "O valor da divisão desses números é: "<< res << endl;
    }
    else
    {
        cout << "Valor invalido";
    }
}
