
#include<iostream>
using namespace std;
//Faça um algoritmo que leia a velocidade permitida em uma via, a velocidade praticada por um
//motorista, e informe se o mesmo receberá multa ou não, e o valor a pagar. Caso tenha excedido a
//velocidade em até 20% da permitida, o motorista deve receber uma multa de R$ 102,00. Caso tenha
//excedido a velocidade acima de 20% da permitida, o motorista receberá uma multa de R$ 500,00.

main()
{
    setlocale (LC_ALL, "portuguese");
    int velocidade_via, velocidade_mot, valor;

    cout<<"Insira a velocidade em KM da via:";
    cin>>velocidade_via;

    cout<<"Digite a velocidade que você passou pela via:";
    cin>>velocidade_mot;

    if (velocidade_mot <= velocidade_via)
    {
        cout<< "O motorista não recebe multa, passou dentro da velocidade permitida.";
    }

    else

        if (velocidade_mot - velocidade_via <= velocidade_via * 0.2)
        {
            cout<<"O motorista vai receber uma multa de R$ 102.00.";
        }
        else

            if (velocidade_mot - velocidade_via > velocidade_via * 0.2)
            {
                cout<<"O motorista vai receber uma multa de R$ 500.00.";
            }
            else;




}
