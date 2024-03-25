#include<iostream>

using namespace std;
//Faça um algoritmo que calcule e imprima o valor da conta de luz, a partir da leitura do consumo em
//KW/k do mês anterior e do mês atual marcado no relógio. O cálculo deverá se basear nos dados da
//tabela abaixo.
main()
{

    float quant_kw1, quant_kw2, valor;

    cout<< "Informe a quantidade de KW gasta no mes atual:";
    cin>> quant_kw1;

    cout<< "Informe a quantidade de KW gasta no mes anterior:";
    cin>> quant_kw2;

    valor=  quant_kw1 - quant_kw2;

    if (valor >=0 && valor <= 70){
    cout<<"O valor da conta de luz e R$ " << valor * 0.09 << endl;
    }
    else
        if (valor >=71 && valor <= 150){
    cout<<"O valor da conta de luz e R$ " << valor * 0.20 << endl;
    }
    else
        if (valor >=151 && valor <= 200){
    cout<<"O valor da conta de luz e R$ " << valor * 0.23 << endl;
    }
    else
    if (valor > 200){
    cout<<"O valor da conta de luz e R$ " << valor * 0.26 << endl;
    }
}
