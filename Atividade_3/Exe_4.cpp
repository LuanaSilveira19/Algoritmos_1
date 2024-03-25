#include<iostream>
using namespace std;
//Faça um programa que recebe o número de horas trabalhadas, o valor do salário mínimo e o número de
//horas extras trabalhadas. Calcule e mostre o salário a receber, seguindo as seguintes regras:
//a) A hora trabalhada vale 1/8 do salário mínimo;
//b) A hora extra vale 1⁄4 do salário mínimo;
//c) O salário bruto equivale ao número de horas trabalhada multiplicada pelo valor da hora trabalhada;
//d) A quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas multiplicada
//pelo valor da hora extra.
//e) O salário a receber equivale ao salário bruto mais a quantia a receber pelas horas extras.
main ()
{
    setlocale (LC_ALL, "portuguese") ;
    float hTrab= 0, salmin= 0, hEx= 0, vHT= 0, vHET= 0;
    float salbruto= 0, hEXarec= 0, sFinal =0;

    cout<< "Informe o valor do salário minimo: ";
    cin>> salmin;

    cout<< "Informe o número de horas trabalhadas:";
    cin>> hTrab;

    cout<< "Informe a quantidade de horas extras:";
    cin>> hEx;

    vHT= salmin / 8;
    cout<<"O valor da hora trabalhada é de:"<< vHT << endl;

    vHET= salmin / 4;
    cout<<"A hora extra vale: "<< vHET << endl;

    salbruto= hTrab * vHT;
    cout<< "O salário bruto é de:"<< salbruto << endl;

    hEXarec= hTrab * vHET;
    cout <<" A quantiddade a receber pelas horas extras é de:"<< hEXarec << endl;

    sFinal= salbruto + hEXarec;
    cout <<"O salário a receber é de: " << sFinal << endl;

    return 0;
}

