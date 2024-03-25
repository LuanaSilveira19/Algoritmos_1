#include<iostream>
using namespace std;
// Escrever um algoritmo para uma empresa que decide dar um reajuste a seus funcionários de acordo
//com os seguintes critérios:
//a) 50% para aqueles que ganham menos do que três salários mínimos;
//b) 20% para aqueles que ganham entre três até dez salários mínimos;
//c) 15% para aqueles que ganham acima de dez até vinte salários mínimos;
//d) 10% para os demais funcionários.
//Leia o nome do funcionário, seu salário e o valor do salário mínimo. Calcule o seu novo salário reajustado.
//Escrever o nome do funcionário, o valor do reajuste e o seu novo salário.
main()
{
    setlocale (LC_ALL, "portuguese");
    float SalAtual, SalMin, reajuste, SalNovo, FPgto, QntSal;
    char nome [40];
    cout<< "Reajuste salarial dos funcionários." <<endl;

    cout<< "Informe o valor do salário mínimo:";
    cin>> SalMin;

    cout<< "Digite o nome do funcionário: ";
    cin>> nome;

    cout<<"Digite o Salário Atual desse funcionário:";
    cin>> SalAtual;


    QntSal= SalAtual / SalMin;

    if (QntSal <= 3)
    {
        reajuste= SalAtual * 0.5;
        SalNovo = SalAtual + reajuste;
        cout<<"O salário de "<< nome << " reajustado em 50% ficará no total de: R$"<< SalNovo << endl;

    }
    else if ((QntSal > 3) && (QntSal <= 10))
    {
        reajuste= SalAtual * 0.2;
        SalNovo = SalAtual + reajuste;
        cout<<"O salário de "<< nome << " reajustado em 20% ficará no total de: R$"<< SalNovo << endl;
    }
    else if ((QntSal >10) && (QntSal <= 20))
    {
        reajuste= SalAtual * 0.15;
        SalNovo = SalAtual + reajuste;
        cout<<"O salário  de"<< nome << " reajustado em 15% ficará no total de: R$"<< SalNovo << endl;
    }
    else if (QntSal >20)
    {
        reajuste= SalAtual * 0.1;
        SalNovo = SalAtual + reajuste;
        cout<<"O salário de "<< nome << " reajustado em 10% ficará no total de: R$"<< SalNovo << endl;

    }
}
