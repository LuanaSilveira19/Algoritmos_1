#include<iostream>

using namespace std;
//Dados tr�s valores A, B e C, em que A e B s�o n�meros inteiros e C � um caractere, pede-se para
//imprimir o resultado da opera��o de A por B se C for um s�mbolo de operador aritm�tico v�lido;
//caso contr�rio deve ser impressa uma mensagem de operador n�o definido. Tratar erro de divis�o
//por zero.
main()
{
    setlocale(LC_ALL, "portuguese");
    int a, b, res;
    char c;

    cout<< "Informe o primeiro n�mero:";
    cin>> a;

    cout<< "Informe o segundo n�mero:";
    cin>> b;

    cout<< "Informe o s�mbulo do operador aritim�tico:";
    cin>> c;

    if (c == '+')
    {
        res=a+b;
        cout<< "O valor da soma desses n�meros �: "<< res << endl;
    }
    else if (c == '-')
    {
        res=a-b;
        cout<< "O valor da subtra��o desses n�meros �: "<< res << endl;
    }
    else if (c == '*')
    {
        res=a*b;
        cout<< "O valor da multiplica��o desses n�meros �: "<< res << endl;
    }
    else if (c == '/')
    {
        res=a / b;
        cout<< "O valor da divis�o desses n�meros �: "<< res << endl;
    }
    else
    {
        cout << "Valor invalido";
    }
}
