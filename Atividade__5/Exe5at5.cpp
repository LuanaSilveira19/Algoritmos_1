
#include<iostream>
using namespace std;
//Escrever um algoritmo que leia três valores inteiros e verifique se eles podem ser os lados
//de um triângulo. Se forem, informar qual o tipo de triângulo que eles formam: equilátero, isóscele ou
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
    cout<< "Essas medidas não formam um triângulo."<< endl;

    else if ((L1 == L2) && (L1 == L3))
    {
    cout<< "Essas medidas são de um Triangulo Equilátero.";
    }
    else if ((L1 != L2) && (L1 !=L3) && (L2 != L3))
    {
    cout<< "Essas medidas são de um Triangulo Escaleno.";
    }
    else if ((L1 == L2) || (L1 == L3) || (L2 == L3))
    {
    cout<< "Essas medidas são de um triangulo Isósceles.";
    }

}
