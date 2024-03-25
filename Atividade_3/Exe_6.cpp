
#include<iostream>
using namespace std;
//Suponha que um caixa eletrônico disponha apenas de notas de 1, 2, 5, 10, 20, 50 e 100 reais.
//Considerando que alguém está sacando um determinado valor, escreva um algoritmo que mostre a
//quantidade de cada tipo de notas que o caixa deve fornecer. Suponha que o sistema monetário não utilize
//centavos.
int main ()
{
    setlocale (LC_ALL, "portuguese") ;
    int nota100, nota50, nota20, nota10, nota5, nota2, nota1, valor;

    cout<< "Informe o valor que você quer sacar: ";
    cin>> valor;

    //cout<<fixed;
    //cout.precision (2);

    nota100= valor/100;
    valor= valor%100;

    nota50= valor/50;
    valor= valor%50;

    nota20= valor/20;
    valor= valor%20;

    nota10= valor/10;
    valor= valor%10;

    nota5= valor/5;
    valor= valor%5;

    nota2= valor/2;
    valor= valor%2;

    nota1= valor/1;
    valor= valor%1;

    cout<< "Quantidade retirada de notas de 100: "<< nota100<< endl;
    cout<< "Quantidade retirada de notas de 50: "<< nota50<< endl;
    cout<< "Quantidade retirada de notas de 20: "<< nota20<< endl;
    cout<< "Quantidade retirada de notas de 10: "<< nota10<< endl;
    cout<< "Quantidade retirada de notas de 5: "<< nota5<< endl;
    cout<< "Quantidade retirada de notas de 2: "<< nota2<< endl;
    cout<< "Quantidade retirada de notas de 1: "<< nota1<< endl;
    return 0;
}


