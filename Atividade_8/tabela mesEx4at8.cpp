#include<iostream>
#include<cstdio>
#include<cstdlib>
//Jo�o possui R$ 1.800,00. Gostaria de comprar um computador que custa R$ 2.000. Ele gosta de
//aplicar seu dinheiro na caderneta de poupan�a, que paga sempre 1,5% ao m�s. Supondo que o pre�o
//do computador n�o mude, escreva um algoritmo que calcule em quantos meses Jo�o ir� poder comprar
//o computador, mostrando a evolu��o de seu saldo na poupan�a, conforme o modelo abaixo:
using namespace std;

main()
{
    int mes=1;
    float v, p, fim, correcao;
    setlocale(LC_ALL,"Portuguese");

    cout<<"Informe o valor:";
    cin>> v;

    cout<< "Informe o percentual:";
    cin>> p;

    cout<< "Informe o valor final:";
    cin>> fim;

    cout<< "M�s\t"<< "Saldo anterior\t"<< "Juros\t"<< "Saldo atual"<<endl;
    while (v < fim)
    {

        cout<< mes << "\t";
        cout<< v << "\t""\t";
        correcao= (p/100.0)* v;
        cout<< correcao << "\t";
        v+=correcao;
        cout<< v << "\t"<<endl;

        mes++;
    }

}
