#include<iostream>
using namespace std;
//Elabore um algoritmo que receba um ano (numérico inteiro) e informe se o ano é bissexto ou não.
//Lembrete:
//São bissextos todos os anos múltiplos de 400, ex.: 1600, 2000, 2400, 2800...
//São bissextos todos os múltiplos de 4 e não múltiplos de 100, ex.: 1996, 2004, 2008, 2012, 2016...
//Não são bissextos todos os demais anos.
int main()
{
    setlocale(LC_ALL, "portuguese");

    int ano= 0;
    cout<< "Vamos descobrir quais anos são bissextos."<< endl;
    cout<< "Digite o ano que você quer descobrir:";
    cin>> ano;

    if ((ano % 4 == 0) && (ano % 100 != 0) || (ano % 400 == 0 ))
    cout<< "O ano é bissexto.";
    else
    cout<< "O ano não é bissexto. ";

}
