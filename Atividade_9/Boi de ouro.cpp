
#include<iostream>
#include<cstdio>
#include<cstdlib>
//O açougue Boi de Ouro está com a seguinte programação de picanha:
//Até 5 Kg Acima de 5 Kg
//R$ 32.50 por Kg R$ 29.90 por Kg

//Se o cliente comprar mais de 10 Kg de picanha ou o valor total da compra ultrapassar R$ 300.00, receberá
//ainda um desconto de 12% sobre este total. Escreva um programa em C++ para ler a quantidade (em Kg) de
//picanha e mostre o valor a ser pago pelo cliente.

using namespace std;

main()

{

        setlocale(LC_ALL, "portuguese");
        float peso, valor = 0;


        cout << "Informe a quantidade de picanha (em Kg): ";
        cin >> peso;

        if( peso<=5)
        {
            valor= 32.50 * peso;
        }
        else if (peso > 5)
            valor= 29.90 * peso;
        if( peso > 10 || valor > 300)
        valor= valor - (valor * 12/100.0);
        cout<< "O valor pago pelo cliente é:"<< valor<< endl;
    }
