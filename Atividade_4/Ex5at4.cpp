#include<iostream>
using namespace std;
//Os funcion�rios de uma empresa receberam um aumento de sal�rio:
//1) T�cnicos: 50% 2) Gerentes: 30% 3) Demais: 20%
//Escreva um algoritmo que receba como entrada o sal�rio atual e o cargo do funcion�rio, e apresente o
//novo sal�rio ap�s o aumento. Imprima tamb�m o cargo, de acordo com a entrada digitada
main()
{
    setlocale(LC_ALL, "portuguese");

    int tecnicos= 0, gerentes= 0, demais= 0;
    float salario1= 0, salario2= 0, salario3= 0;
    float aum1= 0, aum2= 0, aum3= 0;

    cout<< "Informe o sal�rio de cada funcion�rio:" <<endl;
    cout <<"T�cnicos:";
    cin >> salario1;

    cout <<"Gerentes:";
    cin >> salario2;

    cout <<"Demais funcion�rios:";
    cin >> salario3;

    tecnicos= salario1 * 50 / 100 ;
    aum1= salario1 + tecnicos;

    cout<< "O sal�rio dos T�cnicos p�s aumento vai ser de: R$"<< aum1 << endl;

    gerentes= salario2 * 30 / 100 ;
    aum2= salario2 + gerentes;

    cout<< "O sal�rio dos Gerentes p�s aumento vai ser de: R$"<< aum2 << endl;

    demais= salario3 * 20 / 100 ;
    aum3= salario3 + demais;

    cout<< "O sal�rio dos demais funcion�rios p�s aumento vai ser de: R$"<< aum3 << endl;
}
