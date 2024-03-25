#include<iostream>
using namespace std;
//Os funcionários de uma empresa receberam um aumento de salário:
//1) Técnicos: 50% 2) Gerentes: 30% 3) Demais: 20%
//Escreva um algoritmo que receba como entrada o salário atual e o cargo do funcionário, e apresente o
//novo salário após o aumento. Imprima também o cargo, de acordo com a entrada digitada
main()
{
    setlocale(LC_ALL, "portuguese");

    int tecnicos= 0, gerentes= 0, demais= 0;
    float salario1= 0, salario2= 0, salario3= 0;
    float aum1= 0, aum2= 0, aum3= 0;

    cout<< "Informe o salário de cada funcionário:" <<endl;
    cout <<"Técnicos:";
    cin >> salario1;

    cout <<"Gerentes:";
    cin >> salario2;

    cout <<"Demais funcionários:";
    cin >> salario3;

    tecnicos= salario1 * 50 / 100 ;
    aum1= salario1 + tecnicos;

    cout<< "O salário dos Técnicos pós aumento vai ser de: R$"<< aum1 << endl;

    gerentes= salario2 * 30 / 100 ;
    aum2= salario2 + gerentes;

    cout<< "O salário dos Gerentes pós aumento vai ser de: R$"<< aum2 << endl;

    demais= salario3 * 20 / 100 ;
    aum3= salario3 + demais;

    cout<< "O salário dos demais funcionários pós aumento vai ser de: R$"<< aum3 << endl;
}
