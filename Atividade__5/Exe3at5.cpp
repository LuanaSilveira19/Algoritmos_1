#include<iostream>
using namespace std;
// Escrever um algoritmo para uma empresa que decide dar um reajuste a seus funcion�rios de acordo
//com os seguintes crit�rios:
//a) 50% para aqueles que ganham menos do que tr�s sal�rios m�nimos;
//b) 20% para aqueles que ganham entre tr�s at� dez sal�rios m�nimos;
//c) 15% para aqueles que ganham acima de dez at� vinte sal�rios m�nimos;
//d) 10% para os demais funcion�rios.
//Leia o nome do funcion�rio, seu sal�rio e o valor do sal�rio m�nimo. Calcule o seu novo sal�rio reajustado.
//Escrever o nome do funcion�rio, o valor do reajuste e o seu novo sal�rio.
main()
{
    setlocale (LC_ALL, "portuguese");
    float SalAtual, SalMin, reajuste, SalNovo, FPgto, QntSal;
    char nome [40];
    cout<< "Reajuste salarial dos funcion�rios." <<endl;

    cout<< "Informe o valor do sal�rio m�nimo:";
    cin>> SalMin;

    cout<< "Digite o nome do funcion�rio: ";
    cin>> nome;

    cout<<"Digite o Sal�rio Atual desse funcion�rio:";
    cin>> SalAtual;


    QntSal= SalAtual / SalMin;

    if (QntSal <= 3)
    {
        reajuste= SalAtual * 0.5;
        SalNovo = SalAtual + reajuste;
        cout<<"O sal�rio de "<< nome << " reajustado em 50% ficar� no total de: R$"<< SalNovo << endl;

    }
    else if ((QntSal > 3) && (QntSal <= 10))
    {
        reajuste= SalAtual * 0.2;
        SalNovo = SalAtual + reajuste;
        cout<<"O sal�rio de "<< nome << " reajustado em 20% ficar� no total de: R$"<< SalNovo << endl;
    }
    else if ((QntSal >10) && (QntSal <= 20))
    {
        reajuste= SalAtual * 0.15;
        SalNovo = SalAtual + reajuste;
        cout<<"O sal�rio  de"<< nome << " reajustado em 15% ficar� no total de: R$"<< SalNovo << endl;
    }
    else if (QntSal >20)
    {
        reajuste= SalAtual * 0.1;
        SalNovo = SalAtual + reajuste;
        cout<<"O sal�rio de "<< nome << " reajustado em 10% ficar� no total de: R$"<< SalNovo << endl;

    }
}
