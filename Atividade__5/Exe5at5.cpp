
#include<iostream>
using namespace std;
//Escrever um algoritmo que leia tr�s valores inteiros e verifique se eles podem ser os lados
//de um tri�ngulo. Se forem, informar qual o tipo de tri�ngulo que eles formam: equil�tero, is�scele ou
//escaleno.

main()
{
    setlocale (LC_ALL, "portuguese");
    int L1, L2, L3, S1, S2, S3;

    cout<<"Informe o primeiro valor para um lado do triangulo:";
    cin>> L1;

     cout<<"Informe outro valor para o segundo lado do triangulo:";
    cin>> L2;

     cout<<"Informe outro valor para o terceiro lado do triangulo:";
    cin>> L3;

    if ((L1 + L2 < L3) ||(L2 + L3 < L1) || (L3 + L1 < L2))
    cout<< "Essas medidas n�o formam um tri�ngulo."<< endl;

    else if ((L1 == L2) && (L1 == L3))
    {
    cout<< "Essas medidas s�o de um Triangulo Equil�tero.";
    }
    else if ((L1 != L2) && (L1 !=L3) && (L2 != L3))
    {
    cout<< "Essas medidas s�o de um Triangulo Escaleno.";
    }
    else if ((L1 == L2) || (L1 == L3) || (L2 == L3))
    {
    cout<< "Essas medidas s�o de um triangulo Is�sceles.";
    }

}
