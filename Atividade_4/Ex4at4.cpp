#include<iostream>
using namespace std;
//Elabore um algoritmo que receba um ano (num�rico inteiro) e informe se o ano � bissexto ou n�o.
//Lembrete:
//S�o bissextos todos os anos m�ltiplos de 400, ex.: 1600, 2000, 2400, 2800...
//S�o bissextos todos os m�ltiplos de 4 e n�o m�ltiplos de 100, ex.: 1996, 2004, 2008, 2012, 2016...
//N�o s�o bissextos todos os demais anos.
int main()
{
    setlocale(LC_ALL, "portuguese");

    int ano= 0;
    cout<< "Vamos descobrir quais anos s�o bissextos."<< endl;
    cout<< "Digite o ano que voc� quer descobrir:";
    cin>> ano;

    if ((ano % 4 == 0) && (ano % 100 != 0) || (ano % 400 == 0 ))
    cout<< "O ano � bissexto.";
    else
    cout<< "O ano n�o � bissexto. ";

}
